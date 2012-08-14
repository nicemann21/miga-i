// SettingDialog.cpp : implementation file
//

#include "stdafx.h"
#include <fstream>
#include "MyApplication.h"
#include "SettingDialog.h"


// CSettingDialog dialog

IMPLEMENT_DYNAMIC(CSettingDialog, CDialog)

CSettingDialog::CSettingDialog(CWnd* pParent /*=NULL*/)
	: CDialog(CSettingDialog::IDD, pParent)
	, pickingUp(false)
{

}

CSettingDialog::~CSettingDialog()
{
}

void CSettingDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_RED_SPIN1, m_RedField1);
	DDX_Control(pDX, IDC_GREEN_SPIN1, m_GreenField1);
	DDX_Control(pDX, IDC_BLUE_SPIN1, m_BlueField1);
	DDX_Control(pDX, IDC_RED_SPIN2, m_RedField2);
	DDX_Control(pDX, IDC_RED_SPIN3, m_RedField3);
	DDX_Control(pDX, IDC_RED_SPIN4, m_RedField4);
	DDX_Control(pDX, IDC_RED_SPIN5, m_RedField5);
	DDX_Control(pDX, IDC_RED_SPIN6, m_RedField6);
	DDX_Control(pDX, IDC_RED_SPIN7, m_RedField7);
	DDX_Control(pDX, IDC_GREEN_SPIN2, m_GreenField2);
	DDX_Control(pDX, IDC_GREEN_SPIN3, m_GreenField3);
	DDX_Control(pDX, IDC_GREEN_SPIN4, m_GreenField4);
	DDX_Control(pDX, IDC_GREEN_SPIN5, m_GreenField5);
	DDX_Control(pDX, IDC_GREEN_SPIN6, m_GreenField6);
	DDX_Control(pDX, IDC_GREEN_SPIN7, m_GreenField7);
	DDX_Control(pDX, IDC_BLUE_SPIN2, m_BlueField2);
	DDX_Control(pDX, IDC_BLUE_SPIN3, m_BlueField3);
	DDX_Control(pDX, IDC_BLUE_SPIN4, m_BlueField4);
	DDX_Control(pDX, IDC_BLUE_SPIN5, m_BlueField5);
	DDX_Control(pDX, IDC_BLUE_SPIN6, m_BlueField6);
	DDX_Control(pDX, IDC_BLUE_SPIN7, m_BlueField7);
}


BEGIN_MESSAGE_MAP(CSettingDialog, CDialog)
	ON_NOTIFY(UDN_DELTAPOS, IDC_RED_SPIN1, &CSettingDialog::OnDeltaposRedSpin)
	ON_BN_CLICKED(IDC_PICK_COLOR, &CSettingDialog::OnBnClickedPickColor)
	ON_BN_CLICKED(IDC_SET_BTN1, &CSettingDialog::OnBnClickedSetBtn1)
	ON_BN_CLICKED(IDC_SET_BTN2, &CSettingDialog::OnBnClickedSetBtn2)
	ON_BN_CLICKED(IDC_SAVE, &CSettingDialog::OnBnClickedSave)
	ON_BN_CLICKED(IDC_LOAD, &CSettingDialog::OnBnClickedLoad)
	ON_BN_CLICKED(IDOK, &CSettingDialog::OnBnClickedOk)
	ON_BN_CLICKED(IDC_PickHome, &CSettingDialog::OnBnClickedPickhome)
	ON_BN_CLICKED(IDC_PickColor1, &CSettingDialog::OnBnClickedPickcolor1)
	ON_BN_CLICKED(IDC_PickColor2, &CSettingDialog::OnBnClickedPickcolor2)
	ON_BN_CLICKED(IDC_PickColor3, &CSettingDialog::OnBnClickedPickcolor3)
	ON_BN_CLICKED(IDC_PickSecondary, &CSettingDialog::OnBnClickedPicksecondary)
	ON_BN_CLICKED(IDC_PickOpp, &CSettingDialog::OnBnClickedPickopp)
END_MESSAGE_MAP()


// CSettingDialog message handlers

BOOL CSettingDialog::OnInitDialog()
{
	CDialog::OnInitDialog();
	//default color
	setDefaultColor();
	// TODO:  Add extra initialization here
	

	return TRUE;  // return TRUE unless you set the focus to a control
	// EXCEPTION: OCX Property Pages should return FALSE
}

