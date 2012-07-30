// Client RoSo.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CClientRoSoApp:
// See Client RoSo.cpp for the implementation of this class
//

class CClientRoSoApp : public CWinApp
{
public:
	CClientRoSoApp();

// Overrides
	public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CClientRoSoApp theApp;