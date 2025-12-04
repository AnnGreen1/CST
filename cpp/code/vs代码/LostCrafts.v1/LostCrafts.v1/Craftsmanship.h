#pragma once

//技能类
class Craftsmanship
{
public:
	//技能名称
	string name;
	//技能消耗魔法值
	int consumption;
	//技能攻击力
	int ATK;
	//技能冷却时间   CD回合
	int cooling;
	//技能所需英雄等级
	int available;

	int action;












	Craftsmanship();
	~Craftsmanship();
};

