#ifndef PERSON_H
#define PERSON_H	
#include<string>
using namespace std;

class person
{
public:
	person(string name);
	virtual ~person();
	virtual void work() = 0;

private:
	string m_strName;

};
				  

#endif