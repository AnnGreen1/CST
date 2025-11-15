#include "stdafx.h"
#include "BusCardManagerCenter.h"


BusCardManagerCenter::BusCardManagerCenter()
{
}


BusCardManagerCenter::~BusCardManagerCenter()
{
}


int BusCardManagerCenter::initBusCardManagerCenter()
{
	centerMoney = 100;				//充值中心初始有100

	allBudCard.cardPrice= 10;			//每张卡卖10
	allBudCard.money = 0;				//卖卡是卡里没有钱   passenger必须充钱才能用


	return 0;
}


//int BusCardManagerCenter::moneyToCard(int id,int how_money)
//{
//
//}




//卖卡    出售充值中心的        卡数量减少    同时乘客获得卡   即完成卖卡操作  
//当然    出售充值中心的钱变多  乘客的钱表少  视为成功
int BusCardManagerCenter::sellBusCard()
{
	CardNum-= 1;
	centerMoney += 10;//假设卡10  一张    

	return 0;
}



//充卡   充值中心的钱变多
int BusCardManagerCenter::moneyToCard(int how_money)
{
	centerMoney += how_money;


	return 0;
}
