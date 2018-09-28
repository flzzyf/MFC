// Test_24View.cpp : implementation of the CTest_24View class
//

#include "stdafx.h"
#include "Test_24.h"

#include "Test_24Doc.h"
#include "Test_24View.h"

#include "math.h"
#include "P2.h"
#include "InputDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTest_24View

#define PI 3.14159
#define ROUND(a) int(a+0.5)

int n;
double r;
CP2 *p;

IMPLEMENT_DYNCREATE(CTest_24View, CView)

BEGIN_MESSAGE_MAP(CTest_24View, CView)
	//{{AFX_MSG_MAP(CTest_24View)
	ON_COMMAND(IDW_Line, OnDrawLine)
	ON_COMMAND(IDW_Diamond, OnDrawDiamond)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTest_24View construction/destruction

CTest_24View::CTest_24View()
{
	// TODO: add construction code here
	p = NULL;
}

CTest_24View::~CTest_24View()
{
	if(p)
	{
		delete[]p;
		p = NULL;
	}
}

BOOL CTest_24View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CTest_24View drawing

void CTest_24View::OnDraw(CDC* pDC)
{
	CTest_24Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CTest_24View printing

BOOL CTest_24View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CTest_24View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CTest_24View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CTest_24View diagnostics

#ifdef _DEBUG
void CTest_24View::AssertValid() const
{
	CView::AssertValid();
}

void CTest_24View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CTest_24Doc* CTest_24View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CTest_24Doc)));
	return (CTest_24Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CTest_24View message handlers

void CTest_24View::OnDrawLine() 
{
	CTest_24Doc *pDoc = GetDocument();
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

void CTest_24View::OnDrawDiamond() 
{
	CInputDlg dlg;
	if(IDOK == dlg.DoModal())
	{
		n = dlg.m_n;
		r = dlg.m_r;
	}
	else
	{
		return;
	}
	Invalidate(FALSE);
	p = new CP2[n];
	
	DrawDiamond();
}

void CTest_24View::DrawDiamond()
{
	CDC * pDC = GetDC();
	CRect rect;
	GetClientRect(&rect);
	pDC->SetMapMode(MM_ANISOTROPIC);
	pDC->SetWindowExt(rect.Width(), -rect.Height());
	pDC->SetViewportExt(rect.Width(), -rect.Height());
	pDC->SetViewportOrg(rect.Width()/2, rect.Height()/2);

	CPen NewPen, * pOldPen;
	NewPen.CreatePen(PS_SOLID, 1, RGB(0, 0, 255));
	pOldPen=pDC->SelectObject(&NewPen);
	double thta;
	thta = 2 * PI / n;
	int i;
	for(i = 0; i < n; i++)
	{
		p[i].x = r * cos(i * thta);
		p[i].y = r * sin(i * thta);

	}

	for(i = 0; i <= n - 2; i++)
	{
		for(int j = i + 1; j <= n - 1; j++)
		{
			pDC->MoveTo(ROUND(p[i].x), ROUND(p[i].y));
			pDC->LineTo(ROUND(p[j].x), ROUND(p[j].y));
		}
	}
	pDC->SelectObject(pOldPen);
	NewPen.DeleteObject();
	ReleaseDC(pDC);
}

void CTest_24View::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	
	CView::OnLButtonDown(nFlags, point);

	p0.x = point.x;
	p0.y = point.y;
}

void CTest_24View::OnLButtonUp(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	
	CView::OnLButtonUp(nFlags, point);

	p1.x = point.x;
	p1.y = point.y;

	CLine *line = new CLine;
	CDC *pDC = GetDC();
	line->MoveTo(pDC, p0);
	line->LineTo(pDC, p1);
	delete line;
	ReleaseDC(pDC);
	
}

void CTest_24View::OnMouseMove(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	
	CView::OnMouseMove(nFlags, point);

	CString strx, stry;
	CMainFrame *pFrame = (CMainFrame *)AfxGetMainWnd();
	CStatusBar *pstatus = &pFrame->m_wndStatusBar;
	if(pstatus)
	{
		strx.Format("x=%d", point.x);
		stry.Format("y=%d", point.y);
		CClientDC dc(this);
		CSize sizex = dc.GetTextExtent(strx);
		CSize sizey = dc.GetTextExtent(stry);

		pstatus->SetPaneInfo(1, ID_INDICATOR_X, SBPS_NORMAL, sizex.cx);
		pstatus->SetPaneText(1, strx);
		pstatus->SetPaneInfo(2, ID_INDICATOR_Y, SBPS_NORMAL, sizey.cx);
		pstatus->SetPaneText(2, stry);
	}
}
