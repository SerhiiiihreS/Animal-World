#pragma once
#include "Predators.h"
class Wolf :public Predators
{
	int power;
public:
	Wolf(int pow);
	int Getpower()const;

	void Eat(int wgt);
};

