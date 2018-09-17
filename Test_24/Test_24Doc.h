// Test_24Doc.h : interface of the CTest_24Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_TEST_24DOC_H__0B1DC51C_78C6_427D_99CD_6346DFAF1C94__INCLUDED_)
#define AFX_TEST_24DOC_H__0B1DC51C_78C6_427D_99CD_6346DFAF1C94__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CTest_24Doc : public CDocument
{
protected: // create from serialization only
	CTest_24Doc();
	DECLARE_DYNCREATE(CTest_24Doc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTest_24Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CTest_24Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CTest_24Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TEST_24DOC_H__0B1DC51C_78C6_427D_99CD_6346DFAF1C94__INCLUDED_)
