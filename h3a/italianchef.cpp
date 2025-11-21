#include "italianchef.h"
#include <iostream>

ItalianChef::ItalianChef(std::string name)
    : Chef(name)
{
    std::cout << "ItalianChef " << name << " konstruktori\n";
}

std::string ItalianChef::getName() {
    return name;
}

void ItalianChef::makePasta() {
    std::cout << "ItalianChef " << name << " makes pasta\n";
}

ItalianChef::~ItalianChef() {
    std::cout << "ItalianChef " << name << " destruktori\n";
}
