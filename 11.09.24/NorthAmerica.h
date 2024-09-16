#pragma once
#include "Continent.h"
#include "Herbivore.h"
#include"Carnivore.h"
class NorthAmerica
{
public:
	Herbivore CreateHerbivore(int n);
	Carnivore CreateCarnivore(int n);
};

