#include "classa1.h"
#include "classb.h"
#include "classa2.h"
using namespace std;
#include <iostream>

ClassB::ClassB() {
    info = "";
}

string ClassB::getInfo() const {
    return info;
}

void ClassB::setInfo(const string &newInfo) {
    info = newInfo;
}
