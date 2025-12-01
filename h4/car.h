#ifndef CAR_H
#define CAR_H

#include <string>
#include "engine.h"
#include "wheel.h"
using namespace std;

class car
{
private:
    string model;
    string brand;

    engine moottori;
    wheel renkaat[4];

public:
    car(string, string);

    void setBrand(string);
    string getBrand() const;

    void setModel(string);
    string getModel() const;

    engine& getEngine();
    wheel* getWheels();

    void setEngine();   // asettaa hevosvoiman ja tilavuuden
    void setWheels();   // asettaa renkaiden koon ja tyypin (kesa talvi)

    void printDetails() const;
};

#endif
