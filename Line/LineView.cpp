// LineView.cpp : implementation of the CLineView class
//

#include "stdafx.h"
#include "Line.h"

#include "LineDoc.h"
#include "LineView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CLineView

IMPLEMENT_DYNCREATE(CLineView, CView)

BEGIN_MESSAGE_MAP(CLineView, CView)
	//{{AFX_MSG_MAP(CLineView)
	ON_COMMAND(Draw_Line, OnDrawLine)
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CLineView construction/destruction

CLineView::CLineView()
{
	// TODO: add construction code here

}

CLineView::~CLineView()
{
}

BOOL CLineView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CLineView drawing

void CLineView::OnDraw(CDC* pDC)
{
	CLineDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CLineView printing

BOOL CLineView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CLineView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CLineView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CLineView diagnostics

#ifdef _DEBUG
void CLineView::AssertValid() const
{
	CView::AssertValid();
}

void CLineView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CLineDoc* CLineView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CLineDoc)));
	return (CLineDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CLineView message handlers

//CDC *pDC;

void CLineView::OnDrawLine() 
{
	// TODO: Add your command handler code here
	CLineDoc *pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	CDC *pDC = GetDC();
	
	CRect rect;
	GetClientRect(&rect);

	pDC->SetMapMode(MM_ANISOTROPIC);

	pDC->SetWindowExt(rect.Width(), rect.Height());	// 设置窗口范围
	pDC->SetViewportExt(rect.Width(), -rect.Height());	//设置视口范围
	pDC->SetViewportOrg(rect.Width() / 2, rect.Height() / 2);	//设置视口原点

	rect.OffsetRect(-rect.Width() / 2, -rect.Height() / 2);
	CPoint p0(-100, -50), p1(100, 50);
	CPen newPen, *pOldPen;
	newPen.CreatePen(PS_SOLID,1, RGB(0, 0, 255));
	pOldPen = pDC->SelectObject(&newPen);
	pDC->MoveTo(p0);
	pDC->LineTo(p1);
	pDC->SelectObject(pOldPen);
}
