// Client RoSoDlg.cpp : implementation file
//

#include "stdafx.h"
#include "ClientRoSo.h"
#include "ClientRoSoDlg.h"
#include "Callibration.h"
#include <iostream>
//#include "tinythread.h"
#include "stdafx.h"

using namespace std;
//using namespace tthread;

bool run = true;

/*
bool variable_radio_1 = false ; // home
bool variable_radio_2 = false ; // away
bool variable_radio_3 = false ; // kickoff
bool variable_radio_4 = false ; // penalty
bool variable_radio_5 = false ; // goalie
bool variable_radio_6 = false ; // freeball
bool variable_radio_7 = false ; // strategi 1
bool variable_radio_8 = false ; // strategi 2
*/


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
END_MESSAGE_MAP()


// CClientRoSoDlg dialog




CClientRoSoDlg::CClientRoSoDlg(CWnd* pParent /*=NULL*/)
//CClientRoSoDlg::CClientRoSoDlg(void *arg)
	: CDialog(CClientRoSoDlg::IDD, pParent)
	, Timer1(0)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CClientRoSoDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, Timer1);
	DDX_Control(pDX, IDC_BUTTON6, m_R1);
	DDX_Control(pDX, IDC_BUTTON7, m_R2);
	DDX_Control(pDX, IDC_BUTTON10, m_R3);
	DDX_Control(pDX, IDC_BUTTON11, m_R4);
	DDX_Control(pDX, IDC_BUTTON12, m_R5);
	DDX_Control(pDX, IDC_BUTTON13, m_A1);
	DDX_Control(pDX, IDC_BUTTON14, m_A2);
	DDX_Control(pDX, IDC_BUTTON15, m_A3);
	DDX_Control(pDX, IDC_BUTTON16, m_A4);
	DDX_Control(pDX, IDC_BUTTON17, m_A5);
	DDX_Control(pDX, IDC_eIPServer, m_IPServer);
}

BEGIN_MESSAGE_MAP(CClientRoSoDlg, CDialog)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDC_BUTTON4, &CClientRoSoDlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON2, &CClientRoSoDlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CClientRoSoDlg::OnBnClickedButton3)
	ON_WM_TIMER()
	ON_BN_CLICKED(IDC_BUTTON6, &CClientRoSoDlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON12, &CClientRoSoDlg::OnBnClickedButton12)
	ON_BN_CLICKED(IDC_BUTTON11, &CClientRoSoDlg::OnBnClickedButton11)
	ON_BN_CLICKED(IDC_BUTTON7, &CClientRoSoDlg::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_RADIO1, &CClientRoSoDlg::OnBnClickedRadio1)
	ON_BN_CLICKED(IDC_RADIO2, &CClientRoSoDlg::OnBnClickedRadio2)
	ON_BN_CLICKED(IDC_RADIO3, &CClientRoSoDlg::OnBnClickedRadio3)
	ON_BN_CLICKED(IDC_RADIO4, &CClientRoSoDlg::OnBnClickedRadio4)
	ON_BN_CLICKED(IDC_RADIO5, &CClientRoSoDlg::OnBnClickedRadio5)
	ON_BN_CLICKED(IDC_RADIO6, &CClientRoSoDlg::OnBnClickedRadio6)
	ON_BN_CLICKED(IDC_RADIO7, &CClientRoSoDlg::OnBnClickedRadio7)
	ON_BN_CLICKED(IDC_RADIO8, &CClientRoSoDlg::OnBnClickedRadio8)
//ON_BN_CLICKED(IDC_BUTTON1, &CClientRoSoDlg::OnBnClickedButton1)
	//ON_BN_CLICKED(IDC_BUTTON5, &CClientRoSoDlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_StartGame, &CClientRoSoDlg::OnBnClickedStartgame)
	ON_BN_CLICKED(IDC_CONNECT, &CClientRoSoDlg::OnBnClickedConnect)
	ON_BN_CLICKED(IDC_StopGame, &CClientRoSoDlg::OnBnClickedStopgame)
END_MESSAGE_MAP()


// CClientRoSoDlg message handlers

BOOL CClientRoSoDlg::OnInitDialog()
{
	CDialog::OnInitDialog();
	// Setting Timer
	//SetTimer(1,10,NULL);
	//Start System server client
	StartTheSystem();
	isKoneksi = FALSE;
	m_GameStart = false;
	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CClientRoSoDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CClientRoSoDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CClientRoSoDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}





void CClientRoSoDlg::OnBnClickedButton2()
{
	// Callibration
	CCallibration D1;
	D1.DoModal();
	
}

void CClientRoSoDlg::OnBnClickedButton3()
{
	// Start Game
	/*
	while(run){
		cout << "ini dikerjakan dalam thread" << endl;
	}
	*/


}


