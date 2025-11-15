#include "stdafx.h"
#include "Scenario.h"


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
	cout << "而你，恰恰是被世界人民选中的具有超能力的未来英雄！" << endl;
	Sleep(1000);

	cout << "" << endl;
	cout << "为了拯救地球，打败怪物，你需要通过不断的战斗来提升自己的等级，并不停的学会新的技能，" << endl;
	Sleep(1000);

	cout << "" << endl;
	cout << "时间不等人，抓紧时间操练起来吧！" << endl;
	cout << "" << endl;
	cout << "==============================" << endl;
	cout << "====拯救世界吧，少年！v1.0====" << endl;
	cout << "==============================" << endl;

	//system("pause");
	//system("cls");
	PCL;
	round = 0;
}

int Scenario::choice()
{
	string monsternames[5] = { "巴尔坦虫怪", "格斯安鱼怪" , "泰斯鸟怪" ,"绿头猿怪" ,"赤龙怪（BOSS)" };
	int monsterlevels[5] = { 1,5,10,30,50 };

	//玩家选择怪兽的编号
	int optional;
	do
	{ 
	cout  << "请选择你要挑战的怪兽：" << endl;
	cout << setfill('-') << setw(30) << "" << endl;
	for (int i = 0; i < 5; i++)
	{
		string monsterInfo = monsternames[i] + "【lv" + to_string(monsterlevels[i]) + "】";
		cout << "|" << (i + 1) << ":" << setfill(' ') << setw(26) << monsterInfo << "|" << endl;
	}
	cout << setfill('-') << setw(30) << "" << endl;
	
	cin >> optional;
	} while (optional > 5 || optional < 1);
	//返回索引
	return optional-1;
}

bool Scenario::challenge()
{
	while (true)
	{
		showInfo();
		myHero.choice();
		myHero.attack(myMonster);
		showInfo(myHero.name);

		if (myMonster.isAlive())
		{
			myMonster.attack(myHero);
			showInfo(myMonster.name);
		//英雄和怪兽都未死亡，继续下一轮战斗，需要处理round,技能的action
			if (myHero.isAlive())
			{
				//增加轮数标记
				round++;
				//每回合完成后对技能的action更新
				for (int i = 0; i < CRAFTS_NUM; i++)
				{
					if (myHero.crafts[i].action>0)
					{
						myHero.crafts[i].action--;
					}
				}
				PCL;
			}//myMonster.isAlive(）
			else
			{
				myHero.levelDown();
				if (myHero.level == 0)
				{
					cout << "游戏失败，请重新开始" << endl;
					return false;
				}
				
				return true;
			}
		}//myMonster.isAlive()
		else
		{
			//打赢boss  通关
			if (myMonster.level == 50)
			{
				cout << "恭喜游戏通关" << endl;
				return false;
			}
			myHero.levelUp(myMonster.level);
		}





		/*myMonster.attack(myHero);
		showInfo(myMonster.name);
		system("pause");*/
	}
	

}

void Scenario::showInfo()
{
	cout << setfill('-') << setw(40) << "" << endl;
	cout << "|第" <<setfill('  ')<<setw(2)<< (round + 1) << "轮" << setfill(' ') << setw(35) << "|" << endl;
	
	showHeroAndMonster();

}

void Scenario::showInfo(string name)
{
	cout << setfill('-') << setw(40) << "" << endl;
	cout << "|" << setfill('  ') << setw(14) << name << "攻击！" <<right<< setfill(' ') << setw(20) << "|" << endl;

	showHeroAndMonster();
}


void Scenario::showHeroAndMonster()
{
	cout << setfill('-') << setw(40) << "" << endl;

	cout << "|英雄：" << left << setfill(' ') << setw(14) << myHero.name;
	cout << "|怪兽：" << left << setfill(' ') << setw(13) << myMonster.name << "|" << endl;




	cout << "|级别：" << left << setfill(' ') << setw(14) << myHero.level;
	cout << "|级别：" << left << setfill(' ') << setw(13) << myMonster.level << "|" << endl;


	cout << "|HP：" << left << setfill(' ') << setw(16) << myHero.HP;
	cout << "|HP：" << left << setfill(' ') << setw(15) << myMonster.HP << "|" << endl;

	cout << "|MP：" << left << setfill(' ') << setw(16) << myHero.MP;
	cout << "|" << right << setfill(' ') << setw(19) << "|" << endl;

	cout << setfill('-') << setw(40) << "" << endl;
}