#pragma once
//前置声明
class Hero;
class Monster
{
public:
	Monster();
	~Monster();


	string name;
	int level;
	int HP;
	int ATK;

	//五个怪兽名称
	//static string monsterNames[5]={ "巴尔坦虫怪", "格斯安鱼怪", "泰斯鸟怪", "绿头猿怪", "赤龙怪（BOSS)" };
	//static int monsterLevels[5] = { 1,5,10,30,50 };
	//根据玩家需要初始化
	void initMonster(int);
	//攻击英雄 要传入英雄的引用  英雄掉血
	void attack(Hero&);
	//怪兽是否存活  生命值0即死亡
	bool isAlive();


};

