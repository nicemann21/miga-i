
#include "stdafx.h"
#include "comm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

IMPLEMENT_DYNCREATE(CComm, CObject)



CComm::CComm( )
{
   idComDev=NULL;
   bFlowCtrl= FC_XONXOFF ;
   fConnected      = FALSE ;
}

CComm::~CComm( )
{
    DestroyComm();
}


/////////////////////////////////////////////////////////////////////////////
// CComm message handlers
//Comm
DWORD CommWatchProc(LPVOID lpData)
{
   DWORD       dwEvtMask ;
   OVERLAPPED  os ;
   CComm*      npComm = (CComm*) lpData ;
  

   if ( npComm == NULL || 
      !npComm->IsKindOf( RUNTIME_CLASS( CComm ) ) )
      return (DWORD)(-1);

   memset( &os, 0, sizeof( OVERLAPPED ) ) ;


   os.hEvent = CreateEvent( NULL,    // no security
                            TRUE,    // explicit reset req
                            FALSE,   // initial event reset
                            NULL ) ; // no name
   if ( os.hEvent == NULL )
   {
      MessageBox( NULL, "Failed to create event for thread!", "comm Error!",
                  MB_ICONEXCLAMATION | MB_OK ) ;
      return ( FALSE ) ;
   }

   if (!SetCommMask(npComm->idComDev, EV_RXCHAR ))
      return ( FALSE ) ;

   while (npComm->fConnected )
   {
		dwEvtMask = 0 ;

		WaitCommEvent(npComm->idComDev, &dwEvtMask, NULL );

		if ((dwEvtMask & EV_RXCHAR) == EV_RXCHAR)
		{

		
		}
   }

  
   CloseHandle( os.hEvent ) ;


   return( TRUE ) ;

} 

void CComm::SetComPort(int port,DWORD rate,BYTE bytesize,BYTE stop,BYTE parity)
{
   bPort=(BYTE)port;
   dwBaudRate=rate;
   bByteSize=bytesize;
   bStopBits=stop;
   bParity=parity;
}

BOOL CComm::CreateCommInfo()
{


   osWrite.Offset = 0 ;
   osWrite.OffsetHigh = 0 ;
   osRead.Offset = 0 ;
   osRead.OffsetHigh = 0 ;


   osRead.hEvent = CreateEvent( NULL, TRUE, FALSE, NULL ) ; 
   if (osRead.hEvent == NULL)
   {
      return FALSE ;
   }
   osWrite.hEvent = CreateEvent( NULL,   TRUE,  FALSE,   NULL ) ;
   if (NULL == osWrite.hEvent)
   {
      CloseHandle( osRead.hEvent ) ;
      return FALSE;
   }


   return TRUE ;

} 

//OpenComport()
BOOL CComm::OpenComPort( )
{            
   char       szPort[ 15 ] ;
   BOOL       fRetVal ;
   COMMTIMEOUTS  CommTimeOuts ;


   if (bPort > MAXPORTS)
      lstrcpy( szPort, "\\\\.\\TELNET" ) ;
   else
      wsprintf( szPort, "COM%d", bPort ) ;

   

   if ((idComDev =
      CreateFile( szPort, GENERIC_READ | GENERIC_WRITE,
                  0,                    // exclusive access
                  NULL,                 // no security attrs
                  OPEN_EXISTING,
                   FILE_ATTRIBUTE_NORMAL | 
                  FILE_FLAG_OVERLAPPED, // overlapped I/O
                  NULL )) == (HANDLE) -1 )
      return ( FALSE ) ;
   else
   {
      
      SetCommMask( idComDev, EV_RXCHAR ) ;
      SetupComm( idComDev, 4096, 4096 ) ;
      
      PurgeComm( idComDev, PURGE_TXABORT | PURGE_RXABORT |
                                      PURGE_TXCLEAR | PURGE_RXCLEAR ) ;

     
      CommTimeOuts.ReadIntervalTimeout = 0xFFFFFFFF ;
      CommTimeOuts.ReadTotalTimeoutMultiplier = 0 ;
      CommTimeOuts.ReadTotalTimeoutConstant = 10000 ;
      CommTimeOuts.WriteTotalTimeoutMultiplier = 0 ;
      CommTimeOuts.WriteTotalTimeoutConstant = 10000 ;
      SetCommTimeouts( idComDev, &CommTimeOuts ) ;
   }

   fRetVal = SetupConnection() ;

   if (fRetVal)
   {
      fConnected = TRUE ;
      AfxBeginThread((AFX_THREADPROC)CommWatchProc,(LPVOID)this);
   }
   else
   {
      fConnected = FALSE ;
      CloseHandle( idComDev) ;
   }

   return ( fRetVal ) ;

} 


BOOL CComm::SetupConnection()
{
   BOOL       fRetVal ;
  // BYTE       bSet ;
   DCB        dcb ;

   dcb.DCBlength = sizeof( DCB ) ;

   GetCommState( idComDev, &dcb ) ;//

   
   dcb.BaudRate = dwBaudRate;//
   dcb.ByteSize = bByteSize ;//
   dcb.Parity = bParity;//
   dcb.StopBits = bStopBits;//

   dcb.fOutxDsrFlow =0 ;//Dsr Flow
   dcb.fDtrControl = DTR_CONTROL_ENABLE ;//Dtr Control
   dcb.fOutxCtsFlow = 0 ;//Cts Flow
   dcb.fRtsControl = RTS_CONTROL_ENABLE ; //Ctr Control
   dcb.fInX = dcb.fOutX = 1 ; //XON/XOFF 
   dcb.XonChar = ASCII_XON ;
   dcb.XoffChar = ASCII_XOFF ;
   dcb.XonLim = 100 ;
   dcb.XoffLim = 100 ;
   dcb.fBinary = TRUE ;
   dcb.fParity = TRUE ;



   dcb.fBinary = TRUE ;
   dcb.fParity = TRUE ;

   fRetVal = SetCommState( idComDev, &dcb ) ; //

   return ( fRetVal ) ;

} 


BOOL CComm::DestroyComm()
{


   if (fConnected)
      CloseConnection( ) ;

//ditutup dulu. stackoverflaw di sini soalnya (9/7/12)
//   CloseHandle( osRead.hEvent ) ;
 //  CloseHandle( osWrite.hEvent ) ;

   return ( TRUE ) ;

} 


BOOL CComm::CloseConnection()
{

   // set connected flag to FALSE

   fConnected = FALSE ;

   // disable event notification and wait for thread
   // to halt

   SetCommMask( idComDev, 0 ) ;



   EscapeCommFunction( idComDev, CLRDTR ) ;


   PurgeComm( idComDev, PURGE_TXABORT | PURGE_RXABORT |
                                   PURGE_TXCLEAR | PURGE_RXCLEAR ) ;
   CloseHandle( idComDev ) ;
   return ( TRUE ) ;

} 



BOOL CComm::WriteCommBlock( LPSTR lpByte , DWORD dwBytesToWrite)
{

	BOOL        fWriteStat ;
	DWORD       dwBytesWritten ;


	fWriteStat = WriteFile( idComDev, lpByte, dwBytesToWrite,
	                       &dwBytesWritten, &osWrite ) ;


	if (!fWriteStat) 
	{
      
	}
	return ( TRUE ) ;

} 


#ifdef	_DEBUG

#endif