// Callibration.cpp : implementation file
//

#include "stdafx.h"
#include "ClientRoSo.h"
#include "ClientRosoDlg.h"
#include "Callibration.h"
#include "serialclass.h"
#include "comm.h"


bool variable_setteam_home = false ;
bool variable_setteam_away = false ;
bool variable_radio_1 = false ;
bool variable_radio_2 = false ;
bool variable_radio_3 = false ;
bool variable_radio_4 = false ;
bool variable_radio_5 = false ;
bool variable_radio_6 = false ;
//char variabel[10]={'#'};

 

// CCallibration dialog

IMPLEMENT_DYNAMIC(CCallibration, CDialog)

CCallibration::CCallibration(CWnd* pParent /*=NULL*/)
	: CDialog(CCallibration::IDD, pParent)
	, m_robot_1_R(100)
	, m_output(0)
{
	//m_robot1_L.SetWindowText("10");
	//m_robot1_R.SetWindowText("20");

}

CCallibration::~CCallibration()
{
}

void CCallibration::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_robot_1_R);
	DDX_Text(pDX, IDC_Tes_Output, m_output);
	// edit ratusan dll

	/*
	div_t ratusan;
	ratusan = div (m_robot_1_R,100);
	int ratus = 0;
	ratus = ratusan*100;
	div_t puluhan;
	puluhan = div (m_robot_1_R-ratusan,10);
	int satuan = (m_robot_1_R - (ratusan*100) - (puluhan*10);

	itoa(ratusan,variabel[4],10);
	itoa(puluhan,variabel[5],10);
	itoa(satuan,variabel[6],10);

	*/

	DDX_Control(pDX, IDC_EDIT1, m_robot1_L);
	DDX_Control(pDX, IDC_EDIT2, m_robot1_R);
	DDX_Control(pDX, IDC_EDIT5, m_robot2_L);
	DDX_Control(pDX, IDC_EDIT6, m_robot2_R);
}


BEGIN_MESSAGE_MAP(CCallibration, CDialog)
	ON_BN_CLICKED(IDOK, &CCallibration::OnBnClickedOk)
	ON_BN_CLICKED(IDC_RADIO4, &CCallibration::OnBnClickedRadio4)
	ON_BN_CLICKED(IDC_RADIO1, &CCallibration::OnBnClickedRadio1)
	ON_BN_CLICKED(IDC_RADIO2, &CCallibration::OnBnClickedRadio2)
	ON_BN_CLICKED(IDC_RADIO3, &CCallibration::OnBnClickedRadio3)
	ON_BN_CLICKED(IDC_RADIO5, &CCallibration::OnBnClickedRadio5)
	ON_BN_CLICKED(IDC_RADIO6, &CCallibration::OnBnClickedRadio6)
	ON_BN_CLICKED(IDC_BUTTON3, &CCallibration::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CCallibration::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &CCallibration::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &CCallibration::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &CCallibration::OnBnClickedButton7)
//	ON_BN_CLICKED(IDCLOSE, &CCallibration::OnBnClickedClose)
	ON_BN_CLICKED(IDC_HOME_TEAM, &CCallibration::OnBnClickedHomeTeam)
	ON_BN_CLICKED(IDC_RADIO8, &CCallibration::OnBnClickedRadio8)
	ON_EN_CHANGE(IDC_EDIT1, &CCallibration::OnEnChangeEdit1)
	ON_BN_CLICKED(IDC_BUTTON8, &CCallibration::OnBnClickedButton8)
//	ON_EN_UPDATE(IDC_EDIT1, &CCallibration::OnEnUpdateEdit1)
ON_BN_CLICKED(IDC_BUTTON9, &CCallibration::OnBnClickedButton9)
END_MESSAGE_MAP()


// CCallibration message handlers

void CCallibration::OnBnClickedOk()
{
	// TODO: Add your control notification handler code here
	OnOK();
}


