// MyApplication.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

//#include "MyIplClass.h" 
#include "resource.h"		// main symbols
#define IMAGE_WIDTH	 640
#define IMAGE_HEIGHT	480
#define IMAGE_CHANNELS	3

// CMyApplicationApp:
// See MyApplication.cpp for the implementation of this class
//

class CMyApplicationApp : public CWinApp
{
public:
	CMyApplicationApp();

// Overrides
	public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CMyApplicationApp theApp;