#include "stdafx.h"
#include "Monster.h"
#include "Hero.h"

Monster::Monster()
{
}


Monster::~Monster()
{
}


void Monster::initMonster(int optional) {
	 string monsternames[5]={ "°Í¶ûÌ¹³æ¹Ö", "¸ñË¹°²Óã¹Ö", "Ì©Ë¹Äñ¹Ö", "ÂÌÍ·Ô³¹Ö", "³àÁú¹Ö£¨BOSS)" };
	 int monsterlevels[5] = { 1,5,10,30,50 };
	 int hps[5] = { 100,500,1000,2000,5000 };
	 int atks[5] = { 50,100,200,500,1000 };

	 name = monsternames[optional];
	 level = monsterlevels[optional];
	 HP = hps[optional];
	 ATK = atks[optional];

}

void Monster::attack(Hero &hero)
{
	hero.HP -= ATK;
}

bool Monster::isAlive()
{
	return HP > 0;
}