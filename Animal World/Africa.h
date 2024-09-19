#pragma once
#include "Continent.h"
#include "Lion.h"
#include "Gnuantelope.h"
#include "Wolf.h"

class Africa : public Continent
{
	Herbivores* Gnu = new Gnuantelope(350, 1); 
	Predators* Leo = new Lion(250); 
public:
	Africa(Predators* Ln, Herbivores* Gnu);
	void eat();
};

