#pragma once
#include "BusCard.h"
class BusCard;
class Passenger
{
public:
	int id[5];
	int password[5];
	int BusCardNum = 0;

	int haveMoney=500;					//乘客有钱
	//BusCard haveBusCard;				//乘客有自己的公交卡

	int  buyBusCard(int);				//乘客可以买公交卡  用乘客自己的钱  买一定价钱的公交卡
	int addMoneyToCard(BusCard&);				//给公交卡充钱				buy   和    add都要钱
	int  reduceMoneyToCard(BusCard&);			//公交卡刷卡






	void initPassenger();
	int PassengerLogin(int id,int password);







	Passenger();
	~Passenger();
};

