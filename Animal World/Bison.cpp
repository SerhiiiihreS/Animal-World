#include "Bison.h"   
#include<iostream>
using namespace std;


Bison::Bison(int weg, int lf):Herbivores(weg, lf)
{
	weight = weg;
	life = lf;
}

int Bison::Getweight()
{
	return weight;
}

int Bison::Getlife()
{
	return life;
}

void Bison::eatgrass()
{
	int weight1 = weight + 10;
	weight = weight1;
	cout << "The bison ate grass and gained weight->" << weight << endl; 
} 
