#pragma once
#include "Hero.h"
#include "Monster.h"
class Scenario
{
public:
	Scenario();
	~Scenario();

	Hero myHero;
	Monster myMonster;
	bool state;//”Œœ∑ «∑ÒΩ· ¯
	int round;

	void initScenario();
	int choice();
	bool challenge();
	void showInfo(int, Hero, Monster);
	void showInfo(string, Hero, Monster);
};

