#include "Carnivore.h"
#include <iostream>
using namespace std;

void Carnivore::Eat(Herbivore obj)
{
	if (this->power > obj.GetWeight())
	{
		power += 10;
	}
	else
	{
		power -= 10;
	}
	obj.KillHerb();
}

Carnivore::Carnivore()
{
	power = 100;
}

Carnivore::Carnivore(int p)
{
	power = p;
}
