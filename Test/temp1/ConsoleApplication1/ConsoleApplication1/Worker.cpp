#include"Worker.h"
#include<iostream>
using namespace std;					
worker::worker(string name ,int age):person(name)
{
	m_iAge = age;
	cout<<"worker()"<<endl;
}

worker::~worker()
{
	cout<<"~worker()"<<endl;
}