void CSettingDialog::OnDeltaposRedSpin(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMUPDOWN pNMUpDown = reinterpret_cast<LPNMUPDOWN>(pNMHDR);
	// TODO: Add your control notification handler code here
	UpdateData();

	int x = 0;
	if(m_RedField1.GetPos()==255 || m_RedField1.GetPos()==0)
		x = m_RedField1.GetPos();
	else
		x = m_RedField1.GetPos() + pNMUpDown->iDelta;

	//SetDlgItemInt(IDC_LOAD, x);

	*pResult = 0;
}

void CSettingDialog::OnBnClickedPickColor()
{
	// TODO: Add your control notification handler code here
	//ini untuk bola
	pickingUp = true;
	ShowWindow(SW_HIDE);
}

void CSettingDialog::pickColor(short c1, short c2, short c3)
{
	SetDlgItemInt(IDC_RED_FIELD, c1);
	SetDlgItemInt(IDC_GREEN_FIELD, c2);
	SetDlgItemInt(IDC_BLUE_FIELD, c3);
}

void CSettingDialog::pickColor(short blue, short green, short red, short ID)
{
	switch(ID)
	{
	case 0:
		SetDlgItemInt(IDC_RED_FIELD, red);
		SetDlgItemInt(IDC_GREEN_FIELD, green);
		SetDlgItemInt(IDC_BLUE_FIELD, blue);
		break;
	case 1:
		//home team color
		SetDlgItemInt(IDC_RED_FIELD2, red);
		SetDlgItemInt(IDC_GREEN_FIELD2, green);
		SetDlgItemInt(IDC_BLUE_FIELD2, blue);
		break;
	case 2:
		//color 1
		SetDlgItemInt(IDC_RED_FIELD3, red);
		SetDlgItemInt(IDC_GREEN_FIELD3, green);
		SetDlgItemInt(IDC_BLUE_FIELD3, blue);
		break;
	case 3:
		//color 2
		SetDlgItemInt(IDC_RED_FIELD4, red);
		SetDlgItemInt(IDC_GREEN_FIELD4, green);
		SetDlgItemInt(IDC_BLUE_FIELD4, blue);
		break;
	case 4:
		//color 3
		SetDlgItemInt(IDC_RED_FIELD5, red);
		SetDlgItemInt(IDC_GREEN_FIELD5, green);
		SetDlgItemInt(IDC_BLUE_FIELD5, blue);
		break;
	case 5:
		//secondary color
		SetDlgItemInt(IDC_RED_FIELD6, red);
		SetDlgItemInt(IDC_GREEN_FIELD6, green);
		SetDlgItemInt(IDC_BLUE_FIELD6, blue);
		break;
	case 6:
		//opponent color
		SetDlgItemInt(IDC_RED_FIELD7, red);
		SetDlgItemInt(IDC_GREEN_FIELD7, green);
		SetDlgItemInt(IDC_BLUE_FIELD7, blue);
		break;
	default:
		break;
	}
}

void CSettingDialog::OnBnClickedSetBtn1()
{
	// TODO: Add your control notification handler code here
	//img_proc.ballColor[0] = GetDlgItemInt(IDC_RED_FIELD);
	//img_proc.ballColor[1] = GetDlgItemInt(IDC_GREEN_FIELD);
	//img_proc.ballColor[2] = GetDlgItemInt(IDC_BLUE_FIELD);
}

void CSettingDialog::OnBnClickedSetBtn2()
{
	// TODO: Add your control notification handler code here
}

void CSettingDialog::OnBnClickedSave()
{
	// TODO: Add your control notification handler code here
	short c1, c2, c3;
	CString tescolor;
	//pickColor(123,234,243);
	//tescolor.Format(_T("%i %i %i\n",c1, c2, c3));
	//OutputDebugString(tescolor);
	saveColorToText();
}

void CSettingDialog::OnBnClickedLoad()
{
	// TODO: Load from file configuration
	loadColorSettings();
}

