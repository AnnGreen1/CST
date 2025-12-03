#include "stdafx.h"
#include "Scenario.h"
//#include <Windows.h>
//#include "Craftsmanship.h"
#include"Monster.h"
#include"Hero.h"

Scenario::Scenario()
{
}


Scenario::~Scenario()
{
}


void Scenario::initScenario()
{
	Sleep(1000);
	cout << "现在是2222年的某一天，地球忽然遭受来自外太空生物的攻击，世界正面临着巨大的危机，" << endl;
	Sleep(1000);
	cout << "" << endl;
	cout<<"而你，恰恰是被世界人民选中的具有超能力的未来英雄！"<<endl; 
	Sleep(1000);

	cout << "" << endl;
	cout << "为了拯救地球，打败怪物，你需要通过不断的战斗来提升自己的等级，并不停的学会新的技能，" << endl;
	Sleep(1000);

	cout << "" << endl;
	cout<<"时间不等人，抓紧时间操练起来吧！" << endl;
	cout << "" << endl;
	cout << "==============================" << endl;
	cout << "====拯救世界吧，少年！v1.0====" << endl;
	cout << "==============================" << endl;
	PC;
}

int Scenario::choice()
{
	int optional;
	do
	{
		CLS;
		//setfill设置填充符，setw设置格式
		cout << right << "请选择你要挑战的怪兽：" << endl;
		cout << setfill('-') << setw(30) << "" << endl;
		cout << "| 1:" << setfill(' ') << setw(26) << "巴尔坦虫怪【lv1】|" << endl;
		cout << "| 2:" << setw(26) << "格斯安鱼怪【lv5】|" << endl;
		cout << "| 3:" << setw(26) << "泰斯鸟怪【lv10】|" << endl;
		cout << "| 4:" << setw(26) << "绿头猿怪【lv30】|" << endl;
		cout << "| 5:" << setw(26) << "赤龙怪（BOSS)【lv50】|" << endl;
		cout << setfill('-') << setw(30) << "" << endl;
		cin >> optional;
	} while (optional < 1 || optional>5);
	return --optional;
}

bool Scenario::challenge()
{
	while (true)
	{
		showInfo(round, myHero, myMonster);
		myHero.choice();
		myHero.attack(myMonster);
		showInfo(myHero.name, myHero, myMonster);
		if (myMonster.isAlive())
		{
			myMonster.attack(myHero);
			showInfo(myMonster.name, myHero, myMonster);
			if (myHero.isAlive())
			{
				myHero.levelDown();
				if (myHero.level <= 0)
				{
					cout << "============游戏失败!===========" << endl;
					return false;
				}
				return true;
			}
			else
			{
				round++;
				for (int i = 0; i != NUM_CRAFTS; i++)
				{
					myHero.crafts[i].action = myHero.crafts[i].action <= 0 ? 0 : myHero.crafts[i].action - 1;

				}
				PC;
				continue;
			}
		}
		else
		{
			if (myMonster.level == 50)
			{
				cout << "===========恭喜通关==========" << endl;
				return false;
			}
			myHero.levelUp(myMonster.level);
			return true;
		}
	}
}

void Scenario::showInfo(int round, Hero myHero, Monster myMonster)
{
	cout << left << setfill('-') << setw(39) << "" << endl;				//表格宽度共计40个半角字符
	cout << "|" << setfill(' ') << "第" << setw(3) << round+1 << "轮" << setw(30) << "" << "|" << endl;//此处round做了修改，加了1
	cout << setfill('-') << setw(39) << "" << endl;
	cout << "|" << setfill(' ') << setw(6) << "英雄：" << setw(12) << myHero.name << "|" << setw(6) << "怪兽:" << myMonster.name << "   |" << endl;//小问题，怎么对齐？
	cout << "|" <<				   setw(6) << "级别 " << setw(12) << myHero.level << "|" << setw(6) << "级别:" << setw(12) << myMonster.level << "|" << endl;
	cout << "|" << setw(6) << "HP:" << setw(12) << myHero.HP << "|" << setw(6) << "HP:" << setw(12) << myMonster.HP << "|" << endl;
	cout << "|" << setw(6) << "MP:" << setw(12) << myHero.MP << "|" << setw(18) << "" << "|" <<endl;
	cout << setfill('-') << setw(39) << "" << endl;
}


void Scenario::showInfo(string name, Hero myHero, Monster myMonster)
{
	cout << left << setfill('-') << setw(39) << "" << endl;				//表格宽度共计40个半角字符
	cout << "|" << setfill(' ') <<  setw(12) << name << "攻击！" << setw(19) << "" << "|" << endl;
	cout << setfill('-') << setw(39) << "" << endl;
	cout << "|" << setfill(' ') << setw(6) << "英雄：" << setw(12) << myHero.name << "|" << setw(6) << "怪兽:" << myMonster.name << "|" << endl;
	cout << "|" << setw(6) << "级别 " << setw(12) << myHero.level << "|" << setw(6) << "级别:" << setw(12) << myMonster.level << "|" << endl;
	cout << "|" << setw(6) << "HP:" << setw(12) << myHero.HP << "|" << setw(6) << "HP:" << setw(12) << myMonster.HP << "|" << endl;
	cout << "|" << setw(6) << "MP:" << setw(12) << myHero.MP << "|" << setw(18) << "" << "|" << endl;
	cout << setfill('-') << setw(39) << "" << endl;


}