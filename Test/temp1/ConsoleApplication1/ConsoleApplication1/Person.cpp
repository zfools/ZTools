#include"Person.h"
#include<iostream>
using namespace std;

person::person(string name)
{
	m_strName = name;
	cout<<"person()"<<endl;
}

person::~person()
{
	cout<<"~person()"<<endl;
}