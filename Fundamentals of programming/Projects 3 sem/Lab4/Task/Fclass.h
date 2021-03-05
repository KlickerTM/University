#pragma once
#include "Header.h"


class detail
{
private:
    string Surname;
    string code;
    int kol;
    double weight;
public:
    detail(string, string, int, double);
    void get(string*, string*, int*, double*);
    void set(string, string, int, double);
    void show();
    friend istream& operator>> (istream&, detail&);
    friend ostream& operator<< (ostream&, const detail&);
    detail operator=(const detail&);
    bool operator==(const detail&);
    detail operator+(const detail&);
    detail() {};
    string name();
};

class BASE
{
private:
    string title_DATA_BASE;
    detail* details[12];
    int col;
    int sorted;
public:
    BASE(string);
    ~BASE();
    void del();
    void insert(string, string, int, double);
    void view(void);
    void sort();
    bool SORT_FUNC(string s1, string s2);
};
