#include "NorthAmerica.h"
#include<iostream>
#include "Continent.h"
#include "Predators.h"
#include "Herbivores.h"
#include "Gnuantelope.h"
#include "Continent.h"
using namespace std;

NorthAmerica::NorthAmerica(Predators* Wf, Herbivores* Bs) :Continent()
{
	Wlf = Wf;
	Bis = Bs;
}


void NorthAmerica::eatPrey()
{
	int Wg = Bis->Getweight();
	Wlf->Eat(Wg);
}

void NorthAmerica::eatHerb()
{
	Bis->eatgrass();
}