#pragma once
#include "afxwin.h"


// CCallibration dialog

class CCallibration : public CDialog
{
	DECLARE_DYNAMIC(CCallibration)

public:
	CCallibration(CWnd* pParent = NULL);   // standard constructor
	virtual ~CCallibration();

// Dialog Data
	enum { IDD = IDD_CALLIBRATION };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedRadio4();
	afx_msg void OnBnClickedRadio1();
	afx_msg void OnBnClickedRadio2();
	afx_msg void OnBnClickedRadio3();
	afx_msg void OnBnClickedRadio5();
	afx_msg void OnBnClickedRadio6();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton7();
	//afx_msg void OnBnClickedClose();
	afx_msg void OnBnClickedHomeTeam();
	afx_msg void OnBnClickedRadio8();
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnBnClickedButton8();
	//afx_msg void OnEnUpdateEdit1();
	int m_robot_1_R;
	int m_output;
	CEdit m_robot1_L;
	CEdit m_robot1_R;
	afx_msg void OnBnClickedButton9();
	CEdit m_robot2_L;
	CEdit m_robot2_R;
};
