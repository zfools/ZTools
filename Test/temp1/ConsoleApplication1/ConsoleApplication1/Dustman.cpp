#include"Dustman.h"
#include<iostream>
using namespace std;

dustman::dustman(string name,int age):worker(name,age)
{
	cout<<"dustman->dustman"<<endl;
}

dustman::~dustman()
{
	cout<<"dustman::~dustman()"<<endl;
}

void dustman::work()
{
	cout<<"dustman-->work()"<<endl;
}