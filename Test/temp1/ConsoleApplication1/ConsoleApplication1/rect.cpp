#include"rect.h"
#include<iostream>
using namespace std;

rect::rect(double width,double height)
{
	m_dWidth = width;
	m_dHeight = height;
	cout<<"rect()"<<endl;
}
rect::~rect()
{
	cout<<"~rect()"<<endl;
}

double rect::calcArea()
{
	cout << "rect caclarea()"<<endl;
	return m_dHeight*m_dWidth;
	
}