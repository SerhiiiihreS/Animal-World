#include<iostream>

#include "AnimalWorld.h"
#include "Continent.h"
#include "Africa.h"
#include "Gnuantelope.h"
#include "Predators.h"
#include "Lion.h"
#include "Bison.h"  
#include "NorthAmerica.h"
using namespace std;

AnimalWorld::AnimalWorld(Continent* A, Continent* B)
{
	Af = A;
	NAm = B;
}

void AnimalWorld::MealsHerb()
{
	Af->eatPrey();
	NAm->eatPrey(); 
}

void AnimalWorld::Nutritioncar()
{
	Af->eatHerb(); 
	NAm->eatHerb(); 
}
