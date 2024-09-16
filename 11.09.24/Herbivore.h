#pragma once
#include"Bison.h";
#include"Wildebeest.h"
class Herbivore
{
protected:
	int weight;
	string life = "Alive";
public:
	Herbivore();
	Herbivore(int w);
	int GetWeight();
	void KillHerb();
	virtual void EatGrass();
};

