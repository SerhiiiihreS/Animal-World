#include<iostream>
#include "Continent.h"
#include "Africa.h"
#include "Gnuantelope.h"
#include "Predators.h"
#include "Lion.h"
#include "Bison.h"  
#include "NorthAmerica.h"
#include "AnimalWorld.h"

using namespace std;


int main() {
	Herbivores* Gnu = new Gnuantelope(150, 1);
	Predators* Leo = new Lion(350);
	Continent* Afr = new Africa(Leo, Gnu);

	Herbivores* Bis = new Bison(450, 1);
	Predators* Wlf = new Wolf(200);
	Continent* NAmr = new NorthAmerica(Wlf, Bis);

	AnimalWorld Eva(Afr, NAmr);
	Eva.MealsHerb();
	Eva.Nutritioncar();
	Eva.MealsHerb();
	Eva.Nutritioncar();
	Eva.Nutritioncar();
}