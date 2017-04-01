#include <stdlib.h>
#include"circle.h"
#include<iostream>
#include "rect.h"
#include "shape.h"
#include "string"
#include "flyable.h"
#include "Plane.h"
#include "Fightplane.h"
#include <vector>
#include <map>
#include "bird.h"

using namespace std;	


void dosomething(flyable*obj)
{
	cout<<typeid(*obj).name()<<endl;
	obj->takeoff();
	if (typeid(*obj)==typeid(bird))
	{
		bird*niao = dynamic_cast<bird*>(obj);
		niao->foraging();

	}

	if (typeid(*obj)==typeid(plane))
	{
		plane* feiji= dynamic_cast<plane*>(obj);
		feiji->carry();

	}
	obj->land();
}

class Movable
{
public:
    virtual void move() = 0;
};

/**
 * 定义公交车类：Bus
 * 公有继承移动类
 * 特有方法carry
 */

class Bus : public Movable
{
public:
    virtual void move()
    {
        cout << "Bus -- move" << endl;
    }
    
    void carry()
    {
        cout << "Bus -- carry" << endl;
    }
};

/**
 * 定义坦克类：Tank
 * 公有继承移动类
 * 特有方法fire
 */
class Tank :public Movable
{
public:
    virtual void move()
    {
        cout << "Tank -- move" << endl;
    }

    void fire()
    {
        cout << "Tank -- fire" << endl;
    }
};

/**
 * 定义函数doSomething含参数
 * 使用dynamic_cast转换类型
 */


void doSomething2(Movable *obj)
{
    obj->move();

    if(typeid(*obj) == typeid(Bus))
    {
       Bus *bus = dynamic_cast<Bus*>(obj);
        bus->carry();
    }

    if(typeid(*obj)==typeid(Tank))
    {
        Tank *tank = dynamic_cast<Tank*>(obj);
        tank->fire();
    }
}

int division(int dividend, int divisor)
{
	if(0 == divisor)
	{
		// 抛出异常，字符串“除数不能为0”
		throw string("除数不能为0");
	}
	else
	{
		return dividend / divisor;
	}
}

// int main(void)
// {
// 	int d1 = 0;
// 	int d2 = 0;
// 	int r = 0;
// 	cin >> d1;
// 	cin >> d2;
// 	// 使用try...catch...捕获异常
// 	try
// 	{
// 		division(d1,d2) 
// 	}
// 	catch(string)
// 	{
// 		cout<<"除数不能为0"<<endl;
// 	}

void FlyMatch(flyable *a,flyable *b)
{
	a->takeoff();
	a->land();
	b->takeoff();
	b->land();
}
int main(void)
{
// 	int d1 = 0;
// 	int d2 = 0;
// 	int r = 0;
// 	cin >> d1;
// 	cin >> d2;
// 	// 使用try...catch...捕获异常
// 	try
// 	{
// 		r = division(d1,d2);
// 		cout<<r<<endl;
// 	}
// 	catch (string &str)
// 	{
// 		cout<<str<<endl;
// 	}
// 	  coordinates *p = new coordinates(3,5);
// 
// 	  -(*p);
// 	  cout<<p->get_x()<<"  "<<p->get_y()<<endl;
// 	  ++(*p);
// 	  cout<<p->get_x()<<"  "<<p->get_y()<<endl;

	vector<int> vec;
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(8);
	vec.push_back(4);

	vector<int>::iterator iter = vec.begin();
	for(;iter!= vec.end();iter++)
	{
		cout<<*iter<<endl;
	}
	map<string, string> m;
	pair<string,string> p1("H","Hello");
	pair<string,string> p2("W","world");
	pair<string,string> p3("B","BeiJing");

	m.insert(p1);
	m.insert(p2);
	m.insert(p3);
	map<string,string>::iterator ite= m.begin();
	for(;ite!=m.end();ite++)
	{
		cout<<ite->first<<"  "<<ite->second<<endl;
	}														

	system("pause");

	return 0;

}									    