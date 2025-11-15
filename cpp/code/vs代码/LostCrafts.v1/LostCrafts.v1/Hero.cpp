#include "stdafx.h"
#include "Hero.h"

#include "Monster.h"
Hero::Hero()
{
}


Hero::~Hero()
{
}
void Hero::initHero()
{
	cout << "请输入英雄的名称：";
	cin >> name;
	level = 1;
	HP = 2000;
	MP = 50;
	//0-7
	string craftsname[CRAFTS_NUM] = { "普通击打","寒冰掌","石破惊雷","赤火焰烧","月蚀镰刀","圣光冲击","天师灵助","天威庇佑" };   
	int availables[CRAFTS_NUM] = { 1,2,5,10,20,30,35,45 };
	int mps[CRAFTS_NUM] = { 0,5,10,20,40,60,80,100 };
	int atks[CRAFTS_NUM] = { 10,12,15,18,20,22,25,30 };
	int coolings[CRAFTS_NUM] = { 0,1,3,3,4,4,5,5 };
	for (int i = 0; i != CRAFTS_NUM; i++)
	{
		crafts[i].name = craftsname[i];
		crafts[i].available = availables[i];
		crafts[i].consumption = mps[i];
		crafts[i].ATK = atks[i] * level;
		//crafts[i].cooling = atks[i]*level;
		crafts[i].cooling = coolings[i];
		crafts[i].action = 0;
	}
	cout << "英雄：" << name << "初始化成功！" << endl;


	//PC;

	//system("pause");
	PCL;
}

void Hero::choice()
{
	cout << "请选择技能:" << endl;
	for (int i = 0; i < CRAFTS_NUM; i++)
	{
		if (crafts[i].available > level)
		{
			break;
		}
		//标志技能是否可用  【●】和【╳】
		string actionSignal = crafts[i].action == 0 ? "【●】" : "【╳】"; 
		cout << (i + 1) << ":" << crafts[i].name << actionSignal << endl;
	}
	int number;
	while (true)
	{
		cin >> number;
		iAttack = number - 1;
		//判断输入的技能是否可以用，并且英雄等级是否够用
		if (number>=1 && number<=8 && crafts[number-1].available<=level)
		{
			//1，判断技能是否正在冷却，冷却中不可用
			if (crafts[iAttack].action>0)
			{
				cout << "该技能正在冷却，请稍后使用"<<endl;
				cout << "请重新选择技能"<<endl;
				continue;
			}

			//2  判断英雄魔法值是否够用
			if (MP < crafts[iAttack].consumption)
			{
				cout << "魔法值不够" << endl;
				cout << "重新选择"<< endl;
				continue;
			}
			break;

		}
		else {
			cout << "输入错误，重新选择"<<endl;
		}
	}
	

	
}

void Hero::attack(Monster& monster)
{
	//释放技能要扣除相应的魔法值
	MP -= crafts[iAttack].consumption;
	//怪兽收到攻击，掉血
	monster.HP -= crafts[iAttack].ATK;
	//技能需要冷却，通过对cooling值进行标记，每轮结束action自动减1
	crafts[iAttack].action = crafts[iAttack].cooling + 1;
}

bool Hero::isAlive()
{
	return HP > 0;
}

void Hero::levelUp(int lv)
{
	cout << "==============恭喜升级=============="<<endl;
	level += lv;
}

void Hero::settlement()
{
	HP = (level - 1) * 500 + 2000;
	MP = (level - 1) * 10 + 50;
	for (int i = 0; i < CRAFTS_NUM; i++)
	{
		crafts[i].ATK = atks[i] * level;
	}
}