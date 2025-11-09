#include "student.h"
#include <iostream>
using namespace std;

string Student::getName() const
{
    cout<<"\n-- OPISKELIJA TIEDOT --"<<endl;
    cout<<"Opiskelijan nimi: "<<name<<endl;
    return name;
}

void Student::setName(const string &newName)
{
    name = newName;
}

int Student::getStudentNumber() const
{
    cout<<"Opiskelijanumero: "<<studentNumber<<endl;
    return studentNumber;
}

void Student::setStudentNumber(int newStudentNumber)
{
    studentNumber = newStudentNumber;
}

double Student::getAverage() const
{
    cout<<"Keskiarvo: "<<average<<endl;
    return average;
}

void Student::setAverage(double newAverage)
{
    average = newAverage;
}

Student::Student() {}
