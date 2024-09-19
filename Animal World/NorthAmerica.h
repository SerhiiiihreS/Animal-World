#pragma once
#include "Continent.h"
#include "Bison.h"  
#include "Wolf.h"

class NorthAmerica :public Continent
{
	Herbivores* Bis = new Bison(450, 1);
	Predators* Wlf = new Wolf(250);
public:
	NorthAmerica(Predators* Bs, Herbivores* Wf);
	void eatPrey();
	void eatHerb();
};

