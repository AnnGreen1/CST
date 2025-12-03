#pragma once
#include"Craftsmanship.h"
					//#include"Monster.h"
//Ç°ÖÃÉùÃ÷
class Monster;
class Hero
{
public:
	Hero();
	~Hero();

	string name;
	int level;
	int HP;
	int MP;
	Craftsmanship crafts[NUM_CRAFTS];

	void initHero();
	void choice();
	void attack(Monster&);
	bool isAlive();
	void levelUp(int);
	void levelDown();
	//void available();		´íÎó
private:
	int iAttack;
	void settlement(int);

};