void CCallibration::OnBnClickedRadio1()
{
	// Robot 1
	variable_radio_1 = true ;
	variable_radio_2 = false ;
	variable_radio_3 = false ;
	variable_radio_4 = false ;
	variable_radio_5 = false ;
	variable_radio_6 = false ;
	//variabel[2]='A';

}

void CCallibration::OnBnClickedRadio2()
{
	// Robot 2
	variable_radio_1 = false ;
	variable_radio_2 = true ;
	variable_radio_3 = false ;
	variable_radio_4 = false ;
	variable_radio_5 = false ;
	variable_radio_6 = false ;
//	variabel[2]='B';
}

void CCallibration::OnBnClickedRadio3()
{
	// Robot 3
	variable_radio_1 = false ;
	variable_radio_2 = false ;
	variable_radio_3 = true ;
	variable_radio_4 = false ;
	variable_radio_5 = false ;
	variable_radio_6 = false ;
//	variabel[2]='C';
}
void CCallibration::OnBnClickedRadio4()
{
	// Robot 4
	variable_radio_1 = false ;
	variable_radio_2 = false ;
	variable_radio_3 = false ;
	variable_radio_4 = true ;
	variable_radio_5 = false ;
	variable_radio_6 = false ;
//	variabel[2]='D';
}


void CCallibration::OnBnClickedRadio5()
{
	// Robot 5
	variable_radio_1 = false ;
	variable_radio_2 = false ;
	variable_radio_3 = false ;
	variable_radio_4 = false ;
	variable_radio_5 = true ;
	variable_radio_6 = false ;
//	variabel[2]='E';
}

void CCallibration::OnBnClickedRadio6()
{
	// All
	variable_radio_1 = true ;
	variable_radio_2 = true ;
	variable_radio_3 = true ;
	variable_radio_4 = true ;
	variable_radio_5 = true ;
	variable_radio_6 = true ;
}


void CCallibration::OnBnClickedButton3()
{
//	variabel[3] = '0';
	// Button W
	if (variable_setteam_home == true)
	{
		if (variable_radio_1==true)
		{
			char variabel[]="#XA0100110";
			MessageBox(variabel);

			Serial serial("\\\\.\\COM17");
			if (serial.IsConnected())
			{
				serial.WriteData(variabel,10);		
			}
			else
			{
				MessageBox ("Transmitter not connected","",0);
			}
		}
		if (variable_radio_2==true)
		{
			Serial serial("\\\\.\\COM7");
			if (serial.IsConnected())
			{
				serial.WriteData("#XC0000000",10);

/*				variabel[4]='0';
				variabel[5]='0';
				variabel[6]='0';
				variabel[7]='0';
				variabel[8]='0';
				variabel[9]='0';
				serial.WriteData(variabel,10);
				*/

			}
			else
			{
				MessageBox ("Transmitter not connected","",0);
			}
		}
		if (variable_radio_3==true)
		{
			Serial serial("\\\\.\\COM7");
			if (serial.IsConnected())
			{
				serial.WriteData("#XC0100100",10);		
			}
			else
			{
				MessageBox ("Transmitter not connected","",0);
			}
		}
		if (variable_radio_4==true)
		{
			Serial serial("\\\\.\\COM7");
			if (serial.IsConnected())
			{
				serial.WriteData("#XD0100100",10);		
			}
			else
			{
				MessageBox ("Transmitter not connected","",0);
			}
		}
		if (variable_radio_5==true)
		{
			Serial serial("\\\\.\\COM7");
			if (serial.IsConnected())
			{
				serial.WriteData("#XE0100100",10);		
			}
			else
			{
				MessageBox ("Transmitter not connected","",0);
			}
		}
		if (variable_radio_6==true)
		{
			Serial serial("\\\\.\\COM7");
			if (serial.IsConnected())
			{
				serial.WriteData("#XA0100100",10);
				serial.WriteData("#XB0100100",10);
				serial.WriteData("#XC0100100",10);
				serial.WriteData("#XD0100100",10);
				serial.WriteData("#XE0100100",10);
			}
			else
			{
				MessageBox ("Transmitter not connected","",0);
			}
		}
	}
	if (variable_setteam_away == true)
	{
		if (variable_radio_1==true)
		{
			Serial serial("\\\\.\\COM7");
			if (serial.IsConnected())
			{
				serial.WriteData("#YA0100100",10);		
			}
			else
			{
				MessageBox ("Transmitter not connected","",0);
			}
		}
		if (variable_radio_2==true)
		{
			Serial serial("\\\\.\\COM7");
			if (serial.IsConnected())
			{
				serial.WriteData("#YB0100100",10);		
			}
			else
			{
				MessageBox ("Transmitter not connected","",0);
			}
		}
		if (variable_radio_3==true)
		{
			Serial serial("\\\\.\\COM7");
			if (serial.IsConnected())
			{
				serial.WriteData("#YC0100100",10);		
			}
			else
			{
				MessageBox ("Transmitter not connected","",0);
			}
		}
		if (variable_radio_4==true)
		{
			Serial serial("\\\\.\\COM7");
			if (serial.IsConnected())
			{
				serial.WriteData("#YD0100100",10);		
			}
			else
			{
				MessageBox ("Transmitter not connected","",0);
			}
		}
		if (variable_radio_5==true)
		{
			Serial serial("\\\\.\\COM7");
			if (serial.IsConnected())
			{
				serial.WriteData("#YE0100100",10);		
			}
			else
			{
				MessageBox ("Transmitter not connected","",0);
			}
		}
		if (variable_radio_1==true)
		{
			Serial serial("\\\\.\\COM7");
			if (serial.IsConnected())
			{
				serial.WriteData("#YA0100100",10);
				serial.WriteData("#YB0100100",10);
				serial.WriteData("#YC0100100",10);
				serial.WriteData("#YD0100100",10);
				serial.WriteData("#YE0100100",10);
			}
			else
			{
				MessageBox ("Transmitter not connected","",0);
			}
		}
	}

}

