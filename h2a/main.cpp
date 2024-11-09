#include <iostream>
#include <memory>
#include "car.h"
#include "rectangle.h"
#include "student.h"
using namespace std;

int main()
{
    Car objCar;
    objCar.setBrand("Volvo");
    objCar.setModel("V70");
    objCar.setYearModel(2007);
    objCar.printData();

    Rectangle *objRectangle;
    objRectangle=new Rectangle;
    objRectangle->setHeight(1.5);
    objRectangle->setWidth(2.5);
    cout << "area is " << objRectangle->getArea() << " and circum is " << objRectangle->getCircum() << endl;
    delete objRectangle;
    objRectangle=nullptr;

    unique_ptr<Student> objStudent=make_unique<Student>();
    objStudent->setStudentNumber(10);
    objStudent->setName("Liisa");
    objStudent->setAverage(8.9);
    cout << "Students name is " << objStudent->getName() << ", students number is " << objStudent->getStudentNumber() << " and students average is " << objStudent->getAverage() << endl;


}
