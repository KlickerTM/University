// Task for lab5
// Variant 4
#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	//y = x; y = -x; y = 1; y = -1;
	setlocale(LC_ALL, "Russian");
	double x, y;
	printf("Введите координату x >");
	scanf("%lf", &x);
	printf("Введите координату y >");
	scanf("%lf", &y);
	printf("x=%6.3lf;  y=%6.3lf\n", x, y);
	if ((y >= x) && (y >= -x) && (y <= 1) || (y <= x) && (y <= -x) && (y >= -1))
	{
		printf("Точка попадает в область\n");
	}
	else
	{
		printf("Точка не попадает в область\n");
	}
	system("pause");
	return 0;
}

