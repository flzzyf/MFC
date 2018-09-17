// Test_24Doc.cpp : implementation of the CTest_24Doc class
//

#include "stdafx.h"
#include "Test_24.h"

#include "Test_24Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTest_24Doc

IMPLEMENT_DYNCREATE(CTest_24Doc, CDocument)

BEGIN_MESSAGE_MAP(CTest_24Doc, CDocument)
	//{{AFX_MSG_MAP(CTest_24Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTest_24Doc construction/destruction

CTest_24Doc::CTest_24Doc()
{
	// TODO: add one-time construction code here

}

CTest_24Doc::~CTest_24Doc()
{
}

BOOL CTest_24Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CTest_24Doc serialization

void CTest_24Doc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CTest_24Doc diagnostics

#ifdef _DEBUG
void CTest_24Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CTest_24Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CTest_24Doc commands
