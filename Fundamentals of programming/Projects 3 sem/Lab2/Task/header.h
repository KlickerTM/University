#pragma once
#include <iostream>
#include <string.h>
#include <windows.h>

using namespace std;

#define SIZE 3

bool cheak_index(int INDEX);
void head();

class details
{
    string Surname;
    string code;
    int kol;
    double weight;

public:
    friend istream& operator>> (istream& in, details& temp);
    friend ostream& operator<< (ostream& out, const details& temp);
    void get(string* Surname, string* code, int* mesto, double* mark);
    void show(void);
    details operator=(const details& temp);
    bool operator==(const details& temp);
    void set(string Surname, string code, int mesto, double mark);
    details operator+(const details& temp);
};
