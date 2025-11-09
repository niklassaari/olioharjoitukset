#ifndef CAR_H
#define CAR_H
#include <iostream>
using namespace std;

class Car
{
private:
    string brand;
    string model;
    int year;


public:
    Car();
    Car(string, string, int);
    void printData();
    ~Car();


    string getBrand() const;
    void setBrand(const string &newBrand);

    string getModel() const;
    void setModel(const string &newModel);

    int getYear() const;
    void setYear(int newYear);
};

#endif // CAR_H
