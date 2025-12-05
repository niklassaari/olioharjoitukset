#ifndef CLASSB_H
#define CLASSB_H
using namespace std;
#include <iostream>

class ClassB
{
private:
    string info;

public:
    ClassB();
    string getInfo() const;
    void setInfo(const string &newInfo);
};

#endif