//Default color
void CSettingDialog::setDefaultColor()
{
	m_RedField1.SetRange(0, 255);
	m_RedField1.SetPos(200);
	m_GreenField1.SetRange(0, 255);
	m_GreenField1.SetPos(200);
	m_BlueField1.SetRange(0, 255);
	m_BlueField1.SetPos(200);
	
	m_RedField2.SetRange(0, 255);
	m_RedField2.SetPos(200);
	m_GreenField2.SetRange(0, 255);
	m_GreenField2.SetPos(200);
	m_BlueField2.SetRange(0, 255);
	m_BlueField2.SetPos(200);

	m_RedField3.SetRange(0, 255);
	m_RedField3.SetPos(200);
	m_GreenField3.SetRange(0, 255);
	m_GreenField3.SetPos(200);
	m_BlueField3.SetRange(0, 255);
	m_BlueField3.SetPos(200);

	m_RedField4.SetRange(0, 255);
	m_RedField4.SetPos(200);
	m_GreenField4.SetRange(0, 255);
	m_GreenField4.SetPos(200);
	m_BlueField4.SetRange(0, 255);
	m_BlueField4.SetPos(200);

	m_RedField5.SetRange(0, 255);
	m_RedField5.SetPos(200);
	m_GreenField5.SetRange(0, 255);
	m_GreenField5.SetPos(200);
	m_BlueField5.SetRange(0, 255);
	m_BlueField5.SetPos(200);

	m_RedField6.SetRange(0, 255);
	m_RedField6.SetPos(200);
	m_GreenField6.SetRange(0, 255);
	m_GreenField6.SetPos(200);
	m_BlueField6.SetRange(0, 255);
	m_BlueField6.SetPos(200);

	m_RedField7.SetRange(0, 255);
	m_RedField7.SetPos(200);
	m_GreenField7.SetRange(0, 255);
	m_GreenField7.SetPos(200);
	m_BlueField7.SetRange(0, 255);
	m_BlueField7.SetPos(200);
}

void CSettingDialog::saveColorToText()
{
	
	//di sini save colorString ke file teks. 
	//TODO: how to save to text? DONE (22/7)
	CString fName="";
	CFileDialog dlg(FALSE, "cfg", NULL, NULL,
				   "Config files(*.cfg)|*.cfg|"
				   "All Files||");
	FILE *fn;
	UpdateData(TRUE);
	if(dlg.DoModal() == IDOK)
	{
		CString colorString =_T(""), tmp=_T("");
		//BallColor ball;
		//RobotColor teamColor, oppcolor, firstColor[3], secColor;
		ball.red = m_RedField1.GetPos();
		ball.green = m_GreenField1.GetPos();
		ball.blue = m_BlueField1.GetPos();
		
		tmp.Format("ball color:\t %d %d %d\n",
				   ball.red, ball.green, ball.blue);
		colorString.Append(tmp);

		teamColor.red	= m_RedField2.GetPos();
		teamColor.green	= m_GreenField2.GetPos();
		teamColor.blue	= m_BlueField2.GetPos();

		tmp.Format("teamColor:\t %d %d %d\n",
				   teamColor.red, teamColor.green, teamColor.blue);
		colorString.Append(tmp);

		firstColor[0].red	= m_RedField3.GetPos();
		firstColor[0].green	= m_GreenField3.GetPos();
		firstColor[0].blue	= m_BlueField3.GetPos();

		tmp.Format("firstColor[0]:\t %d %d %d\n",
				   firstColor[0].red, firstColor[0].green, firstColor[0].blue);
		colorString.Append(tmp);
		
		firstColor[1].red	= m_RedField4.GetPos();
		firstColor[1].green	= m_GreenField4.GetPos();
		firstColor[1].blue	= m_BlueField4.GetPos();

		tmp.Format("firstColor[1]:\t %d %d %d\n",
				   firstColor[1].red, firstColor[1].green, firstColor[1].blue);
		colorString.Append(tmp);

		firstColor[2].red	= m_RedField5.GetPos();
		firstColor[2].green	= m_GreenField5.GetPos();
		firstColor[2].blue	= m_BlueField5.GetPos();

		tmp.Format("firstColor[2]:\t %d %d %d\n",
				   firstColor[2].red, firstColor[2].green, firstColor[2].blue);
		colorString.Append(tmp);

		secColor.red	= m_RedField6.GetPos();
		secColor.green	= m_GreenField6.GetPos();
		secColor.blue	= m_BlueField6.GetPos();

		tmp.Format("secColor:\t %d %d %d\n",
				   secColor.red, secColor.green, secColor.blue);
		colorString.Append(tmp);

		oppColor.red	= m_RedField7.GetPos();
		oppColor.green	= m_GreenField7.GetPos();
		oppColor.blue	= m_BlueField7.GetPos();

		tmp.Format("oppColor:\t %d %d %d\n",
				   oppColor.red, oppColor.green, oppColor.blue);
		colorString.Append(tmp);

		//OutputDebugString(colorString);
		if(dlg.GetFileName())
		{
			fName = dlg.GetFolderPath()+"\\"+dlg.GetFileName();//kalau ga pake path, nyimpennya di tempat exe
			//OutputDebugString(fName);
			fn = fopen(fName,"w");
			fprintf(fn,"#file configuration\n");
			fprintf(fn,"%s",colorString);
			fclose(fn);
		}
		colorString.Empty();
	}
	UpdateData(FALSE);
	//hapus isi colorString
	

}