void CCallibration::OnBnClickedButton4()
{
	// Button A
//	variabel[3] = '1';
	if (variable_setteam_home == true)
	{
		if (variable_radio_1==true)
		{
			Serial serial("\\\\.\\COM7");
			if (serial.IsConnected())
			{
				serial.WriteData("#XA1100100",10);		
			}
			else
			{
				MessageBox ("Transmitter not connected","",0);
			}
		}
		if (variable_radio_2==true)
		{
			Serial serial("\\\\.\\COM7");
			if (serial.IsConnected())
			{
				serial.WriteData("#XB1100100",10);		
			}
			else
			{
				MessageBox ("Transmitter not connected","",0);
			}
		}
		if (variable_radio_3==true)
		{
			Serial serial("\\\\.\\COM7");
			if (serial.IsConnected())
			{
				serial.WriteData("#XC1100100",10);		
			}
			else
			{
				MessageBox ("Transmitter not connected","",0);
			}
		}
		if (variable_radio_4==true)
		{
			Serial serial("\\\\.\\COM7");
			if (serial.IsConnected())
			{
				serial.WriteData("#XD1100100",10);		
			}
			else
			{
				MessageBox ("Transmitter not connected","",0);
			}
		}
		if (variable_radio_5==true)
		{
			Serial serial("\\\\.\\COM7");
			if (serial.IsConnected())
			{
				serial.WriteData("#XE1100100",10);		
			}
			else
			{
				MessageBox ("Transmitter not connected","",0);
			}
		}
		if (variable_radio_6==true)
		{
			Serial serial("\\\\.\\COM7");
			if (serial.IsConnected())
			{
				serial.WriteData("#XA1100100",10);
				serial.WriteData("#XB1100100",10);
				serial.WriteData("#XC1100100",10);
				serial.WriteData("#XD1100100",10);
				serial.WriteData("#XE1100100",10);
			}
			else
			{
				MessageBox ("Transmitter not connected","",0);
			}
		}
	}
	if (variable_setteam_away == true)
	{
		if (variable_radio_1==true)
		{
			Serial serial("\\\\.\\COM7");
			if (serial.IsConnected())
			{
				serial.WriteData("#YA0100100",10);		
			}
			else
			{
				MessageBox ("Transmitter not connected","",0);
			}
		}
		if (variable_radio_2==true)
		{
			Serial serial("\\\\.\\COM7");
			if (serial.IsConnected())
			{
				serial.WriteData("#YB0100100",10);		
			}
			else
			{
				MessageBox ("Transmitter not connected","",0);
			}
		}
		if (variable_radio_3==true)
		{
			Serial serial("\\\\.\\COM7");
			if (serial.IsConnected())
			{
				serial.WriteData("#YC0100100",10);		
			}
			else
			{
				MessageBox ("Transmitter not connected","",0);
			}
		}
		if (variable_radio_4==true)
		{
			Serial serial("\\\\.\\COM7");
			if (serial.IsConnected())
			{
				serial.WriteData("#YD0100100",10);		
			}
			else
			{
				MessageBox ("Transmitter not connected","",0);
			}
		}
		if (variable_radio_5==true)
		{
			Serial serial("\\\\.\\COM7");
			if (serial.IsConnected())
			{
				serial.WriteData("#YE0100100",10);		
			}
			else
			{
				MessageBox ("Transmitter not connected","",0);
			}
		}
		if (variable_radio_1==true)
		{
			Serial serial("\\\\.\\COM7");
			if (serial.IsConnected())
			{
				serial.WriteData("#YA0100100",10);
				serial.WriteData("#YB0100100",10);
				serial.WriteData("#YC0100100",10);
				serial.WriteData("#YD0100100",10);
				serial.WriteData("#YE0100100",10);
			}
			else
			{
				MessageBox ("Transmitter not connected","",0);
			}
		}
	}

}


