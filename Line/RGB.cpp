// RGB.cpp: implementation of the CRGB class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Line.h"
#include "RGB.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CRGB::CRGB()
{

}

CRGB::~CRGB()
{

}

CRGB operator+(CRGB &c1, CRGB &c2)
{
	CRGB c;
	c.red = c1.red + c2.red;
	c.green = c1.green + c2.green;
	c.blue = c1.blue + c2.blue;
	return c;
}
