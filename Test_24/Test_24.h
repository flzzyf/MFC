// Test_24.h : main header file for the TEST_24 application
//

#if !defined(AFX_TEST_24_H__A81BB4DD_3B36_4DD1_BCF8_1554314005C3__INCLUDED_)
#define AFX_TEST_24_H__A81BB4DD_3B36_4DD1_BCF8_1554314005C3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CTest_24App:
// See Test_24.cpp for the implementation of this class
//

class CTest_24App : public CWinApp
{
public:
	CTest_24App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTest_24App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CTest_24App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TEST_24_H__A81BB4DD_3B36_4DD1_BCF8_1554314005C3__INCLUDED_)
