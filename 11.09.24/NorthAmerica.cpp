#include "NorthAmerica.h"
#include<iostream>
using namespace std;

Herbivore NorthAmerica::CreateHerbivore(int n)
{
    Wildebeest a;
    a.CountWildebeest(n);
    return a;
}

Carnivore NorthAmerica::CreateCarnivore(int n)
{
    Wolf a;
    a.CountWolf(n);
    return a;
}
