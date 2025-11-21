#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
class animal
{
public:
    virtual void callOut();

    virtual ~animal() {
        std::cout << "Animal tuhottu" << std::endl;
    }
};

#endif
