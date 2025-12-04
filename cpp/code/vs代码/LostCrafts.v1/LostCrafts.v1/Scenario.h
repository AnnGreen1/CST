#pragma once
#include "Hero.h"
#include "Monster.h"
//场景类
class Scenario
{
public:
	Scenario();
	~Scenario();

	Hero myHero;
	Monster myMonster;
	//游戏是否结束  游戏状态
	bool state;
	//战斗轮数
	int round;


	//初始化场景
	void initScenario();
	//玩家需要挑战的怪兽
	int choice();
	//英雄与怪兽之间该副本的挑战，通关或英雄死亡为false,除此之外为true		包含第1论。。。。。
	bool challenge();
	//显示每轮挑战的信息
	void showInfo();
	//每次攻击后的战斗信息
	void showInfo(string name);

private:
	//展示英雄、怪兽信息的公共部分 
	void showHeroAndMonster();
};

