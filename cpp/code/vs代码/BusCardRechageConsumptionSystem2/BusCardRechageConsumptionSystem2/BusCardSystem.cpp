#include "stdafx.h"
#include "BusCardSystem.h"


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

void BusCardSystem::startBusCardSystem()
{
	cout << "======================公交卡充值管理系统====================" << endl;
	//初始化  用户  管理系统   公交卡
	Passenger a;
	


	cout << "1,用户登录   2，公交刷卡    3，退出系统  " << endl;


	int op = 0;
	int op1 = 0;
	cin >> op;

	//登录操作
	int id = 0;
	cout << "账号" << endl;
	cin >> id;
	int word = 0;
	cout << "密码" << endl;
	cin >> word;

	int result = 0;



	switch (op)
			{
			case 1:
				cout << "==========================用户登录=====================" << endl;
				
				a.initPassenger();
				a.PassengerLogin(id,word);
				
				result= a.PassengerLogin(id, word);
				if (result == 0) {

					cout << "1 购买公交卡与充值     2 查询余额      3 用户信息      4 退出系统" << endl;

				}

				//cout << "1 购买公交卡与充值     2 查询余额      3 用户信息      4 退出系统" << endl;
				
				cin >> op1;
				switch (op1)
				{
				case 1:
					cout << "============购买公交卡与充值 =============" << endl;


				case 2:
					cout << "============查询余额 =============" << endl;

				case 3:
					cout << "============用户信息 =============" << endl;
				case 4:
					//退出系统
					cout << "退出系统" << endl;
				}



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