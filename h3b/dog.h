#ifndef DOG_H
#define DOG_H

#include "Animal.h"

class dog : public animal {
public:
    void callOut() override {
        std::cout << "Koira haukkuu!" << std::endl;
    }

    ~dog() override {
        std::cout << "Dog tuhottu" << std::endl;
    }

};

#endif
