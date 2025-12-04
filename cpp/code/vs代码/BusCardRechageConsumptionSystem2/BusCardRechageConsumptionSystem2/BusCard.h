#pragma once
#include "Passenger.h"
class Passenger;
class BusCard
{
public:
	/*Passenger admin;*/


	//卡内余额   与   用户钱包余额不同
	double money;
	//公交卡售价    买公交卡就是要钱   就是这个公交卡售价  100
	double cardPrice;

	int addMoney(Passenger&);                //用来反映    充值后的公交卡余额
	int reuceMoney();				//用来反映    刷卡后的公交卡余额









	BusCard();
	~BusCard();
};

