#include "classa1.h"
#include "classb.h"
#include "classa2.h"
using namespace std;
#include <iostream>

ClassA2::ClassA2(ClassB &value):refB(value)
{
}

string ClassA2::getBinfo()
{
    return refB.getInfo();
}

void ClassA2::setBinfo(string value)
{
    refB.setInfo(value);
}
