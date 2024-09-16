#include "Africa.h"

Herbivore Africa::CreateHerbivore(int n)
{
    Bison a;
    a.CountBison(n);
    return a;
}

Carnivore Africa::CreateCarnivore(int n)
{
    Lion a;
    a.CountLion(n);
    return Carnivore();
}
