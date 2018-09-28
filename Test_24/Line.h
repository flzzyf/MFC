// Line.h: interface for the CLine class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_LINE_H__97EE1B4D_95C2_4977_B531_85FF2B0EBB5B__INCLUDED_)
#define AFX_LINE_H__97EE1B4D_95C2_4977_B531_85FF2B0EBB5B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


#include "P2.h"
#include "math.h"
#include "RGB.h"

#define ROUND(a) int(a+0.5)

class CLine  
{
public:
	CP2 P1;
	CP2 P0;
	CLine();
	virtual ~CLine();
	void MoveTo(CDC *pDC, CP2 p);
	void MoveTo(CDC *pDC, double x, double y);
	void LineTo(CDC *pDC, CP2 p0);
	void LineTo(CDC *pDC, double x, double y);
	CRGB color;

};

#endif // !defined(AFX_LINE_H__97EE1B4D_95C2_4977_B531_85FF2B0EBB5B__INCLUDED_)
