#ifndef FLYABLE_H
#define FLYABLE_H
class flyable
{
public:
	virtual void takeoff() = 0;
	virtual void land() = 0;
};

#endif