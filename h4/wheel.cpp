#include "wheel.h"

wheel::wheel(int k, string t)
{
    koko = k;
    tyyppi = t;
}

int wheel::size()
{
    return koko;
}

string wheel::type()
{
    return tyyppi;
}

int wheel::getSize() const
{
    return koko;
}

void wheel::setSize(int k)
{
    koko = k;
}

string wheel::getType() const
{
    return tyyppi;
}

void wheel::setType(string t)
{
    tyyppi = t;
}
