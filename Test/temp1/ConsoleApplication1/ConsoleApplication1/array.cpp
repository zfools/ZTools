#include"array.h"
#include<iostream>
using namespace std;
Array::Array()
{
	m_count = 5;
}
Array::Array(const	Array &arr)
{
	m_count = arr.m_count;
}
Array::~Array()
{
	cout<<"~Array()"<<endl;
}