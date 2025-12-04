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
	double haveMoney[5] = { 500,500,500,500,500 };
}


int Passenger::PassengerLogin(int idMyself,int passwordMyself)
{
	cout << "=================ÓÃ»§µÇÂ¼=======================" << endl;

	Passenger::initPassenger();
	Passenger admin;
	for (int i = 0; i < 5;i++)
	{ 
		if (idMyself == admin.id[i]&&passwordMyself==admin.password[i])
		{


			cout << "µÇÂ¼³É¹¦" << endl;
		}
		
	}

	//{
	//	cout << "ÊäÈëÓĞÎó£¬µÇÂ¼Ê§°Ü£¡" << endl;
	//}
	return 0;
}