// RGB.h: interface for the CRGB class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_RGB_H__1387F9F6_7725_4DBF_B1D0_8B1FA8F48F13__INCLUDED_)
#define AFX_RGB_H__1387F9F6_7725_4DBF_B1D0_8B1FA8F48F13__INCLUDED_

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
	CRGB(double _red, double _green, double _blue);
	virtual ~CRGB();
	friend CRGB operator+(CRGB &c1, CRGB &c2);
	friend CRGB operator-(CRGB &c1, CRGB &c2);
	friend CRGB operator*(CRGB &c1, CRGB &c2);
	friend CRGB operator*(CRGB &c1, double k);
	friend CRGB operator/(CRGB &c1, double k);
	friend CRGB operator+=(CRGB &c1, CRGB &c2);
	friend CRGB operator-=(CRGB &c1, CRGB &c2);
	friend CRGB operator*=(CRGB &c1, CRGB &c2);
	friend CRGB operator/=(CRGB &c1, double k);
	void Normalize();


};

#endif // !defined(AFX_RGB_H__1387F9F6_7725_4DBF_B1D0_8B1FA8F48F13__INCLUDED_)
