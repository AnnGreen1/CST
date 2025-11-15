#pragma once
#include "Passenger.h"
#include "BusCardManagerCenter.h"
class BusCardSystem
{
public:
	Passenger myPassenger;
	/*BusCardManagerCenter myBusCardManagerCenter;
*/

	int consumption[5] = { 0,0,0,0,0 };//数组存  passenger   的消费情况

	BusCardSystem();
	~BusCardSystem();

	void startBusCardSystem();		//初始化系统


	int ranking(Passenger&);//消费统计  谁消费高谁第一   传数组  钱包里钱少的消费多
};

