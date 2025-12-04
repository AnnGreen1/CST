#pragma once
				//#include "Hero.h"		视频里没有

//前置声明
class Hero;
class Monster
{
public:
	Monster(void);
	~Monster(void);

	string name;
	int level;
	int HP;
	int ATK;

	void initMonster(int);
	void attack(Hero&);
	bool isAlive();

};

