#include "engine.h"

engine::engine(int hv, double disp)
{
    hevosvoima = hv;
    tilavuus = disp;
}

int engine::horsepower()
{
    return hevosvoima;
}

double engine::displacement()
{
    return tilavuus;
}

int engine::getHorsepower() const
{
    return hevosvoima;
}


void engine::setHorsepower(int hv)
{
    hevosvoima = hv;
}

double engine::getDisplacement() const
{
    return tilavuus;
}

void engine::setDisplacement(double disp)
{
    tilavuus = disp;
}