void CSettingDialog::loadColorSettings()
{
	CString fName="";
	CString colorString="";//untuk menyimpan buffer color
	CString temp="";
	CFileDialog dlg(TRUE, "cfg", NULL, NULL,
				   "Config files(*.cfg)|*.cfg|"
				   "All Files||");
	UpdateData(TRUE);
	CFile fLoad;
	if(dlg.DoModal() == IDOK)
	{
		if(dlg.GetFileName())
		{
			fName = dlg.GetFolderPath()+"\\"+dlg.GetFileName();//kalau ga pake path, nyimpennya di tempat exe
			OutputDebugString(fName+"\n");
			BYTE buffer[4096];
			DWORD dwread;
			fLoad.Open(fName,CFile::modeRead);
			do {
				dwread = fLoad.Read(buffer,4096);
				colorString = (CString) buffer;
			}
			while(dwread>0);
		}
		//colorString.Append(temp);
		fLoad.Close();
	}
	//OutputDebugString("ini dari load\n");
	//OutputDebugString(colorString);
	UpdateData(FALSE);
	//hasil load dimasukkan ke variable;
	//BallColor ball;
	//RobotColor teamColor, oppcolor, firstColor[3], secColor;
	OutputDebugString(colorString);
//	sscanf(colorString,
//"#file configuration\r\nball color:\t %d %d %d\r\n\
//%*s\t %d %d %d\r\n\
//%*s\t %d %d %d\r\n\
//%*s\t %d %d %d\r\n\
//%*s\t %d %d %d\r\n\
//%*s\t %d %d %d\r\n\
//%*s\t %d %d %d\r\n",
//		&ball.red, &ball.green, &ball.blue,
//		&teamColor.red, &teamColor.green, &teamColor.blue,
//		&firstColor[0].red, &firstColor[0].green, &firstColor[0].blue,
//		&firstColor[1].red, &firstColor[1].green, &firstColor[1].blue,
//		&firstColor[2].red, &firstColor[2].green, &firstColor[2].blue,
//		&secColor.red, &secColor.green, &secColor.blue,
//		&oppColor.red, &oppColor.green, &oppColor.blue);

	//int q=100,w=100,e=100,r=100,t=100,y=100,u=100,i=100,o=100,p;
	int q,w,e,r,t,y,u,i,o;
	sscanf(colorString,
"#file configuration\r\nball color:\t %d %d %d\r\n\
%*s\t %d %d %d\r\n\
%*s\t %d %d %d\r\n\
%*s\t %d %d %d\r\n\
%*s\t %d %d %d\r\n\
%*s\t %d %d %d\r\n\
%*s\t %d %d %d\r\n",
		&ball.red, &ball.green, &ball.blue,
		&teamColor.red, &teamColor.green, &teamColor.blue,
		&q,&w,&e,//&firstColor[0].red, &firstColor[0].green, &firstColor[0].blue,
		&firstColor[1].red, &firstColor[1].green, &firstColor[1].blue,
		&firstColor[2].red, &firstColor[2].green, &firstColor[2].blue,
		&secColor.red, &secColor.green, &secColor.blue,
		&oppColor.red, &oppColor.green, &oppColor.blue);

	//tes. bisa ternyata
	temp.Format("\n\nball: %d %d %d\n \
		teamColor:\t %d %d %d\n \
		firstColor0:\t %d %d %d\n \
		firstColor1:\t %d %d %d\n \
		firstColor2:\t %d %d %d\n \
		secColor:\t %d %d %d\n \
		oppColor:\t %d %d %d\n",
		ball.red, ball.green, ball.blue,
		teamColor.red, teamColor.green, teamColor.blue,
		q,w,e, //firstColor[0].red, firstColor[0].green, firstColor[0].blue,
		/*r,t,y,*/ firstColor[1].red, firstColor[1].green, firstColor[1].blue,
		/*u,i,o,*/ firstColor[2].red, firstColor[2].green, firstColor[2].blue,
		secColor.red, secColor.green, secColor.blue,
		oppColor.red, oppColor.green, oppColor.blue);
	OutputDebugString(temp);
	//masukkan ke form
	m_RedField1.SetPos(ball.red);
	m_GreenField1.SetPos(ball.green);
	m_BlueField1.SetPos(ball.blue);
	
	m_RedField2.SetPos(teamColor.red);
	m_GreenField2.SetPos(teamColor.green);
	m_BlueField2.SetPos(teamColor.blue);

	m_RedField3.SetPos(q);//firstColor[0].red);
	m_GreenField3.SetPos(w);//firstColor[0].green);
	m_BlueField3.SetPos(e);//firstColor[0].blue);

	m_RedField4.SetPos(firstColor[1].red);
	m_GreenField4.SetPos(firstColor[1].green);
	m_BlueField4.SetPos(firstColor[1].blue);

	m_RedField5.SetPos(firstColor[2].red);
	m_GreenField5.SetPos(firstColor[2].green);
	m_BlueField5.SetPos(firstColor[2].blue);

	m_RedField6.SetPos(secColor.red);
	m_GreenField6.SetPos(secColor.green);
	m_BlueField6.SetPos(secColor.blue);

	
	m_RedField7.SetPos(oppColor.red);
	m_GreenField7.SetPos(oppColor.green);
	m_BlueField7.SetPos(oppColor.blue);
	
}
void CSettingDialog::OnBnClickedOk()
{
	// TODO: Add your control notification handler code here
		//BallColor ball;
		//RobotColor teamColor, oppcolor, firstColor[3], secColor;
	ball.red = m_RedField1.GetPos();
	ball.green = m_GreenField1.GetPos();
	ball.blue = m_BlueField1.GetPos();
	
	teamColor.red	= m_RedField2.GetPos();
	teamColor.green	= m_GreenField2.GetPos();
	teamColor.blue	= m_BlueField2.GetPos();

	
	firstColor[0].red	= m_RedField3.GetPos();
	firstColor[0].green	= m_GreenField3.GetPos();
	firstColor[0].blue	= m_BlueField3.GetPos();

	firstColor[1].red	= m_RedField4.GetPos();
	firstColor[1].green	= m_GreenField4.GetPos();
	firstColor[1].blue	= m_BlueField4.GetPos();

	firstColor[2].red	= m_RedField5.GetPos();
	firstColor[2].green	= m_GreenField5.GetPos();
	firstColor[2].blue	= m_BlueField5.GetPos();

	secColor.red	= m_RedField6.GetPos();
	secColor.green	= m_GreenField6.GetPos();
	secColor.blue	= m_BlueField6.GetPos();

	oppColor.red	= m_RedField7.GetPos();
	oppColor.green	= m_GreenField7.GetPos();
	oppColor.blue	= m_BlueField7.GetPos();

	
	OnOK();
}

