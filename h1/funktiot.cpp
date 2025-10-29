#include "funktiot.h"
#include <iostream>
void calcSum(int a, int b)
{
    cout<<"\nLukujen summa on: "<<a+b<<endl;
}

void calcDiv(int a, int b)
{
    if (b == 0) {
        return;
    }
    cout << "Lukujen osamaara on: " << a / b << endl;
}

int retSum(int a, int b)
{
    return a + b;
}

float retDiv(int a, int b)
{
    if (b == 0) {
        throw runtime_error("jakaja ei saa olla nolla.");
    }
    float result = static_cast<float>(a) / b;
    // Tulostus suoraan retDiv:ssa
    cout << a << " / " << b << " = " << result << endl;
    return result;
}

