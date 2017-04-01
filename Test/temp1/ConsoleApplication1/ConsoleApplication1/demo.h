#include<iostream>
#include<string>
using namespace std;
class teacher
{
public:
	teacher(string _name = "jim",int _age = 35 ,int m = 60);
	teacher(const teacher &tea);
	~teacher();
	void set_name(string name);
	string get_name();
	void set_age(int age);
	int get_age();
	int get_num();
private:
	string m_strName;
	int m_iAge;
	const int m_iNum;	

};