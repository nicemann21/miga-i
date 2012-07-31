//Comm.h
//Rs232c를 하기위한 클래스 헤더
#ifndef		__COMM_H_
#define		__COMM_H_


#define MAXBLOCK        80
#define MAXPORTS        18
// Flow control flags
#define FC_DTRDSR       0x01
#define FC_RTSCTS       0x02
#define FC_XONXOFF      0x04

// ascii definitions

#define ASCII_BEL       0x07
#define ASCII_BS        0x08
#define ASCII_LF        0x0A
#define ASCII_CR        0x0D
#define ASCII_XON       0x11
#define ASCII_XOFF      0x13
#define WM_RECEIVEDATA WM_USER+1
// global stuff

// function prototypes (private)
/////////////////////////////////////////////////////////////////////////////
// CComm window

class CComm : public CObject
{

   DECLARE_DYNCREATE( CComm )
public:
   HANDLE      idComDev ;//컴포트 디바이스 연결 핸들
   BOOL        fConnected;//컴포트가 연결되면 1로 설정
   BYTE       abIn[ MAXBLOCK + 1] ;//컴포트에서 들어오는 데이타
   HWND m_hwnd;//메세지를 전달할 윈도우 플러그

// Construction
public:
	CComm( );
   //Comport Setting up
   void SetComPort(int port,DWORD rate,BYTE bytesize,BYTE stop,BYTE parity);
   //Dtr Rts Setting up
   //Create Comport
   BOOL CreateCommInfo();
   //Destroy comport
   BOOL DestroyComm();
   //Translate Comport
   BOOL WriteCommBlock( LPSTR, DWORD);
   BOOL OpenComPort( ) ;//Comport Open
   
   BOOL SetupConnection( ) ;
   
   BOOL CloseConnection( ) ;
   
   
// Attributes
public:
   BYTE        bPort;
   BOOL         fXonXoff;
   BYTE        bByteSize, bFlowCtrl, bParity, bStopBits ;
   DWORD       dwBaudRate ;
   HANDLE hWatchThread;
   HWND        hTermWnd ;
   DWORD       dwThreadID ;
   OVERLAPPED  osWrite, osRead ;

// Operations
public:


public:
	virtual ~CComm();

	// Generated message map functions
//	DECLARE_MESSAGE_MAP()
protected:
#ifdef	_DEBUG
#endif
};

#endif
