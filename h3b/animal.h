#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>

using namespace std;

class Animal
{
public:
    virtual ~Animal();
    Animal();
    virtual void callOut();

};

#endif // ANIMAL_H
