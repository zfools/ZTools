#ifndef RECT_H
#define RECT_H


#include"shape.h"
class rect:public shape
{
public:
	rect(double width,double height);
	virtual ~rect();
	virtual double calcArea();

private:
	double m_dWidth;
	double m_dHeight;

};

#endif