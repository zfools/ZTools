#include"bird.h"
#include<iostream>

using namespace std;

bird::bird()
{
}

bird::~bird()
{
}

void bird::takeoff()
{
	cout<<"bird_can_takeoff"<<endl;
}

void bird::land()
{
	cout<<"bird_can_land"<<endl;
}

void bird::foraging()
{
	cout<<"bird_can_foraging"<<endl;
}