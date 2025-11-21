#ifndef CHEF_H
#define CHEF_H
#include <iostream>
#include <string>

class Chef {
protected:
    std::string name;

public:
    Chef(std::string name);
    void makeSalad();
    void makeSoup();
    ~Chef();
};

#endif
