#include "stdafx.h"
#include "Passenger.h"


Passenger::Passenger()
{
}


Passenger::~Passenger()
{
}

void Passenger::initPassenger()
{
	int id[5] = { 123456,123457,123458,123459,123461 };
	int password[5] = { 123456,123457,123458,123459,123461 };
	//int haveMoney[5] = { 500,500,500,500,500 };
	//int haveMoney = 500;
}


int Passenger::PassengerLogin(int idMyself,int passwordMyself)
{
	//cout << "=================用户登录=======================" << endl;

	//Passenger::
	//initPassenger();


	//cout << idMyself << endl;
	//cout << passwordMyself << endl;



	//cout << "here2" << endl;


	if (idMyself == 123456 && passwordMyself == 123456)
	{
		cout << "登录成功" << endl;
		return 0;
	}
	else if(idMyself == 123457 && passwordMyself == 123457)
	{
		cout << "登录成功" << endl;
		return 0;
	}
	else if (idMyself == 123458 && passwordMyself == 123458)
	{
		cout << "登录成功" << endl;
		return 0;
	}
	else if (idMyself == 123459 && passwordMyself == 123459)
	{
		cout << "登录成功" << endl;
		return 0;
	}
	else if  (idMyself == 123461 && passwordMyself == 123461)
	{
		cout << "登录成功" << endl;
		return 0;
	}
	else {
		cout << "输入有误，登录失败！" << endl;
		return 1;
	}
	

	
	//Passenger admin;
	/*for (int i = 0; i < 5;i++)
	{ */

		
		/*if (idMyself ==id[i]  || passwordMyself==password[i])
		{
			cout << "here3" << endl;

			cout << "登录成功" << endl;
		}
		*/




		/*while (idMyself == id[i] && passwordMyself == password[i])
		{
			cout << "登录成功" << endl;
		}*/
	//}
	/*int i = 0;
	while (idMyself == id[i] && passwordMyself == password[i])
	{
	cout << "登录成功" << endl;
	}*/




	/*cout << "here" << endl;*/

	//{
	//	cout << "输入有误，登录失败！" << endl;
	//}
	//return 0;
}

//
////乘客买卡
int Passenger::buyBusCard(int enter)
{

	cout << "1 确认支付   2  返回" << endl;
	int op4 = 0;
	cin >> op4;
	if(op4==1)
	{
	haveMoney -= enter;		//假设卡100   一张   买一张，减十元
	BusCardNum += 1;

	cout << "支付成功" << endl;
	}
	else
	{
		//return 0;
	}

	return 0;
}
//给公交充钱
int Passenger::addMoneyToCard(BusCard& b)
{
	cout << "要充多少钱" << endl;
	int ADD_MOMEY = 0;
	cin >> ADD_MOMEY;
	//要判断一下  自己的钱有没有要充的钱多  不够提醒

	//cout << haveMoney << endl;
	if (haveMoney > ADD_MOMEY)
	{

		//自己的钱减少
		haveMoney -= ADD_MOMEY;
		//	haveMoney -= 10;

			//公交卡里的钱变多
		b.money += ADD_MOMEY;
		//cout << b.money << endl;
		cout << "充值成功" << endl;

	}
	else
	{
		cout << "支付失败！钱包余额不足" << endl;
	}

	return 0;
}

int Passenger::reduceMoneyToCard(BusCard& c)
{
	cout << "刷卡  模拟乘坐公交车"<<endl;
	cout << "上车支付5元" ;
	int SHUA_KA_QIAN_SHANG_CHE =0;//上车支付五元   刷卡钱
	cout << "(输入数字  5)" << endl;
	cin >> SHUA_KA_QIAN_SHANG_CHE;
	if (SHUA_KA_QIAN_SHANG_CHE == 5)
	{
		c.money -= 5;
	}
	cout << "支付成功！祝您生活愉快！" << endl;
	return 0;
}