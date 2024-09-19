#pragma once
class Predators
{
	int power;
public:
	Predators(int pow);
	virtual int Getpower()const;
	virtual void Eat(int wg);
};

