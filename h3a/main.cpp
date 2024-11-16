#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    Chef objectChef("Gordon Ramsey");
    ItalianChef objectItalianChef("Anthony Bourdain");
    objectChef.makeSalad();
    objectChef.makeSoup();
    objectItalianChef.makePasta();
    cout<<"name of the Italian Chef is " << objectItalianChef.getName() << endl;
}
