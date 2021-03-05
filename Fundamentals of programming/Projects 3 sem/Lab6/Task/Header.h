#pragma once

#define SIZE 5

#include <iostream>
#include <string>
#include <string.h>
using namespace std;

class fabric
{
    string Name;
    int code;
    int mark;
    double weight;
public:
    friend void sort(fabric*);
    friend void ShowAllFabric(fabric*);
    void redo(string&, int&, int&, double&);
    void show();
    fabric();
    fabric(string, int, int, double);
};

void ShowAllFabric(fabric*);
void sort(fabric*);
