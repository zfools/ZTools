#ifndef WORKER_H
#define WORKER_H
#include"Person.h"


class worker : public person  
{
public:
	worker(string name,int age);
	~worker();
	virtual void work() = 0;

private:
	int m_iAge;

};




#endif