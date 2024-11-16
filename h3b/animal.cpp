#include "animal.h"

Animal::~Animal()
{
    cout<<"animal destruktori"<<endl;
}

Animal::Animal() {}

void Animal::callOut()
{
    cout<<"Elain aantelee"<<endl;
}
