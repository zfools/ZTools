#include"shape.h"
#include<iostream>
using namespace std;

shape::shape()
{
	cout<<"shape()"<<endl;
}

shape::~shape()
{
	cout<<"~shape()"<<endl;
}
double shape::calcArea()
{
	cout<<"caclArea()"<<endl;
	return 0;
}