void CSettingDialog::OnBnClickedPickhome()
{
	// TODO: pilih warna untuk tim home
	pickingUp = true;
	IDColor = 1;
	ShowWindow(SW_HIDE);
}

void CSettingDialog::OnBnClickedPickcolor1()
{
	// TODO: Add your control notification handler code here
	pickingUp = true;
	IDColor = 2;
	ShowWindow(SW_HIDE);
}

void CSettingDialog::OnBnClickedPickcolor2()
{
	// TODO: Add your control notification handler code here
	pickingUp = true;
	IDColor = 3;
	ShowWindow(SW_HIDE);
}

void CSettingDialog::OnBnClickedPickcolor3()
{
	// TODO: Add your control notification handler code here
	pickingUp = true;
	IDColor = 4;
	ShowWindow(SW_HIDE);
}

void CSettingDialog::OnBnClickedPicksecondary()
{
	// TODO: Add your control notification handler code here
	pickingUp = true;
	IDColor = 5;
	ShowWindow(SW_HIDE);
}

void CSettingDialog::OnBnClickedPickopp()
{
	// TODO: Add your control notification handler code here
	pickingUp = true;
	IDColor = 6;
	ShowWindow(SW_HIDE);
}

void CSettingDialog::getColorSettings(ColorSettings c)
{
	c.ball.blue = m_BlueField1.GetPos();
	c.ball.green = m_GreenField1.GetPos();
	c.ball.red = m_RedField1.GetPos();
	
	c.firstColor[0] = firstColor[0];
	c.firstColor[1] = firstColor[1];
	c.firstColor[2] = firstColor[2];
	c.oppColor = oppColor;
	c.secColor = secColor;
	c.teamColor = teamColor;
}