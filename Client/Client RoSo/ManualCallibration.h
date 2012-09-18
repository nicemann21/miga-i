#pragma once
#include "afxwin.h"


// ManualCallibration dialog

class ManualCallibration : public CDialog
{
	DECLARE_DYNAMIC(ManualCallibration)

public:
	ManualCallibration(CWnd* pParent = NULL);   // standard constructor
	virtual ~ManualCallibration();

// Dialog Data
	enum { IDD = IDD_MANUALCALLIBRATION };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedRot();
	CEdit m_sudut;
	CEdit m_posx;
	CEdit m_posy;

private:
	void gerakBelok(int sudut);
	void gerakLurus(int vr, int vl);
public:
	CEdit m_kp;
	afx_msg void OnBnClickedGerak();
	CEdit m_vl;
	CEdit m_vr;
	afx_msg void OnBnClickedStop();
	CEdit m_id_robot;
};
