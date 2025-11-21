#include <iostream>

using namespace std;

#include "chef.h"
#include "italianchef.h"

int main() {

    Chef chef("Gordon Ramsay");
    chef.makeSalad();
    chef.makeSoup();

    std::cout << "\n";

    ItalianChef italianChef("Anthony Bourdain");

    italianChef.makeSalad();    // peritty
    italianChef.makeSoup();     // peritty
    italianChef.makePasta();    // ItalianChef oma metodi

    std::cout << "name of the Italian Chef is "
              << italianChef.getName() << "\n";

    return 0;
}
