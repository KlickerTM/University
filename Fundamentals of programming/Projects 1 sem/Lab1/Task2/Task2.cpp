// Task2 of lab1

#include "stdafx.h"
#include <math.h>
using namespace std;

int main()
{
	int a, b, c;
	a = 4;
	b = 7;
	c = 9;
	int p = (a + b + c) / 2;
	long int S = sqrt(p*(p - a)*(p - b)*(p - c));
	return 0;
}

