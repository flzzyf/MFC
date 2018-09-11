// RGB.h: interface for the CRGB class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_RGB_H__22E9636A_A8C0_4371_9B7F_6A34C27C62CC__INCLUDED_)
#define AFX_RGB_H__22E9636A_A8C0_4371_9B7F_6A34C27C62CC__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CRGB  
{
public:
	double blue;
	double green;
	double red;
	CRGB();
	virtual ~CRGB();
	friend CRGB operator+(CRGB &c1, CRGB &c2);

};

#endif // !defined(AFX_RGB_H__22E9636A_A8C0_4371_9B7F_6A34C27C62CC__INCLUDED_)
