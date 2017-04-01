#include"line.h"
#include<iostream>
using namespace std;
line::line(int a,int b,int c, int d):m_CoorA(a,b),m_CoorB(c,d)
	{

		cout<<"line()"<<endl;
	}
	line::~line()
	{
		cout<<"~line()"<<endl;
	}
	void line::set_A(int a,int b)
	{
		m_CoorA.set_x(a);
		m_CoorA.set_y(b);		
	}
	void line::get_B(int a, int b)
	{
		m_CoorB.set_x(a);
		m_CoorB.set_y(b);
	}
	void line::printinfo()
	{
		cout<<"("<<m_CoorA.get_x()<<","<<m_CoorA.get_y()<<")"<<endl;
		cout<<"("<<m_CoorB.get_x()<<","<<m_CoorB.get_y()<<")"<<endl;
	}
