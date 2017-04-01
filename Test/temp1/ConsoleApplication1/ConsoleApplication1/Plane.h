#ifndef PLANE_H
#define	PLANE_H
#include"flyable.h"
#include<string>
using namespace std;
class plane:public flyable
{
public:
	plane(string name);
	~plane();
	virtual void takeoff();
	virtual void land();
	virtual void printCode();
	void carry();


private:
	string m_strCode;

};



#endif