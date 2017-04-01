#ifndef COORDINATES_H_
#define COORDINATES_H_
class coordinates		
{
public:

	coordinates(int a,int b);
	~coordinates();
	void set_x(int a);
	int get_x();
	void set_y(int b);
	int get_y();

	coordinates& operator -();  //返回的是对象本身
	coordinates& operator ++();	
	coordinates& operator ++(int);

private:
	int m_inX;
	int m_inY;
};

#endif