#pragma once
#include "Predators.h"

class Lion : public Predators
{
	int power;
public:
	Lion(int pow);
	int Getpower()const;

	void Eat(int wgt) ;
};

