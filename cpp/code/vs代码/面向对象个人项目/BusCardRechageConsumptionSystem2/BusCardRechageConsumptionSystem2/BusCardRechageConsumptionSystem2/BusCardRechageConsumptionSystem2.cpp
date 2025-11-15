// BusCardRechageConsumptionSystem2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"



#include "BusCardSystem.h"

int main()
{
	BusCardSystem s;
	s.startBusCardSystem();

	Passenger a;
	int idMyself = 0;
	cout << "请输入你的账户" << endl;
	cin >> idMyself;
	int passwordMyself = 0;
	cin >> passwordMyself;
	/*int i=0;
	int p=0;*/
	a.PassengerLogin(idMyself,passwordMyself);

	return 0;


	

}
