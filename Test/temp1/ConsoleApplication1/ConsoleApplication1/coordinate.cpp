#include"coordinate.h"
#include<iostream>
using namespace std;

coordinates::coordinates(int a ,int b)
{
	m_inX = a;
	m_inY = b;
	cout<<"coordinate()"<<endl;
}
coordinates::~coordinates()
{
	cout<<"~coordinates()"<<endl;
}
void coordinates::set_x(int a)
{
	m_inX = a;	
}
int coordinates::get_x()
{
	return m_inX;
}
void coordinates::set_y(int a)
{
	m_inY = a;	
}
int coordinates::get_y()
{
	return m_inY;
}

coordinates &coordinates::operator-()
{
	m_inX = -m_inX;
	m_inY = -m_inY;

	return *this;
}

coordinates& coordinates::operator++()
{
	m_inX = m_inX++;
	m_inY = m_inY--;

	return *this;
}

