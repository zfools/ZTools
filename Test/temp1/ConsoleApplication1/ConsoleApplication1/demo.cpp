#include "demo.h"	 
teacher::teacher(string name ,int age ,int m):m_strName(name),m_iAge(age),m_iNum(m)
{	
	cout<<"teacher(string name ,int age,int m)"<<endl;
}
teacher::teacher(const teacher &tea):m_strName(tea.m_strName),m_iAge(tea.m_iAge),m_iNum(tea.m_iNum)
{
	cout<<"teacher::teacher(const teacher &tea)"<<endl;
}
teacher::~teacher()
{
	cout<<"~teacher()"<<endl;
}
void teacher::set_name(string name)
{
	m_strName = name;
}
string teacher::get_name()
{
	return m_strName;
}
void teacher::set_age(int age)
{
	m_iAge = age;
}
int teacher::get_age()
{
	return m_iAge;
}
int teacher::get_num()
{
	return m_iNum;
}
