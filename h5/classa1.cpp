#include "classa1.h"
#include "classb.h"
#include "classa2.h"
using namespace std;
#include <iostream>

ClassA1::ClassA1(const ClassB& b):objectB(b)
{
}

string ClassA1::getBinfo()
{
    return objectB.getInfo();
}

void ClassA1::setBinfo(string info)
{
    objectB.setInfo(info);
}
