#include "comp.h"

COMP::COMP(double a, double b)
{
    this->num = to_string(a) + "+" + to_string(b) + "*sqrt(-1)";
}

void COMP::to_complex(double a, double b)
{
    this->num = to_string(a) + "+" + to_string(b) + "*sqrt(-1)";
}

void COMP::OUT()
{
    cout << this->num << endl;
}