void CClientRoSoDlg::OnBnClickedButton4()
{
	// Stop Game
}

void CClientRoSoDlg::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: Add your message handler code here and/or call default
//ditutup dulu. coba yang server client (9/7)
	/*
	CDialog::OnTimer(nIDEvent);
		UpdateData(true);
		Timer1 = Timer1+1;
		if(Timer1==10)
		{
			KillTimer(nIDEvent);
			UpdateData(false);
		}
	UpdateData(false);
	// Ambil data dari server
	int x1 = 0;
	int y1 = 170;
	int x2 = 125;
	int y2 = 90;
	int x3 = 125;
	int y3 = 250;
	int x4 = 200;
	int y4 = 170;
	int x5 = 250;
	int y5 = 170;
	int x6 = 600;
	int y6 = 170;
	int x7 = 475;
	int y7 = 80;
	int x8 = 475;
	int y8 = 260;
	int x9 = 350;
	int y9 = 110;
	int x10 = 350;
	int y10 = 230;

	// Proses execute
	m_R1.MoveWindow(x1+Timer1,y1,20,20,1);
	m_R2.MoveWindow(x2+Timer1,y2,20,20,1);
	m_R3.MoveWindow(x3+Timer1,y3,20,20,1);
	m_R4.MoveWindow(x4+Timer1,y4,20,20,1);
	m_R5.MoveWindow(x5+Timer1,y5,20,20,1);
	m_A1.MoveWindow(x6+Timer1,y6,20,20,1);
	m_A2.MoveWindow(x7+Timer1,y7,20,20,1);
	m_A3.MoveWindow(x8+Timer1,y8,20,20,1);
	m_A4.MoveWindow(x9+Timer1,y9,20,20,1);
	m_A5.MoveWindow(x10+Timer1,y10,20,20,1);

	*/
	//ini yang server client(9/7/12)
	UpdateData();
	UpdateClientData();
	


	// AI
	if(m_GameStart == true)
		GameProccess();



	// Send data to agent

	UpdateData(FALSE);
}



void CClientRoSoDlg::OnBnClickedRadio1()
{
	// Home Team
}

void CClientRoSoDlg::OnBnClickedRadio2()
{
	// Away Team
}

void CClientRoSoDlg::OnBnClickedRadio3()
{
	// KickOff
}

void CClientRoSoDlg::OnBnClickedRadio4()
{
	// Penalty
}

void CClientRoSoDlg::OnBnClickedRadio5()
{
	// Goalie
	// m_CGame::Goalie();
}

void CClientRoSoDlg::OnBnClickedRadio6()
{
	// FreeBall
}

void CClientRoSoDlg::OnBnClickedRadio7()
{
	// Strategi 1
}

void CClientRoSoDlg::OnBnClickedRadio8()
{
	// Strategi 2
}

 
// Batas Bawah Source Code yang digunakan
// ==============================================================================================

void CClientRoSoDlg::OnBnClickedButton6()
{
	// TODO: Add your control notification handler code here
}

void CClientRoSoDlg::OnBnClickedButton12()
{
	// TODO: Add your control notification handler code here
}

void CClientRoSoDlg::OnBnClickedButton11()
{
	// TODO: Add your control notification handler code here
}

void CClientRoSoDlg::OnBnClickedButton7()
{
	// TODO: Add your control notification handler code here
}

void CClientRoSoDlg::OnBnClickedStartgame()
{
	// TODO: menjalankan game
	m_GameStart = true;
	//OutputDebugString("start true\n");
	
	//GameProccess();
	//m_CGame.AutoPosition();
}

void CClientRoSoDlg::OnBnClickedConnect()
{
	// TODO: koneksi
	CWnd *pTombol;
	m_iPort = 999;
	//IP ditentukan langsung. harusnya bisa diisi sendiri
	m_IPServer.GetWindowText(m_Alamat);
	if(m_Alamat.IsEmpty())
		m_Alamat = "127.0.0.1";
	if(isKoneksi==FALSE)
	{
		UpdateData(TRUE);
		if(!m_iocp.Connect(m_Alamat, m_iPort))
		{
			MessageBox("Error!\nCannot Connect to Server","Error Connection");
		}
		else
		{
			//bisa koneksi
			isKoneksi = TRUE;
			//UpdateClientData();
			m_cTimer = SetTimer(1,10,0);
			pTombol = GetDlgItem(IDC_CONNECT);
			pTombol->SetWindowText("Disconnect");
		}
	}else
	{
		//sudah koneksi. akan dimatikan
		isKoneksi=FALSE;
		m_iocp.DisconnectAll();
		KillTimer(1);
		pTombol = GetDlgItem(IDC_CONNECT);
		pTombol->SetWindowText("Connect");

	}
}

