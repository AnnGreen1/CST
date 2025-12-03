#include "stdafx.h"
#include "Hero.h"
//#include "Monster.h"
//#include <iostream>
//#include "Craftsmanship.h"

Hero::Hero(void)
{
}


Hero::~Hero(void)
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
	string craftsnames[NUM_CRAFTS] = { "普通击打","寒冰掌","石破惊雷","赤火焰烧","月蚀镰刀","圣光冲击","天师灵助","天威庇佑" };
	int availables[NUM_CRAFTS] = { 1,2,5,10,20,30,35,45 };
	int mps[NUM_CRAFTS] = { 0,5,10,20,40,60,80,100 };
	int atks[NUM_CRAFTS]={ 10,12,15,18,20,22,25,30 };
	int cooling[NUM_CRAFTS] = { 0,1,3,3,4,4,5,5 };
	for (int i = 0; i != NUM_CRAFTS; i++)
	{
		crafts[i].name = craftsnames[i];
		crafts[i].available = availables[i];
		crafts[i].consumption = mps[i];
		crafts[i].ATK= atks[i]*level;
		crafts[i].cooling = atks[i]*level;
		crafts[i].action = 0;
	}
	cout << "英雄：" << name<< "初始化成功！" << endl;
	PC;

}
//问题出在这里，刚开始怎么展示技能的问题
//1,展示可选技能，
void Hero::choice()
{
	cout << "请选择技能" << endl;
	//展示可选技能
	for (int i = 0; i != NUM_CRAFTS; i++)
	{
		if (crafts[i].available <= level+1)//因为初始技能只能选一个，加了1
		{
			cout << i + 1 << ";" << crafts[i].name << "【" << (crafts[i].action == 0 ? "●" : "╳") << "】" << endl;

		}
	}
		do
		{ 
			int attack;
			cin >> attack;
			if (attack > 0 && attack<=NUM_CRAFTS   &&    crafts[attack-1].available<=level)//技能序号一定大于零 ，一定在技能类里面，等级一定够高才能用该技能
			{
				if (crafts[attack - 1].action)
				{
					cout << "该技能正在冷却，请稍后使用！" << endl;
					cout << "请重新选择技能：" << endl;
					continue;
				}
				if (MP - crafts[attack - 1].consumption < 0)
				{
					cout << "魔法值不足，请选择其他方式攻击！" << endl;
					cout << "请重新选择技能：" << endl;
					continue;
				}
				iAttack = attack - 1;
				return;

			}
		} while (true);
}
bool Hero::isAlive()
{
	return HP > 0;
}

void Hero::levelUp(int up)
{
	cout << "=========恭喜升级！========="<<endl;
	level += up;
	settlement(level);
	PC;
}
//降级
void Hero::levelDown()
{
	cout << "=========可恶，降级了！==========="<<endl;
	level--;
	settlement(level);
	PC;
}
//结算
void Hero::settlement(int level)
{
	HP = 2000 + (level - 1) * 500;
	MP = 50 + (level - 1) * 10;
	int atks[NUM_CRAFTS] = { 10,12,15,18,20,22,25,30 };
	for (int i = 0; i != NUM_CRAFTS; i++)
	{
		crafts[i].ATK = atks[i] * level;
		crafts[i].action = 0;
	}
}


void Hero::attack(Monster& mon)
{
	mon.HP -= crafts[iAttack].ATK;
	MP -= crafts[iAttack].consumption;
	crafts[iAttack].action = crafts[iAttack].cooling + 1;
}








