#include <iostream>
#include "funktiot.h"
using namespace std;

int a;
int b;

int main()
{

    cout << "\nAnna luku: ";
    cin >> a;
    cout << "Annoit luvun: " << a;


    cout << "\nAnna toinen luku: ";
    cin >> b;
    cout << "Annoit luvun: " << b;

    calcSum(a,b);
    calcDiv(a,b);

    retSum(a,b);

try {
    retDiv(a,b);
} catch (std::runtime_error& e) {
    cout<<"Error: "<< e.what()<< endl;
}

return 0;
}

/*
Pistin retDivin tulostamaan osamäärän, koska en saanut calcDiv funktiota
tulostamaan nollaa tai "jakaja ei saa olla negatiivinen." erroria kunnolla.
Todennäköisesti poikkeaa hieman tehtävänannosta mutta sentään toimii :)
*/
