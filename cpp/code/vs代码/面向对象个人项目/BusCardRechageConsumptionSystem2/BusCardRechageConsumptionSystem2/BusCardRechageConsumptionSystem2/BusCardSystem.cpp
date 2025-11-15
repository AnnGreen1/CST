#include "stdafx.h"
#include "BusCardSystem.h"


BusCardSystem::BusCardSystem()
{
}


BusCardSystem::~BusCardSystem()
{
}

void BusCardSystem::startBusCardSystem()
{
	cout << "======================公交卡充值管理系统====================" << endl;
	//初始化  用户  管理系统   公交卡

	cout << "1,用户登录   2，公交刷卡    3，退出系统  " << endl;
	int op = 0;
	cin >> op;
	/*for (int i=0; op == 1 || op == 2 || op == 3;i++){
	
	}
*/


	switch (op)
	{
	case 1:
		cout << "==========================用户登录=====================" << endl;
	/*	int idMyself = 0;
		cout << "请输入你的账户" << endl;
		cin >> idMyself;
		int passwordMyself = 0;
		cin >> passwordMyself;
		myPassenger.PassengerLogin(idMyself,passwordMyself);*/
		break;
	case 2:
		cout << "==========================公交刷卡=====================" << endl;
		break;
	case 3:
		cout << "==========================退出系统=====================" << endl;
		break;
	default:
		cout << "==========================输入有误======================" << endl;
		break;

	}
}