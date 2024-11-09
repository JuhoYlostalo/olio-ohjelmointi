#include "car.h"

Car::Car() {}

Car::Car(string c1, string c2, int n1)
{
    brand = c1;
    model = c2;
    yearModel = n1;
}

void Car::printData()
{
    cout << "cars brand is " << brand << ", model is " << model << " and year model is " << yearModel << endl;
}
