// Client RoSoDlg.h : header file
//

#pragma once
#include "afxwin.h"
//nambah untuk header game
#include "Game.h"
#include "MyIOCP.h"	//header fungsi IOCP


// CClientRoSoDlg dialog
class CClientRoSoDlg : public CDialog
{
// Construction
public:
	CClientRoSoDlg(CWnd* pParent = NULL);	// standard constructor
	//CClientRoSoDlg(void *arg);

// Dialog Data
	enum { IDD = IDD_CLIENTROSO_DIALOG };
	//untuk IOCP
	CString m_Alamat;
	CString m_teks;
	int m_iPort;
	BOOL isKoneksi;
	BOOL m_GameStart;

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;
	MyIOCP m_iocp;
	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

private:
	void UpdateClientData();
	void UpdateList();
	void StartTheSystem();
	void ekstrakData(CString data);
	//(31/7)
	void GameProccess();
	int m_cTimer;
	int m_clientID;
	RobotDPosition Robot[5], Opp[5];

public:
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	int Timer1;
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	CButton m_R1;
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton12();
	afx_msg void OnBnClickedButton11();
	CButton m_R2;
	CButton m_R3;
	CButton m_R4;
	CButton m_R5;
	CButton m_A1;
	CButton m_A2;
	CButton m_A3;
	CButton m_A4;
	CButton m_A5;
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedRadio1();
	afx_msg void OnBnClickedRadio2();
	afx_msg void OnBnClickedRadio3();
	afx_msg void OnBnClickedRadio4();
	afx_msg void OnBnClickedRadio5();
	afx_msg void OnBnClickedRadio6();
	afx_msg void OnBnClickedRadio7();
	afx_msg void OnBnClickedRadio8();
	//afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedStartgame();

	//nambah (30/6)
	CGame m_CGame;
	afx_msg void OnBnClickedConnect();
	// untuk koneksi ke server
	CEdit m_IPServer;
	afx_msg void OnBnClickedStopgame();
	CStatic m_rb1;
	CStatic m_rb2;
	CStatic m_rb3;
	CStatic m_rb4;
	CStatic m_rb5;
	CStatic m_ball;
};
