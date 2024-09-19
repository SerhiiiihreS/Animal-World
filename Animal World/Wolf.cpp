#include "Wolf.h"
#include<iostream>

using namespace std;


Wolf::Wolf(int pow) :Predators(pow)
{
    power = pow;
}

int Wolf::Getpower() const
{
    return power;
}

void Wolf::Eat(int wgt)
{
    if (wgt > power) {
        int power1 = power - 10;
        power = power1;
        cout << "The wolf is hungry, he lost weight->" << power << endl;
    }
    else if (wgt < power) {
        int power1 = power + 10;
        power = power1;
        cout << "The wolf ate the herbivore, he gained strength->" << power << endl;
    }
}