void CClientRoSoDlg::UpdateClientData()
{
	ClientContext* pContext=NULL;
	//TODO: INI MSIH MANUAL. HARUSNYA BISA OTOMATIS DAPET ID
	int clID=0;
	m_clientID = 348;
	//IOCPS::getClientID(clID);

	m_iocp.m_ContextMapLock.Lock();
	//cari soket dari pContext
	POSITION pos = m_iocp.m_ContextMap.GetStartPosition();
	unsigned int ikey;//entah buat apa
	if(pos!=NULL)
	{
		m_iocp.m_ContextMap.GetNextAssoc(pos,ikey,pContext);
		m_clientID = pContext->m_Socket;
		//OutputDebugString(""+m_clientID);
	}
	//pContext = m_iocp.FindClient(m_clientID);
	if(pContext!=NULL)
	{
	   pContext->m_ContextLock.Lock();
	   m_teks=pContext->m_sReceived;
	   pContext->m_ContextLock.Unlock();
	}
	m_iocp.m_ContextMapLock.Unlock();
	//OutputDebugString(m_sReceivedTxt);
	ekstrakData(m_teks);
	UpdateData(FALSE);
}

void CClientRoSoDlg::ekstrakData(CString data)
{
	//TODO: ini baru dummy. 
	
	int  Bx, By, count, idA, ax, ay, at, idB, bx, by, bt, idC, cx,cy,ct, idD, dx, dy, dt, idE, ex, ey, et, idF, fx, fy, ft;
	CString hasil ="";
	//sscanf(data,"[%d] ball %d %d | %d %d %d %d",&count, &bx, &by, &idA, &ax, &ay, &at);
	sscanf(data,"[%d] ball %d %d | %d %d %d %d | %d %d %d %d | %d %d %d %d | %d %d %d %d | %d %d %d %d | %d %d %d %d",
		&count, &Bx, &By, 
		&idA, &ax, &ay, &at, 
		&idB, &bx, &by, &bt,
		&idC, &cx, &cy, &ct,
		&idD, &dx, &dy, &dt,
		&idE, &ex, &ey, &et,
		&idF, &fx, &fy, &ft);
	//OutputDebugString(data);
	//////////hahn (31/7)
	//m_CGame.setPos(Bx, By);
	m_CGame.Ball.position.X = Bx;
	m_CGame.Ball.position.Y = By;
	m_CGame.HomeRobot[0].position.X = ax;
	m_CGame.HomeRobot[0].position.Y = ay;
	m_CGame.HomeRobot[0].Angle		= at;
	m_CGame.HomeRobot[1].position.X = bx;
	m_CGame.HomeRobot[1].position.Y = by;
	m_CGame.HomeRobot[1].Angle		= bt;
	m_CGame.HomeRobot[2].position.X = cx;
	m_CGame.HomeRobot[2].position.Y = cy;
	m_CGame.HomeRobot[2].Angle		= ct;
	m_CGame.HomeRobot[3].position.X = dx;
	m_CGame.HomeRobot[3].position.Y = dy;
	m_CGame.HomeRobot[3].Angle		= dt;
	m_CGame.HomeRobot[4].position.X = ex;
	m_CGame.HomeRobot[4].position.Y = ey;
	m_CGame.HomeRobot[4].Angle		= et;

	//////////hahn (31/7)


	hasil.Format("count: %d| ball (%d, %d) | Home1(%d, %d, %d)\n",
		count, bx, by, ax, ay, at);
	//if(!hasil.IsEmpty())
		//OutputDebugString(hasil);
	//nambah bisa gerak ga itu si tombol
	m_R1.MoveWindow(Bx,By,20,20,1);
	m_R2.MoveWindow(ax,ay,20,20,1);
	m_R3.MoveWindow(bx,by,20,20,1);
	m_R4.MoveWindow(cx,cy,20,20,1);
	m_R5.MoveWindow(dx,dy,20,20,1);
	m_A1.MoveWindow(ex,ey,20,20,1);
	m_A2.MoveWindow(fx,fy,20,20,1);

}

void CClientRoSoDlg::StartTheSystem()
{
	m_iocp.m_StatusLock.Lock();
	m_iocp.m_hWnd=m_hWnd;
	m_iocp.m_StatusLock.Unlock();
	if(!m_iocp.Start(0xffffffff,1201,1,0,100,50,1,1,5))
	{
		MessageBox("StartSystem Ga bisa bro");
		
	}
}
/* proses game di sini(?)
 * (31/7) H
 */
void CClientRoSoDlg::GameProccess()
{
	//1. ambil data posisi objek (bola dan robot)
	m_CGame.Strategy();

}
void CClientRoSoDlg::OnBnClickedStopgame()
{
	// TODO: Add your control notification handler code here
	m_GameStart = false;
}
