#ifndef BIRD_H
#define BIRD_H
#include"flyable.h"

class bird :public flyable
{
public:
	bird();
	~bird();
	virtual void takeoff();
	virtual void land();
	void foraging();

};




#endif