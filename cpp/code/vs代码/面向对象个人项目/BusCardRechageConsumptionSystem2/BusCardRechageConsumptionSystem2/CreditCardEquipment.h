#pragma once
#include"BusCardManagerCenter.h"
#include"BusCard.h"
class CreditCardEquipment
{
public:

	 //卡刷掉的钱给刷卡机  刷卡机再给充值中心  
	//刷卡机的操作有   刷卡  从卡中扣钱

	int reduceMoney(BusCard&,BusCardManagerCenter&);

	CreditCardEquipment();
	~CreditCardEquipment();
};

