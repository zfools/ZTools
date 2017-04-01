#ifndef FIGHTPLANE_H
#define	FIGHTPLANE_H
#include"Plane.h"
#include"flyable.h"
#include<iostream>
using namespace std;

class fightlane	:public plane 
{
public:
	fightlane(string name);
	~fightlane();
	virtual void takeoff();
	virtual void land();
	virtual void printCode();

private:

};


#endif