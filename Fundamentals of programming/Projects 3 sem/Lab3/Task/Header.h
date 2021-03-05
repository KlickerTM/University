#pragma once

#include <iostream>

using namespace std;

class B1
{
private:
    int a;
public:
    B1(int a) { this->a = a; };
    void show_B1(void) { cout << "B1 = " << this->a << ". "; }
};

class B2
{
private:
    int b;
public:
    B2(int b) { this->b = b; };
    void show_B2(void) { cout << "B2 = " << this->b << ". "; }
};

class D1 : public B1, private B2
{
private:
    int c;
public:
    D1(int a, int b, int c) : B1(a), B2(b) { this->c = c; }
    void show_D1(void) { cout << "D1 = " << this->c << ". "; show_B1(); show_B2(); }
};

class D2 : private D1
{
private:
    int d;
public:
    D2(int a, int b, int c, int d) : D1(a, b, c) { this->d = d; }
    void show_D2(void) { cout << "D2 = " << this->d << ". "; show_D1(); }
};

class D3 : public D2
{
private:
    int e;
public:
    D3(int a, int b, int c, int d, int e) : D2(a, b, c, d) { this->e = e; }
    void show_D3(void) { cout << "D3 = " << this->e << ". "; show_D2(); }
};