// LostCrafts.v1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Scenario.h"

int main()
{
	Scenario s;
	s.initScenario();//打印  拯救世界吧。。。。
	s.myHero.initHero();//英雄初始化   最后提示初始化成功



	
	/*bool state = true;
	while (state)
	{
		s.round = 0;
		int index = s.choice();
		s.myMonster.initMonster(index);
		state = s.challenge();
	}*/
	//s.challenge();
    return 0;
}

