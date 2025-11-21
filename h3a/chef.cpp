#include "chef.h"
#include <iostream>

Chef::Chef(std::string name) : name(name) {
    std::cout << "Chef " << name << " konstruktori\n";
}

void Chef::makeSalad() {
    std::cout << "Chef " << name << " makes salad\n";
}

void Chef::makeSoup() {
    std::cout << "Chef " << name << " makes soup\n";
}

Chef::~Chef() {
    std::cout << "Chef " << name << " destruktori\n";
}
