#include "Lion.h"
#include<iostream>

using namespace std;


Lion::Lion(int pow):Predators(pow)
{
    power = pow;
}

int Lion::Getpower() const
{
    return power;
}

void Lion::Eat(int wgt)
{
    if (wgt > power) {
       int power1 =power -10;
       power = power1;
       cout << "The lion is hungry, he lost strength->" << power << endl;

    }
    else if (wgt < power) {
        int power1 = power + 10;   
        power = power1; 
        cout << "The lion ate a herbivore, he gained strength->" << power << endl; 
    }
}
