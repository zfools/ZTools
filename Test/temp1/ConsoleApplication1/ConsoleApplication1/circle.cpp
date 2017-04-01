#include<iostream>
#include "circle.h"
#include"coordinate.h"

using namespace std;
circle::circle(int a,int b,double m_r)
{
	m_coord = new coordinates(a,b);	
	m_dr = m_r;
	
	cout<<"circle()"<<endl;
}

circle::~circle()
{
	cout<<"~circle()"<<endl;
	delete m_coord;
	m_coord = NULL;
}

double circle::calcArea()
{
	cout<<"circle calcArea()"<<endl;
	return 3.14*m_dr*m_dr;
	
}