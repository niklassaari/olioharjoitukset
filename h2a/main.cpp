#include "car.h"
#include "rectangle.h"
#include "student.h"
#include <iostream>
#include <memory>
using namespace std;

int main()
{

    Car Car1;

        // Car
    Car1.setBrand("Bentley");
    Car1.setModel("Bentayga");
    Car1.setYear(1969);

    Car1.printData();


        // Rectangle
    Rectangle* rectngl = new Rectangle();
    rectngl->setWidth(20);
    rectngl->setHeight(10);

    rectngl->muuttujat();
    rectngl->getArea();
    rectngl->getCircum();

     delete rectngl;


        // Student
     unique_ptr<Student> student = make_unique<Student>();

     student->setName("Unelma Sirpa-Leena");
     student->setStudentNumber(42069);
     student->setAverage(8.2);

     student->getName();
     student->getStudentNumber();
     student->getAverage();




    return 0;
}