void CCallibration::OnBnClickedButton5()
{
	// Button D
//	variabel[3] = '2';
	if (variable_setteam_home == true)
	{
		if (variable_radio_1==true)
		{
			Serial serial("\\\\.\\COM7");
			if (serial.IsConnected())
			{
				serial.WriteData("#XA2100100",10);		
			}
			else
			{
				MessageBox ("Transmitter not connected","",0);
			}
		}
		if (variable_radio_2==true)
		{
			Serial serial("\\\\.\\COM7");
			if (serial.IsConnected())
			{
				serial.WriteData("#XB2100100",10);		
			}
			else
			{
				MessageBox ("Transmitter not connected","",0);
			}
		}
		if (variable_radio_3==true)
		{
			Serial serial("\\\\.\\COM7");
			if (serial.IsConnected())
			{
				serial.WriteData("#XC2100100",10);		
			}
			else
			{
				MessageBox ("Transmitter not connected","",0);
			}
		}
		if (variable_radio_4==true)
		{
			Serial serial("\\\\.\\COM7");
			if (serial.IsConnected())
			{
				serial.WriteData("#XD2100100",10);		
			}
			else
			{
				MessageBox ("Transmitter not connected","",0);
			}
		}
		if (variable_radio_5==true)
		{
			Serial serial("\\\\.\\COM7");
			if (serial.IsConnected())
			{
				serial.WriteData("#XE2100100",10);		
			}
			else
			{
				MessageBox ("Transmitter not connected","",0);
			}
		}
		if (variable_radio_6==true)
		{
			Serial serial("\\\\.\\COM7");
			if (serial.IsConnected())
			{
				serial.WriteData("#XA2100100",10);
				serial.WriteData("#XB2100100",10);
				serial.WriteData("#XC2100100",10);
				serial.WriteData("#XD2100100",10);
				serial.WriteData("#XE2100100",10);
			}
			else
			{
				MessageBox ("Transmitter not connected","",0);
			}
		}
	}
	if (variable_setteam_away == true)
	{
		if (variable_radio_1==true)
		{
			Serial serial("\\\\.\\COM7");
			if (serial.IsConnected())
			{
				serial.WriteData("#YA0100100",10);		
			}
			else
			{
				MessageBox ("Transmitter not connected","",0);
			}
		}
		if (variable_radio_2==true)
		{
			Serial serial("\\\\.\\COM7");
			if (serial.IsConnected())
			{
				serial.WriteData("#YB0100100",10);		
			}
			else
			{
				MessageBox ("Transmitter not connected","",0);
			}
		}
		if (variable_radio_3==true)
		{
			Serial serial("\\\\.\\COM7");
			if (serial.IsConnected())
			{
				serial.WriteData("#YC0100100",10);		
			}
			else
			{
				MessageBox ("Transmitter not connected","",0);
			}
		}
		if (variable_radio_4==true)
		{
			Serial serial("\\\\.\\COM7");
			if (serial.IsConnected())
			{
				serial.WriteData("#YD0100100",10);		
			}
			else
			{
				MessageBox ("Transmitter not connected","",0);
			}
		}
		if (variable_radio_5==true)
		{
			Serial serial("\\\\.\\COM7");
			if (serial.IsConnected())
			{
				serial.WriteData("#YE0100100",10);		
			}
			else
			{
				MessageBox ("Transmitter not connected","",0);
			}
		}
		if (variable_radio_1==true)
		{
			Serial serial("\\\\.\\COM7");
			if (serial.IsConnected())
			{
				serial.WriteData("#YA0100100",10);
				serial.WriteData("#YB0100100",10);
				serial.WriteData("#YC0100100",10);
				serial.WriteData("#YD0100100",10);
				serial.WriteData("#YE0100100",10);
			}
			else
			{
				MessageBox ("Transmitter not connected","",0);
			}
		}
	}

}

