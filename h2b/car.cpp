#include "car.h"
#include <iostream>

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;

}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

void Car::setYear(int newYear)
{
    year = newYear;
}

Car::Car() {}

Car::Car(string brand, string model, int year)
{
    this->brand=brand;
    this->model=model;
    this->year=year;
}

void Car::printData()
{
    cout<<"-- AUTON TIEDOT -- "<<endl;
    cout<<"Merkki: "<<this->brand<<endl;
    cout<<"Malli: "<<this->model<<endl;
    cout<<"Vuosimalli: "<<this->year<<endl;
    cout<<"******************"<<endl;

}

Car::~Car()
{
    //cout<<"\nCar Olio tuhottiin!"<<endl;
}
