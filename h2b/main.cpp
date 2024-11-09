#include <iostream>
#include <vector>
#include "car.h"
using namespace std;

int main()
{
    vector<Car> carList;
    Car objCar=Car("Volvo","V70",2007);
    Car objCar2=Car("Mazda","RX8",2008);
    Car objCar3=Car("BMW","M3",2009);

    carList.push_back(objCar);
    carList.push_back(objCar2);
    carList.push_back(objCar3);
    carList[1].printData();

    for (int i = 0; i < 3; i++){
        carList[i].printData();
    }
}
