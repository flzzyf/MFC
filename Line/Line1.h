// Line1.h: interface for the CLine class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_LINE1_H__CAE5A5B0_8D0E_48E6_A54B_10631700C4C5__INCLUDED_)
#define AFX_LINE1_H__CAE5A5B0_8D0E_48E6_A54B_10631700C4C5__INCLUDED_

#include "P2.h"	// Added by ClassView
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CLine  
{
public:
	CP2 P1;
	CP2 P0;
	CLine();
	virtual ~CLine();
	void MoveTo(CDC *, CP2 p0);

};

#endif // !defined(AFX_LINE1_H__CAE5A5B0_8D0E_48E6_A54B_10631700C4C5__INCLUDED_)
