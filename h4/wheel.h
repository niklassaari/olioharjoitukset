#ifndef WHEEL_H
#define WHEEL_H
#include <iostream>
using namespace std;

class wheel
{
private:
    int koko;
    string tyyppi;

public:
    wheel(int k = 0, string t = "");

    int size();
    string type();

    int getSize() const;
    void setSize(int);

    string getType() const;
    void setType(string);
};

#endif // WHEEL_H
