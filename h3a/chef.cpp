#include "chef.h"

Chef::Chef(){

}

Chef::Chef(string n)
{
    name=n;
    cout<<"Chef "<<name<<" konstruktori"<<endl;
}

Chef::~Chef()
{
    cout<<"Chef "<<name<<" destruktori"<<endl;
}

void Chef::makeSalad()
{
    cout<<"Chef "<<name<<" makes a salad"<<endl;
}

void Chef::makeSoup()
{
    cout<<"Chef "<<name<<" makes a soup"<<endl;
}
