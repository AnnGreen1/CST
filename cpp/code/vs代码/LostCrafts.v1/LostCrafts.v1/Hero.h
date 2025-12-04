#pragma once
#include"Craftsmanship.h"
//前置声明
class Monster;
//英雄
class Hero
{
public:
	Hero();
	~Hero();




	string name;
	int level;
	int HP;
	int MP;
	Craftsmanship crafts[CRAFTS_NUM];

	void initHero();
	void choice();
	void attack(Monster& mon);
	bool isAlive();
	void levelUp(int);
	void levelDown();
	
private:
	int iAttack;
	//根据英雄状态结算
	void settlement();

















};

