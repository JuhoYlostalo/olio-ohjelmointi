#include "dog.h"

Dog::~Dog()
{
    cout<<"Dog destruktori"<<endl;
}

Dog::Dog() {}

void Dog::callOut()
{
    cout<<"Koira haukkuu!"<<endl;
}
