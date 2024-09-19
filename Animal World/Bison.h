#pragma once
#include "Herbivores.h"
class Bison : public Herbivores
{
	int weight;
	int life;
public:
	Bison(int weg, int lf);
	int Getweight();
	int Getlife();
	void eatgrass();
}; 

