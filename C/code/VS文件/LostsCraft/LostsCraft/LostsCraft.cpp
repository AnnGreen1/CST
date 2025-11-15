// LostsCraft.cpp : 定义控制台应用程序的入口点。
//



#include "stdafx.h"
#include "Craftsmanship.h"
#include "Scenario.h"

int main(int argc,_TCHAR* argv[])
{
	//快捷键，显示智能提示窗口 ctrl+j
	/*Craftsmanship c1;
	c1.name = "寒冰掌";
	c1.consumption = 20;
	c1.cooling = 2;
    return 0;*/

	/*Scenario s;
	s.initScenario();
	s.myHero.initHero();
	s.state = true;
	while (s.state)
	{
		s.myMonster.initMonster(s.choice());
		s.round = 0;
		s.state = s.challenge();


	}
	PC;
	return 0;*/






	system("color EC");

	Scenario s;
	s.initScenario();//打印  拯救世界吧。。。。
	s.myHero.initHero();//英雄初始化   最后提示初始化成功
	s.state = true;//state  判断游戏是否结束
	while (s.state)
	{
		s.myMonster.initMonster(s.choice());//根据操作数初始化怪兽
		s.round = 0;
		s.state = s.challenge();

	}
	PC;
	return 0;
	

}




