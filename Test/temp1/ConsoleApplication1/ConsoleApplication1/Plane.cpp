#include"Plane.h"
#include<iostream>
using namespace std;

plane::plane(string name)
{
	m_strCode = name;
}

plane::~plane()
{
	
}
void plane::printCode()
{
	cout<<m_strCode<<endl;
}

void plane::takeoff()
{
	cout<<"plane->takeoff()"<<endl;
}

void plane::land()
{
	cout<<"plane->land()"<<endl; 
}

void plane::carry ()
{
	cout<< "plane can carry"<<endl;
}