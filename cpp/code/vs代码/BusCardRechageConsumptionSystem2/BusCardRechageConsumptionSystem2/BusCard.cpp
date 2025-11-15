#include "stdafx.h"
#include "BusCard.h"


BusCard::BusCard()
{
}


BusCard::~BusCard()
{
}
int BusCard::addMoney(Passenger& pger)
{
	pger.haveMoney -= 5;//ÉÏ³µ5Ôª
	return 0;
}