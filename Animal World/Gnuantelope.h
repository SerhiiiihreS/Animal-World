#pragma once
#include "Herbivores.h"
class Gnuantelope :public Herbivores
{
	int weight;
	int life;
public:
	Gnuantelope(int weg, int lf);

	int Getweight();
	int Getlife();
    void eatgrass();
};

