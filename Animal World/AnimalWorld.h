#pragma once
#include<iostream>

#include "Continent.h"
#include "Africa.h"
#include "Continent.h"
#include "Africa.h"
#include "Gnuantelope.h"
#include "Predators.h"
#include "Lion.h"
#include "Bison.h"  
#include "NorthAmerica.h"

using namespace std;
class AnimalWorld
{
	Continent* Af;
	Continent* NAm;

public:
	AnimalWorld(Continent* A, Continent* B );


	void MealsHerb();
	void Nutritioncar();

};

