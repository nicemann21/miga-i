// ManualCallibration.cpp : implementation file
//

#include "stdafx.h"
#include "ClientRoSo.h"
#include "ManualCallibration.h"
#include "Game.h"
#include "serialclass.h"


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
	m_kp.SetWindowText("0.12");
	DDX_Control(pDX, IDC_VL, m_vl);
	DDX_Control(pDX, IDC_VR, m_vr);
}


BEGIN_MESSAGE_MAP(ManualCallibration, CDialog)
	ON_BN_CLICKED(ID_ROT, &ManualCallibration::OnBnClickedRot)
	ON_BN_CLICKED(ID_GERAK, &ManualCallibration::OnBnClickedGerak)
END_MESSAGE_MAP()


// ManualCallibration message handlers

void ManualCallibration::OnBnClickedRot()
{
	// TODO: Manual rotasi dengan memasukkan nilai sudut atau posisi (x,y)
	CString cSudut, cPosx, cPosy;
	int sudut, posx, posy;
	m_sudut.GetWindowText(cSudut);
	sudut = atoi(cSudut);
	gerakBelok(sudut);
	
	
}

void ManualCallibration::gerakBelok(int sudut)
{
	//
	int theta_e =0;
	int vl = 0, vr =0;
	double Kp;
	CString cKp, t;
	m_kp.GetWindowText(cKp);
	Kp = atof(cKp);
	
	theta_e = sudut ;

	while(theta_e >180)  
		theta_e -= 360;
	while(theta_e <-180) 
		theta_e += 360;
	vl = (int)(-Kp*(double)theta_e);
	vr = (int)(Kp*(double)theta_e);
	CGame g;
	g.HomeRobot[1].VelocityLeft = vl;
	g.HomeRobot[1].VelocityRight = vr;
	g.Velocity(1);
	
}

void ManualCallibration::OnBnClickedGerak()
{
	// TODO: Add your control notification handler code here
	CString cvl, cvr;
	int vl, vr;
	CGame g;
	m_vl.GetWindowText(cvl);
	m_vr.GetWindowText(cvr);
	
	vl = atoi(cvl);
	vr = atoi(cvr);
	g.HomeRobot[1].VelocityLeft = vl;
	g.HomeRobot[1].VelocityRight = vr;
	g.Velocity(1);

}
