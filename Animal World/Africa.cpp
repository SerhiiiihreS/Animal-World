#include "Africa.h"
#include<iostream>
#include "Continent.h"
#include "Predators.h"
#include "Herbivores.h"
#include "Gnuantelope.h"
#include "Continent.h"
using namespace std;

Africa::Africa(Predators* Le, Herbivores* Gn):Continent()
{
	 Gnu = Gn; 
	 Leo = Le; 
}

void Africa::eat()
{
	int Wg = Gnu->Getweight(); 
	Leo->Eat(Wg); 
	Gnu->eatgrass(); 
}



