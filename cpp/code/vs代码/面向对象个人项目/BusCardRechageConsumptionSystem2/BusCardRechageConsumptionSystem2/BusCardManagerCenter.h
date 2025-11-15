#pragma once
#include "BusCard.h"
class BusCardManagerCenter
{
public:

	double centerMoney;			//公交卡出售与充值中心  用户刷卡支付的钱添加至此
	BusCard allBudCard;				//公交卡中心的  所有公交卡
	int CardNum = 20;				//公交卡中心   一共只有20张公交卡




									//private:
									//
									//	BusCardManagerCenter();


public:
	
	int sellBusCard();				//卖卡
	int moneyToCard(int how_money);					//充卡


	int initBusCardManagerCenter();//初始化  充值中心的余额  充值中心有几张卡   进而实现  卖卡  充卡



	BusCardManagerCenter();
	~BusCardManagerCenter();
};

