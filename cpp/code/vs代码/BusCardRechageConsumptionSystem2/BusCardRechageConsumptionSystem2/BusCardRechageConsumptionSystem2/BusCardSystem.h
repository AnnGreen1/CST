#pragma once
#include "Passenger.h"
//#include "BusCardManagerCenter.h"
class BusCardSystem
{
public:
	Passenger myPassenger;
	/*BusCardManagerCenter myBusCardManagerCenter;
*/



	BusCardSystem();
	~BusCardSystem();

	void startBusCardSystem();		//初始化系统
};

