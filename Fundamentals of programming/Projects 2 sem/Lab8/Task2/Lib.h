#pragma once

#include <iostream>
#include <string>

using namespace std;

struct List
{
	string name;
	unsigned int kol;
	double time1;
	double time2;
	struct List* Next;
};