void CCallibration::OnBnClickedButton6()
{
	// Button S
//	variabel[3] = '3';
	if (variable_setteam_home == true)
	{
		if (variable_radio_1==true)
		{
			Serial serial("\\\\.\\COM7");
			if (serial.IsConnected())
			{
				serial.WriteData("#XA3100110",10);		
			}
			else
			{
				MessageBox ("Transmitter not connected","",0);
			}
		}
		if (variable_radio_2==true)
		{
			Serial serial("\\\\.\\COM7");
			if (serial.IsConnected())
			{
				serial.WriteData("#XB3100100",10);		
			}
			else
			{
				MessageBox ("Transmitter not connected","",0);
			}
		}
		if (variable_radio_3==true)
		{
			Serial serial("\\\\.\\COM7");
			if (serial.IsConnected())
			{
				serial.WriteData("#XC3100100",10);		
			}
			else
			{
				MessageBox ("Transmitter not connected","",0);
			}
		}
		if (variable_radio_4==true)
		{
			Serial serial("\\\\.\\COM7");
			if (serial.IsConnected())
			{
				serial.WriteData("#XD3100100",10);		
			}
			else
			{
				MessageBox ("Transmitter not connected","",0);
			}
		}
		if (variable_radio_5==true)
		{
			Serial serial("\\\\.\\COM7");
			if (serial.IsConnected())
			{
				serial.WriteData("#XE3100100",10);		
			}
			else
			{
				MessageBox ("Transmitter not connected","",0);
			}
		}
		if (variable_radio_6==true)
		{
			Serial serial("\\\\.\\COM7");
			if (serial.IsConnected())
			{
				serial.WriteData("#XA3100100",10);
				serial.WriteData("#XB3100100",10);
				serial.WriteData("#XC3100100",10);
				serial.WriteData("#XD3100100",10);
				serial.WriteData("#XE3100100",10);
			}
			else
			{
				MessageBox ("Transmitter not connected","",0);
			}
		}
	}
	if (variable_setteam_away == true)
	{
		if (variable_radio_1==true)
		{
			Serial serial("\\\\.\\COM7");
			if (serial.IsConnected())
			{
				serial.WriteData("#YA0100100",10);		
			}
			else
			{
				MessageBox ("Transmitter not connected","",0);
			}
		}
		if (variable_radio_2==true)
		{
			Serial serial("\\\\.\\COM7");
			if (serial.IsConnected())
			{
				serial.WriteData("#YB0100100",10);		
			}
			else
			{
				MessageBox ("Transmitter not connected","",0);
			}
		}
		if (variable_radio_3==true)
		{
			Serial serial("\\\\.\\COM7");
			if (serial.IsConnected())
			{
				serial.WriteData("#YC0100100",10);		
			}
			else
			{
				MessageBox ("Transmitter not connected","",0);
			}
		}
		if (variable_radio_4==true)
		{
			Serial serial("\\\\.\\COM7");
			if (serial.IsConnected())
			{
				serial.WriteData("#YD0100100",10);		
			}
			else
			{
				MessageBox ("Transmitter not connected","",0);
			}
		}
		if (variable_radio_5==true)
		{
			Serial serial("\\\\.\\COM7");
			if (serial.IsConnected())
			{
				serial.WriteData("#YE0100100",10);		
			}
			else
			{
				MessageBox ("Transmitter not connected","",0);
			}
		}
		if (variable_radio_1==true)
		{
			Serial serial("\\\\.\\COM7");
			if (serial.IsConnected())
			{
				serial.WriteData("#YA0100100",10);
				serial.WriteData("#YB0100100",10);
				serial.WriteData("#YC0100100",10);
				serial.WriteData("#YD0100100",10);
				serial.WriteData("#YE0100100",10);
			}
			else
			{
				MessageBox ("Transmitter not connected","",0);
			}
		}
	}

}

