#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"
#include <string>

class ItalianChef : public Chef {
public:
    ItalianChef(std::string name);
    std::string getName();
    void makePasta();
    ~ItalianChef();
};

#endif
