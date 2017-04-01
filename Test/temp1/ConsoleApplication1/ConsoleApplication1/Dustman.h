#ifndef DUSTMAN_H
#define DUSTMAN_H
#include"Worker.h"
class dustman:public worker 
{
public:
	dustman(string name,int age);
	~dustman();
	void work();


};		  

#endif