void CCallibration::OnBnClickedButton7()
{
	// Brake
	// Button S
//	variabel[3] = '4';
	if (variable_setteam_home == true)
	{
		if (variable_radio_1==true)
		{
			Serial serial("\\\\.\\COM7");
			if (serial.IsConnected())
			{
				serial.WriteData("#XA4000000",10);		
			}
			else
			{
				MessageBox ("Transmitter not connected","",0);
			}
		}
		if (variable_radio_2==true)
		{
			Serial serial("\\\\.\\COM7");
			if (serial.IsConnected())
			{
				serial.WriteData("#XB4000000",10);		
			}
			else
			{
				MessageBox ("Transmitter not connected","",0);
			}
		}
		if (variable_radio_3==true)
		{
			Serial serial("\\\\.\\COM7");
			if (serial.IsConnected())
			{
				serial.WriteData("#XC4000000",10);		
			}
			else
			{
				MessageBox ("Transmitter not connected","",0);
			}
		}
		if (variable_radio_4==true)
		{
			Serial serial("\\\\.\\COM7");
			if (serial.IsConnected())
			{
				serial.WriteData("#XD4000000",10);		
			}
			else
			{
				MessageBox ("Transmitter not connected","",0);
			}
		}
		if (variable_radio_5==true)
		{
			Serial serial("\\\\.\\COM7");
			if (serial.IsConnected())
			{
				serial.WriteData("#XE4000000",10);		
			}
			else
			{
				MessageBox ("Transmitter not connected","",0);
			}
		}
		if (variable_radio_6==true)
		{
			Serial serial("\\\\.\\COM7");
			if (serial.IsConnected())
			{
				serial.WriteData("#XA3000000",10);
				serial.WriteData("#XB3000000",10);
				serial.WriteData("#XC3000000",10);
				serial.WriteData("#XD3000000",10);
				serial.WriteData("#XE3000000",10);
			}
			else
			{
				MessageBox ("Transmitter not connected","",0);
			}
		}
	}
	if (variable_setteam_away == true)
	{
		if (variable_radio_1==true)
		{
			Serial serial("\\\\.\\COM7");
			if (serial.IsConnected())
			{
				serial.WriteData("#YA4000000",10);		
			}
			else
			{
				MessageBox ("Transmitter not connected","",0);
			}
		}
		if (variable_radio_2==true)
		{
			Serial serial("\\\\.\\COM7");
			if (serial.IsConnected())
			{
				serial.WriteData("#YB4000000",10);		
			}
			else
			{
				MessageBox ("Transmitter not connected","",0);
			}
		}
		if (variable_radio_3==true)
		{
			Serial serial("\\\\.\\COM7");
			if (serial.IsConnected())
			{
				serial.WriteData("#YC4000000",10);		
			}
			else
			{
				MessageBox ("Transmitter not connected","",0);
			}
		}
		if (variable_radio_4==true)
		{
			Serial serial("\\\\.\\COM7");
			if (serial.IsConnected())
			{
				serial.WriteData("#YD4000000",10);		
			}
			else
			{
				MessageBox ("Transmitter not connected","",0);
			}
		}
		if (variable_radio_5==true)
		{
			Serial serial("\\\\.\\COM7");
			if (serial.IsConnected())
			{
				serial.WriteData("#YE4000000",10);		
			}
			else
			{
				MessageBox ("Transmitter not connected","",0);
			}
		}
		if (variable_radio_1==true)
		{
			Serial serial("\\\\.\\COM7");
			if (serial.IsConnected())
			{
				serial.WriteData("#YA4000000",10);
				serial.WriteData("#YB4000000",10);
				serial.WriteData("#YC4000000",10);
				serial.WriteData("#YD4000000",10);
				serial.WriteData("#YE4000000",10);
			}
			else
			{
				MessageBox ("Transmitter not connected","",0);
			}
		}
	}


}


