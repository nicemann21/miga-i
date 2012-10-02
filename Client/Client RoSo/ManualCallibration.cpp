// ManualCallibration.cpp : implementation file
//

#include "stdafx.h"
#include "ClientRoSo.h"
#include "ManualCallibration.h"
#include "Game.h"
#include "serialclass.h"
#include <ctime>



// ManualCallibration dialog

IMPLEMENT_DYNAMIC(ManualCallibration, CDialog)

ManualCallibration::ManualCallibration(CWnd* pParent /*=NULL*/)
	: CDialog(ManualCallibration::IDD, pParent)
{

}

ManualCallibration::~ManualCallibration()
{
}

void ManualCallibration::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_SUDUT, m_sudut);
	DDX_Control(pDX, IDC_posx, m_posx);
	DDX_Control(pDX, IDC_posy, m_posy);
	DDX_Control(pDX, IDC_Kp, m_kp);
	m_kp.SetWindowText("2.0");
	//m_id_robot.SetWindowText("2");
	DDX_Control(pDX, IDC_VL, m_vl);
	DDX_Control(pDX, IDC_VR, m_vr);
	DDX_Control(pDX, IDC_ID_ROBOT, m_id_robot);
}


BEGIN_MESSAGE_MAP(ManualCallibration, CDialog)
	ON_BN_CLICKED(ID_ROT, &ManualCallibration::OnBnClickedRot)
	ON_BN_CLICKED(ID_GERAK, &ManualCallibration::OnBnClickedGerak)
	ON_BN_CLICKED(IDC_STOP, &ManualCallibration::OnBnClickedStop)
END_MESSAGE_MAP()


// ManualCallibration message handlers

void ManualCallibration::OnBnClickedRot()
{
	// TODO: Manual rotasi dengan memasukkan nilai sudut atau posisi (x,y)
	CString cSudut, cPosx, cPosy;
	int sudut, posx, posy;
	m_sudut.GetWindowText(cSudut);
	sudut = atoi(cSudut);
	//gerakBelok(sudut);
	CGame g;
	g.Angle(2,sudut);

	
	
}

void ManualCallibration::gerakBelok(int sudut)
{
	//
	int theta_e =0;
	int vl = 0, vr =0;
	double Kp;
	CString cKp, t, sVl, sVr;
	char arahL ='+', arahR = '-' ;
	char data[17];
	m_kp.GetWindowText(cKp);
	Kp = atof(cKp);
	
	theta_e = sudut ;

	while(theta_e >180)  
		theta_e -= 360;
	while(theta_e <-180) 
		theta_e += 360;
	vl = (int)(-Kp*(double)theta_e);
	vr = (int)(Kp*(double)theta_e);
	//CGame g;
	//g.HomeRobot[1].VelocityLeft = vl;
	//g.HomeRobot[1].VelocityRight = vr;
	
	if ( vr > 255 ) vr = 255;	//Velocity Limte
	if ( vl > 255 ) vl = 255;
	if ( vr < -255) vr = -255;
	if ( vl < -255) vl = -255;
	//tentukan arahnya
	arahL = (vl< 0)? '-':'+';
	arahR = (vr< 0)? '-':'+';
	vl = abs(vl);
	vr = abs(vr);
	//vl += 50;
	//vr += 50;
	//dibikin ke string?
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
	}else
	{
		sVr.Format("%d",vr);
	}
	for(int i=0;i<17;i++)
	{
		data[i]='C';
	}
	data[0] = '#';
	data[1] = 'A';
	data[2] = arahR;
	data[4] = sVr[0];
	data[6] = sVr[1];
	data[8] = sVr[2];
	data[10] = arahL;
	data[12] = sVl[0];
	data[14] = sVl[1];
	data[16] = sVl[2];

	Serial serial("\\\\.\\COM17");
	if(serial.IsConnected())
	{
		serial.WriteData(data,80);
	}else
	{
		OutputDebugString("Ga konek");
	}
	
}

void ManualCallibration::OnBnClickedGerak()
{
	// TODO: Add your control notification handler code here
	
	CString cvl, cvr, c_idr;
	int vl, vr, idr;
	CGame g;
	
	m_vl.GetWindowText(cvl);
	m_vr.GetWindowText(cvr);
	m_id_robot.GetWindowText(c_idr);
	
	vl = atoi(cvl);
	vr = atoi(cvr);
	idr = atoi(c_idr);
	
	g.HomeRobot[idr].lastVelocityLeft  = g.HomeRobot[idr].VelocityLeft;
	g.HomeRobot[idr].lastVelocityRight = g.HomeRobot[idr].VelocityRight;
	
	OutputDebugString("KUMAHAAAAAAAA IEUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU!\n");
	//for(int i=0;i<5;i++){
		g.HomeRobot[idr].VelocityLeft = vl;
		g.HomeRobot[idr].VelocityRight = vr;
		g.Velocity(idr);
		/*g.HomeRobot[idr].VelocityLeft = vl;
		g.HomeRobot[idr].VelocityRight = vr;
		g.Velocity(idr);
		*/

	//}

	//OutputDebugString("Tunggu!\n");
	//Sleep(2000);
	//OutputDebugString("SELESAI!\n");
	//g.HomeRobot[3].VelocityLeft = -vl;
	//g.HomeRobot[3].VelocityRight = -vr;
	//g.Velocity(3);

	//g.HomeRobot[3].VelocityLeft = vl;
	//g.HomeRobot[3].VelocityRight = vr;
	//g.Velocity(3);
	
	//OutputDebugString("Tunggu!\n");
	//Sleep(2000);
	//OutputDebugString("SELESAI!\n");
	//g.HomeRobot[idr].VelocityLeft = 0;
	//g.HomeRobot[idr].VelocityRight = 0;
	//g.Velocity(idr);
	////g.HomeRobot[idr].VelocityLeft = 0;
	////g.HomeRobot[idr].VelocityRight = 0;
	//g.Velocity(idr);


}

void ManualCallibration::OnBnClickedStop()
{
	CGame g;
	CString c_idr;
	int idr;
	m_id_robot.GetWindowText(c_idr);
	idr = atoi(c_idr);
	g.HomeRobot[idr].VelocityLeft = 0;//vl;
	g.HomeRobot[idr].VelocityRight = 0;//vr;
	g.Velocity(idr);
	g.Velocity(idr);
	
}
