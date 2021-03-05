//#define HEADER_H
#ifndef HEADER_H

#include <string>
#include <iostream>
#include <fstream>

using namespace std;

class COMP
{
private:
    string num;
public:
    COMP(double a, double b);
    COMP() {}
    void OUT();
    void to_complex(double a, double b);
};
#endif