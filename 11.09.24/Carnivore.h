#pragma once
#include "Herbivore.h"
#include"Lion.h"
#include"Wolf.h"
class Carnivore
{
protected:
	int power;
public:
	Carnivore();
	Carnivore(int p);
	virtual void Eat(Herbivore obj);
};

