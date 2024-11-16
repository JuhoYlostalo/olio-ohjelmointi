#include "italianchef.h"

ItalianChef::ItalianChef(){
}

ItalianChef::~ItalianChef()
{
    cout<<"ItalianChef "<<name<<" destrukotori"<<endl;
}

ItalianChef::ItalianChef(string n) : Chef(n)
{
    cout<<"ItalianChef "<<name<<" konstruktori"<<endl;
}

string ItalianChef::getName()
{
    return name;
}

void ItalianChef::makePasta()
{
    cout<<"ItalianChef "<<name<<" makes pasta"<<endl;
}
