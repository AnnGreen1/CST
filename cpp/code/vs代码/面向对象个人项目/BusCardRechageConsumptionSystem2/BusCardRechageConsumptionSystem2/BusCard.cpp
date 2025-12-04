#include "stdafx.h"
#include "BusCard.h"


BusCard::BusCard()
{
}


BusCard::~BusCard()
{
}
//int BusCard::addMoney(Passenger& pger)
//{
//	pger.haveMoney -= 5;//ÉÏ³µ5Ôª
//}



int BusCard::initBusCard()
{
	money = 0;
	cardPrice = 100;

	return 0;
}

int BusCard::addMoney(double addM)
{
	money += addM;

	return 0;
}


int BusCard::reduceMoney(double reduceM)
{
	money -= reduceM;

	return 0;
}