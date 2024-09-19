#include "Gnuantelope.h"
#include "Herbivores.h"
#include<iostream>
using namespace std;

Gnuantelope::Gnuantelope(int weg, int lf):Herbivores(weg, lf)
{
	weight = weg;
	life = lf;
}


int Gnuantelope::Getweight()
{
	return weight;
}

int Gnuantelope::Getlife()
{
	return life;
}

void Gnuantelope::eatgrass()
{
   int weight1= weight+10;
   weight = weight1;
   cout << "The antilopagnu ate the grass and gained weight->" << weight << endl;
}
