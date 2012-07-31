#pragma once
#include "afxcmn.h"
#include "ImageProc.h"

// CSettingDialog dialog

typedef struct 
{
	short red;
	short green;
	short blue;
} BallColor;

typedef struct 
{
	short red;
	short green;
	short blue;
} RobotColor;

//tes color setting (25/7)
typedef struct
{
	BallColor ball;
	RobotColor teamColor, oppColor, firstColor[3], secColor;
} ColorSettings;

class CSettingDialog : public CDialog
{
	DECLARE_DYNAMIC(CSettingDialog)

public:
	CSettingDialog(CWnd* pParent = NULL);   // standard constructor
	virtual ~CSettingDialog();

// Dialog Data
	enum { IDD = IDD_SETTING_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	CSpinButtonCtrl m_RedField1;
	CSpinButtonCtrl m_GreenField1;
	CSpinButtonCtrl m_BlueField1;
	virtual BOOL OnInitDialog();
	afx_msg void OnDeltaposRedSpin(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnBnClickedPickColor();
	bool pickingUp;
	short IDColor;
	void pickColor(short c1, short c2, short c3);
	void pickColor(short c1, short c2, short c3, short ID);
	void setDefaultColor();
	void saveColorToText();
	void loadColorSettings();
	void getColorSettings(ColorSettings c);
	BallColor ball;
	RobotColor teamColor, oppColor, firstColor[3], secColor;

	CImageProc* img_proc;
	afx_msg void OnBnClickedSetBtn1();
	afx_msg void OnBnClickedSetBtn2();
	afx_msg void OnBnClickedSave();
	CSpinButtonCtrl m_RedField2;
	CSpinButtonCtrl m_RedField3;
	CSpinButtonCtrl m_RedField4;
	CSpinButtonCtrl m_RedField5;
	CSpinButtonCtrl m_RedField6;
	CSpinButtonCtrl m_RedField7;
	CSpinButtonCtrl m_BlueField2;
	CSpinButtonCtrl m_BlueField3;
	CSpinButtonCtrl m_BlueField4;
	CSpinButtonCtrl m_BlueField5;
	CSpinButtonCtrl m_BlueField6;
	CSpinButtonCtrl m_BlueField7;
	CSpinButtonCtrl m_GreenField2;
	CSpinButtonCtrl m_GreenField3;
	CSpinButtonCtrl m_GreenField4;
	CSpinButtonCtrl m_GreenField5;
	CSpinButtonCtrl m_GreenField6;
	CSpinButtonCtrl m_GreenField7;


	
	afx_msg void OnBnClickedLoad();
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedPickhome();
	afx_msg void OnBnClickedPickcolor1();
	afx_msg void OnBnClickedPickcolor2();
	afx_msg void OnBnClickedPickcolor3();
	afx_msg void OnBnClickedPicksecondary();
	afx_msg void OnBnClickedPickopp();

//private:
	
};


