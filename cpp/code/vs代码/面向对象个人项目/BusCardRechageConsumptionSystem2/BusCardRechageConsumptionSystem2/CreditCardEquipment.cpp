#include "stdafx.h"
#include "CreditCardEquipment.h"


CreditCardEquipment::CreditCardEquipment()
{
}


CreditCardEquipment::~CreditCardEquipment()
{
}


int CreditCardEquipment::reduceMoney(BusCard& b,BusCardManagerCenter& c)
{

	b.money -= 5;//上车五元

	c.centerMoney += 5;//把钱给充值中心



	return 0;
}
