#include"Fightplane.h"
#include"Plane.h"

fightlane::fightlane(string name):plane(name)
{
}
fightlane::~fightlane()
{
}

void fightlane::takeoff()
{
	cout<<"fightlane->takeoff()"<<endl;
}
									 
void fightlane::land()
{
	cout<<"fightlane->land()"<<endl;
}
void fightlane::printCode()
{
	cout<<"fight_lane_printcode"<<endl;
}
