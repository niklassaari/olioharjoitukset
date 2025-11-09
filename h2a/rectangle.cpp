#include "rectangle.h"
#include <iostream>
using namespace std;

void Rectangle::setWidth(double newWidth)
{
    width = newWidth;
}

void Rectangle::setHeight(double newHeight)
{
    height = newHeight;
}

void Rectangle::muuttujat()
{
    cout<<"\n-- RECTANGLE TIEDOT --"<<endl;
    cout<<"Width: "<<width <<"\nHeight: "<<height << endl;
}

void Rectangle::getArea()
{
    cout<<"\nPinta-ala: "<<width * height<<endl;
}

void Rectangle::getCircum()
{
    cout<<"Ymparysmitta: "<<2 * (width + height)<<endl;
}

Rectangle::Rectangle() {}

Rectangle::~Rectangle() {
    cout << "\nRectangle Olio tuhottiin!" << endl;
}
