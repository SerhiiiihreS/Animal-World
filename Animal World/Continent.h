#pragma once
#include<iostream>
using namespace std;

#include "Predators.h"
#include "Herbivores.h"

class Continent
{
	Predators *prey;
	Herbivores *her;
public:
	Continent() = default;
	Continent(Predators p, Herbivores h);
	virtual void eatPrey();
	virtual void eatHerb();
};



