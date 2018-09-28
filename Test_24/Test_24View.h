// Test_24View.h : interface of the CTest_24View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_TEST_24VIEW_H__C08E0433_C846_45B3_98C8_E5C621981B42__INCLUDED_)
#define AFX_TEST_24VIEW_H__C08E0433_C846_45B3_98C8_E5C621981B42__INCLUDED_

#include "P2.h"	// Added by ClassView
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "Line.h"
#include "MainFrm.h"


class CTest_24View : public CView
{
protected: // create from serialization only
	CTest_24View();
	DECLARE_DYNCREATE(CTest_24View)

// Attributes
public:
	CTest_24Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTest_24View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	void DrawDiamond();
	virtual ~CTest_24View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CTest_24View)
	afx_msg void OnDrawLine();
	afx_msg void OnDrawDiamond();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
	CP2 p1;
	CP2 p0;
};

#ifndef _DEBUG  // debug version in Test_24View.cpp
inline CTest_24Doc* CTest_24View::GetDocument()
   { return (CTest_24Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TEST_24VIEW_H__C08E0433_C846_45B3_98C8_E5C621981B42__INCLUDED_)
