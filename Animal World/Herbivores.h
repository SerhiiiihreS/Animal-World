#pragma once
class Herbivores
{
	int weight;
	int life;
public:
	Herbivores(int weg);
	Herbivores(int weg,int lf);
	virtual int Getweight();
	virtual int Getlife();
	virtual void eatgrass();

};

