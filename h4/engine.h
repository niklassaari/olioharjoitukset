#ifndef ENGINE_H
#define ENGINE_H
#include <iostream>
using namespace std;

class engine
{
private:
    int hevosvoima;
    double tilavuus;

public:
    engine(int hv = 0, double disp = 0.0);

    int horsepower();
    double displacement();

   int getHorsepower() const;
    void setHorsepower(int);

   double getDisplacement() const;
    void setDisplacement(double);
};

#endif // ENGINE_H
