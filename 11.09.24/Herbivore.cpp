#include "Herbivore.h"
#include <iostream>
#include <string.h>

using namespace std;

Herbivore::Herbivore()
{
	weight = 30;
}

Herbivore::Herbivore(int w)
{
	weight = w;
}

int Herbivore::GetWeight()
{
	return weight;
}

void Herbivore::KillHerb()
{
	life = "Dead";
}


void Herbivore::EatGrass()
{
	weight += 10;
}
