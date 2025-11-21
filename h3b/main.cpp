#include "animal.h"
#include "dog.h"
#include <iostream>

int main() {
    std::cout << "Luodaan animal:" << std::endl;
    animal* a1 = new animal();
    a1->callOut();
    delete a1;

    std::cout << "\nLuodaan dog:" << std::endl;
    animal* d1 = new dog();
    d1->callOut();
    delete d1;

    return 0;
}
