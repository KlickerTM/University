#pragma once

//#define  _FOO_H_
#ifndef _FOO_H_

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <string>
#include <stdio.h>
#include <windows.h>

using namespace std;

class Details
{
	string name;
	char tipe;
	unsigned int kol;
	float weight;
public:
	void set(string a, char b, unsigned int c, float d);
	void get(string a, char& b, unsigned int& c, float& d);
	void show(void);
};

void Details::set(string a, char b, unsigned int c, float d)
{
	name = a;
	tipe = b;
	kol = c;
	weight = d;
}

void Details::get(string a, char& b, unsigned int& c, float& d)
{
	a = name;
	b = tipe;
	c = kol;
	d = weight;
}

void Details::show(void)
{
	cout << name << " " << tipe << " " << kol << " " << weight << endl;
}
#endif