void CCallibration::OnBnClickedHomeTeam()
{
	// TODO: Add your control notification handler code here
//	variabel[1]='X';
	variable_setteam_home = true;
	variable_setteam_away = false;
}

void CCallibration::OnBnClickedRadio8()
{
	// TODO: Add your control notification handler code here
//	variabel[1]='Y';
	variable_setteam_home = false;
	variable_setteam_away = true;
}

void CCallibration::OnEnChangeEdit1()
{
	// TODO:  If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Add your control notification handler code here
	
}

void CCallibration::OnBnClickedButton8()
{
	// TODO: Add your control notification handler code here
	Serial serial("\\\\.\\COM17");
	char data[17];
	CString mVl, mVr, sVr, sVl;
	char arahL= '+', arahR = '+';
	m_robot1_L.GetWindowText(mVl);	
	m_robot1_R.GetWindowText(mVr);
	int vl, vr;
	vl = atoi(mVl);
	vr = atoi(mVr);
	if(vl < 0) arahL = '-';
	if(vr < 0) arahR = '+';
	vl = abs(vl);
	vr = abs(vr);
	if(vl < 100)
	{
		if(vl<10)
			sVl.Format("00%d",vl);
		else 
			sVl.Format("0%d",vl);
	}else
	{
		sVl.Format("%d",vl);
	}
	if(vr < 100)
	{
		if(vr<10)
			sVr.Format("00%d",vr);
		else 
			sVr.Format("0%d",vr);
	}
	else
	{
		sVr.Format("%d",vr);
	}
	data[0] = '#';
	data[1] = 'A';
	data[2] = arahL;
	data[3] = 'C';
	data[4] = sVr[0];
	data[5] = 'C';
	data[6] = sVr[1];
	data[7] = 'C';
	data[8] = sVr[2];
	data[9] = 'C';
	data[10] = arahR;
	data[11] = 'C';
	data[12] = sVl[0];
	data[13] = 'C';
	data[14] = sVl[1];
	data[15] = 'C';
	data[16] = sVl[2];

	OutputDebugString(data);

	if(serial.IsConnected())
	{
		serial.WriteData(data,17);
	}
	else
	{
		OutputDebugString("EROR NAHA??\n");
	}

}





void CCallibration::OnBnClickedButton9()
{
	// TODO: Add your control notification handler code here
}
