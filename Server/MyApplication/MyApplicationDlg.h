// MyApplicationDlg.h : header file
//

#pragma once
#include "afxwin.h"
#include "afxcmn.h"
#include "mil.h" 
#include "ImageProc.h"
#include "SettingDialog.h"
#include <vector>
//#define USE_MIL

//untuk iocp
#include "MyIOCP.h"
#include "IOCP.h"

//using namespace cv;
using namespace std;
// CMyApplicationDlg dialog
class CMyApplicationDlg : public CDialog
{
// Construction
public:
	CMyApplicationDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_MYAPPLICATION_DIALOG };
	//untuk iocp
	CString	m_Adress;
	CString	m_sReceivedTxt;
	CString	m_sSendTxt;
	BOOL	m_bFlood;
	int		m_MsgPerSec;
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support

// Implementation
protected:
	HICON m_hIcon;
	MyIOCP m_iocp;
	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnBnClickedProcess();
	afx_msg void OnBnClickedGrab();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnBnClickedBtnThreshold();
	afx_msg void OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	DECLARE_MESSAGE_MAP()
	BITMAPINFO* bmi; 
	BITMAPINFOHEADER* bmih;
	RGBQUAD* palette;
	unsigned int buffer[sizeof(BITMAPINFOHEADER) + sizeof(RGBQUAD)*256]; 
public:
	cv::Mat MatImage;
	//IplImage* TheImage;
#ifdef USE_MIL
	MIL_ID MilApplication; // Application identifier.
	MIL_ID MilSystem; // System identifier.
	MIL_ID MilDigitizer; // Digitizer identifier.
	MIL_ID MilImage; // Image buffer identifier.
	MIL_ID MilDisplay;
#endif
	long NumberOfDigitizer; // Number of digitizers available on the system
	long SizeX; // Buffer Size X
	long SizeY; // Buffer Size Y
	long DigSizeX; // Digitizer input width
	long DigSizeY; // Digitizer input heigh
	long Band; // Number of input color bands of the digitizer
	BOOL GrabIsStarted; // State of the grab
	HWND hWnd;
	void DisplayMyData(void);
	CStatic m_Pict;
private:
	bool still_processing;

	//untuk iocp
	void UpdateClientData();
	void StartSystem();
	void kirimData();

//	CImageProc imgProc;
	cv::Vec3b	homeTeamColor;
	cv::Vec3b	oppoTeamColor;
	cv::Vec3b	ballColor;
	cv::Vec3b	homeFirstColor;
	cv::Vec3b	homeSecondColor;
	cv::Vec3b	homeThirdColor;
	cv::Vec3b	secondaryColor;
	//CVision m_pVisionSys;
	CImageProc imgProc;

public:
	IplImage* src_gray;
	CSettingDialog setting;
	CSliderCtrl m_RedSlider;
	CSliderCtrl m_GreenSlider;
	CSliderCtrl m_BlueSlider;
	CString m_ThresholdValue;
	int threshold;
	int rt;
	int gt;
	int bt;
	cv::Mat result; 
	cv::Mat templ;
	short	label[IMAGE_WIDTH][IMAGE_HEIGHT],color[IMAGE_WIDTH][IMAGE_HEIGHT];
	//short	UpperLabel, LeftLabel, tmpLabel, sizeES1, sizeES2, SumOfSize;
	//short	whichColor, WhereAppended, /*whichcomponent,*/ whichComponent[NUM_COLORS][MAX_NUM_ESET];
	//short	ColorOfUpperLabel, ColorOfLeftLabel, ColorOfLabel[IMAGE_SIZE_Y][IMAGE_SIZE_X];
	vector<short> eq_set;
	short numcolor;
	afx_msg void OnActivate(UINT nState, CWnd* pWndOther, BOOL bMinimized);
};
