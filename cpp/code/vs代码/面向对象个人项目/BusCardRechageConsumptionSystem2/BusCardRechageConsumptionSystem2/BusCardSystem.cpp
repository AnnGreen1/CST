#include "stdafx.h"
#include "BusCardSystem.h"
#include "Passenger.h"

BusCardSystem::BusCardSystem()
{
}


BusCardSystem::~BusCardSystem()
{
}

//void BusCardSystem::startBusCardSystem()
//{
//	cout << "======================公交卡充值管理系统====================" << endl;
//	//初始化  用户  管理系统   公交卡
//
//	cout << "1,用户登录   2，公交刷卡    3，退出系统  " << endl;
//	int op = 0;
//	cin >> op;
//	/*for (int i=0; op == 1 || op == 2 || op == 3;i++){
//	
//	}
//*/
//
//
//	switch (op)
//	{
//	case 1:
//		cout << "==========================用户登录=====================" << endl;
//	/*	int idMyself = 0;
//		cout << "请输入你的账户" << endl;
//		cin >> idMyself;
//		int passwordMyself = 0;
//		cin >> passwordMyself;
//		myPassenger.PassengerLogin(idMyself,passwordMyself);*/
//		break;
//	case 2:
//		cout << "==========================公交刷卡=====================" << endl;
//		break;
//	case 3:
//		cout << "==========================退出系统=====================" << endl;
//		break;
//	default:
//		cout << "==========================输入有误======================" << endl;
//		break;
//
//	}
//}




//1  首先 三个选项							用户登录					公交刷卡							退出系统  
//2											/ |
//3										/     |
//									/         |
//           充值与刷卡                  查询余额
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//


//菜单的返回上一级  很可能需要用大循环(很可能是for循环）与  continue  来实现

void BusCardSystem::startBusCardSystem()
{

	cout << "======================公交卡充值管理系统====================" << endl;
	//初始化  用户  管理系统   公交卡
	Passenger a;
	BusCard bc;
	bc.initBusCard();

	//cout << a.haveMoney << endl;

	cout << "1,用户登录   2，公交刷卡  3，退出系统  " << endl;			//**********顶端菜单************************8


	int op = 0;
	int op1 = 0;
	cin >> op;

	//========================================用户登录=================================================================================================
	if (op == 1) {
		cout << "==========================用户登录=====================" << endl;
		//登录操作
		int id = 0;
		cout << "账号" << endl;
		cin >> id;
		int word = 0;
		cout << "密码" << endl;
		cin >> word;

		int result = 0;


		//************************************************************************************************************************************************************



		//int op = 0;
		//int op1 = 0;
		//cin >> op;
		////登录操作
		//int id = 0;
		//cout << "账号" << endl;
		//cin >> id;
		//int word = 0;
		//cout << "密码" << endl;
		//cin >> word;
		//int result = 0;




		a.initPassenger();
		//a.PassengerLogin(id, word);

		result = a.PassengerLogin(id, word);
		if (result == 0) {

			cout << "1 购买公交卡与充值     2 查询余额      3 用户信息      4 退出系统    " << endl;//*******************次顶端菜单******************************

		}
		else {
			cout << "你不用输了，账号密码你都不知道" << endl;
			return;
		}
		//cout << "1 购买公交卡与充值     2 查询余额      3 用户信息      4 退出系统" << endl;

		cin >> op1;

		/*for (int time = 0; time < 5; time++)
		{
		}*/


		if (op1 == 1)
		{

			cout << "============购买公交卡与充值 =============" << endl;



			cout << "1 购买公交卡  2 充值   3 返回主界面" << endl;//**************************末端菜单***************************

			int op2 = 0;
			cin >> op2;
			//  1 购买公交卡
			if (op2 == 1)
			{
				cout << "需支付100?" << endl;
				cin >> op2;
				a.buyBusCard(op2);

			}
			cout << "(还是 1 购买公交卡  2 充值   3 返回主界面 的菜单 )" << endl;
			//改  操作数   返回菜单   但受限制  就是只能像要求一样  毫无改变   ############这里有个问题，就是要求是可以反复充钱，但是此功能只能充一次钱#######
			op2 = 0;
			cin >> op2;
			if (op2 == 2)
			{
				cout << "请输入充值的金额" << endl;
				a.addMoneyToCard(bc);

				//……………………………………………………………………………………………………………………………………………………………………………………………………………………
				cout << "要不要查余额？  只有这一次机会，机不可失，时不再来   要的话输1 不要输0" << endl;


				int op3 = 0;
				cin >> op3;
				if (op3 == 1)
				{
					cout << "============查询余额 =============" << endl;
					//double balance = 0;//余额
					//bc.money = balance;
					cout << "当前余额" << bc.money << "  CNY" << endl;
				}
				//……………………………………………………………………………………………………………………………………………………………………………………………………………………
				int op4 = 0;
				cout << "要不要清屏  要输1  不要输0" << endl;
				cin >> op4;
				if (op4 == 1)
				{
					system("cls");//*****************打印主界面钱把屏幕清空******************
				}


				startBusCardSystem();//************返回主界面*************************



			}
			else
			{
				//返回主界面
				//cout << "jj" << endl;
				system("cls");//*****************打印主界面钱把屏幕清空******************
				startBusCardSystem();//************返回主界面*************************
			}

		}





		else if (op1 == 2)
		{
			cout << "============查询余额 =============" << endl;
			//double balance = 0;//余额
			//bc.money = balance;
			cout << "当前余额" << bc.money << "  CNY" << endl;
		}
		else if (op1 == 3)

		{
			//a.initPassenger();
			cout << "============用户信息 =============" << endl;
			cout << "账号:" << id << endl;
			cout << "密码:" << word << endl;
			cout << "钱包余额：" << a.haveMoney << endl;
		}
		else {
			//退出系统
			cout << "退出系统" << endl;
			return;
		}



		/*	int idMyself = 0;
			cout << "请输入你的账户" << endl;
			cin >> idMyself;
			int passwordMyself = 0;
			cin >> passwordMyself;
			myPassenger.PassengerLogin(idMyself,passwordMyself);*/

	}

	//=======================================公交刷卡==================================================================================================
	else if (op == 2) {
		cout << "==========================公交刷卡=====================" << endl;
		BusCard bus_card;
		a.reduceMoneyToCard(bus_card);
		cout << "输入0返回主菜单" << endl;
		int op2 = 0;
		cin >> op2;
		if (op2 == 0)
		{
			system("cls");//*****************打印主界面钱把屏幕清空******************
			startBusCardSystem();//************返回主界面*************************
		}

	}

	//=======================================退出系统==================================================================================================
	else if (op == 3)
	{
		cout << "==========================退出系统=====================" << endl;

		return;//退出系统  用return   直接执行完main函数   结束   就是退出系统的效果
	}
	//=======================================输入有误==================================================================================================
	else {
		cout << "==========================输入有误======================" << endl;
		return;//退出系统  用return   直接执行完main函数   结束   就是退出系统的效果
	}






}




int BusCardSystem::ranking(Passenger& passenger)
{
	int k = 0;
	int i = 0;
	consumption[i] = passenger.haveMoney;


	cout << consumption[i] << endl;

	int j = 1;
	consumption[j] = passenger.id[k];
	cout << consumption[j] << endl;
	i++;
	j++;
	k++;
	return 0;
}