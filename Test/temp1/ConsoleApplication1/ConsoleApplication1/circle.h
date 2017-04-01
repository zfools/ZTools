#ifndef CIRCLE_H
#define CIRCLE_H
#include"shape.h"
#include"coordinate.h"

class circle:public shape
{
public:
	circle(int a,int b,double m_r);
	virtual~circle();
	double calcArea();

private:
	double m_dr;
	coordinates *m_coord;
	
};

#endif
