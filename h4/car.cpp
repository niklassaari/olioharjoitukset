#include "car.h"
#include <iostream>
using namespace std;

car::car(string b, string m)
    : brand(b), model(m)
{
}

void car::setBrand(string b)
{
    brand = b;
}

string car::getBrand() const
{
    return brand;
}

void car::setModel(string m)
{
    model = m;
}

string car::getModel() const
{
    return model;
}

engine& car::getEngine()
{
    return moottori;
}

wheel* car::getWheels()
{
    return renkaat;
}

void car::setEngine()
{
    moottori.setHorsepower(150);
    moottori.setDisplacement(2.0);
}

void car::setWheels()
{
    for (int i = 0; i < 4; i++)
    {
        renkaat[i].setSize(17);
        renkaat[i].setType("kesarengas");
    }
}

void car::printDetails() const
{
    cout << "Auto: " << brand << " " << model << endl;
    cout << "Moottori: " << moottori.getHorsepower()
         << " hv, " << moottori.getDisplacement() << " L" << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << "Rengas " << i+1 << ": "
             << renkaat[i].getSize() << "\" "
             << renkaat[i].getType() << endl;
    }
}
