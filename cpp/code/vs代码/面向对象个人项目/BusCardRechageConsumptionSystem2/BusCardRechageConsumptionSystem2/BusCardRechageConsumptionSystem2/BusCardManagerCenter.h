#pragma once
#include "BusCard.h"
class BusCardManagerCenter
{
public:

	double centerMoney;			//公交卡出售与充值中心  用户刷卡支付的钱添加至此
	BusCard allBudCard;				//公交卡中心的  所有公交卡

									//private:
									//
									//	BusCardManagerCenter();


public:
	
	BusCard sellBusCard();				//卖卡
	bool moneyToCard();					//充卡






	BusCardManagerCenter();
	~BusCardManagerCenter();
};

