// LineDoc.cpp : implementation of the CLineDoc class
//

#include "stdafx.h"
#include "Line.h"

#include "LineDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CLineDoc

IMPLEMENT_DYNCREATE(CLineDoc, CDocument)

BEGIN_MESSAGE_MAP(CLineDoc, CDocument)
	//{{AFX_MSG_MAP(CLineDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CLineDoc construction/destruction

CLineDoc::CLineDoc()
{
	// TODO: add one-time construction code here

}

CLineDoc::~CLineDoc()
{
}

BOOL CLineDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CLineDoc serialization

void CLineDoc::Serialize(CArchive& ar)
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
// CLineDoc diagnostics

#ifdef _DEBUG
void CLineDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CLineDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CLineDoc commands
