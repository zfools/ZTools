
#include"coordinate.h"	 
class line	  
{
public:
	line(int a,int b,int c, int d);
	~line();
	void set_A(int a,int b);
	void get_B(int a,int b);
	void printinfo();	

private:
	coordinates m_CoorA;
	coordinates m_CoorB;

};

