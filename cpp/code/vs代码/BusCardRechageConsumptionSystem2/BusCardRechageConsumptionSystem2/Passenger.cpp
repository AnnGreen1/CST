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
	int haveMoney = 500;
}


int Passenger::PassengerLogin(int idMyself,int passwordMyself)
{
	cout << "=================用户登录=======================" << endl;

	//Passenger::
	//initPassenger();


	cout << idMyself << endl;
	cout << passwordMyself << endl;
	cout << "here2" << endl;


	if (idMyself == 123456 && passwordMyself == 123456)
	{
		cout << "登录成功" << endl;
	}
	else if(idMyself == 123457 && passwordMyself == 123457)
	{
		cout << "登录成功" << endl;
	}
	else if (idMyself == 123458 && passwordMyself == 123458)
	{
		cout << "登录成功" << endl;
	}
	else if (idMyself == 123459 && passwordMyself == 123459)
	{
		cout << "登录成功" << endl;
	}
	else if  (idMyself == 123461 && passwordMyself == 123461)
	{
		cout << "登录成功" << endl;
	}
	else {
		cout << "输入有误，登录失败！" << endl;
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
	return 0;
}

//
////乘客买卡
int Passenger::buyBusCard()
{
	haveMoney -= 10;		//假设卡10   一张   买一张，减十元
	BusCardNum += 1;
	return 0;
}
//给公交充钱
int addMoneyToCard()
{
	cout << "要充多少钱" << endl;
	int ADD_NOMEY = 0;
	cin >> ADD_NOMEY;
	//自己的钱减少
	//haveMoney -= ADD_NOMEY;
	//haveMoney -= 10;
	return 0;
}