// Example_without_input for lab5
// Variant 30
#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double x = 0.4, y = 0.4;
	printf("x=%6.3lf;  y=%6.3lf\n", x, y);
	if ((y >= 1 - x) && (x*x + y * y <= 1))
	{
		printf("Точка попадает в область\n");
	}
	else
	{
		printf("Точка не попадает в область\n");
	}
	x = 0.5, y = 0.5;
	printf("x=%6.3lf;  y=%6.3lf\n", x, y);
	if ((y >= 1 - x) && (x*x + y * y <= 1))
	{
		printf("Точка попадает в область\n");
	}
	else
	{
		printf("Точка не попадает в область\n");
	}
	x = 0.7, y = 0.6;
	printf("x=%6.3lf;  y=%6.3lf\n", x, y);
	if ((y >= 1 - x) && (x*x + y * y <= 1))
	{
		printf("Точка попадает в область\n");
	}
	else
	{
		printf("Точка не попадает в область\n");
	}
	x = 0.707, y = 0.707;
	printf("x=%6.3lf;  y=%6.3lf\n", x, y);
	if ((y >= 1 - x) && (x*x + y * y <= 1))
	{
		printf("Точка попадает в область\n");
	}
	else
	{
		printf("Точка не попадает в область\n");
	}
	x = 0.8, y = 0.8;
	printf("x=%6.3lf;  y=%6.3lf\n", x, y);
	if ((y >= 1 - x) && (x*x + y * y <= 1))
	{
		printf("Точка попадает в область\n");
	}
	else
	{
		printf("Точка не попадает в область\n");
	}
	x = 1.0, y = 0.0;
	printf("x=%6.3lf;  y=%6.3lf\n", x, y);
	if ((y >= 1 - x) && (x*x + y * y <= 1))
	{
		printf("Точка попадает в область\n");
	}
	else
	{
		printf("Точка не попадает в область\n");
	}
	x = 0.0, y = 1.0;
	printf("x=%6.3lf;  y=%6.3lf\n", x, y);
	if ((y >= 1 - x) && (x*x + y * y <= 1))
	{
		printf("Точка попадает в область\n");
	}
	else
	{
		printf("Точка не попадает в область\n");
	}
	x = -1.0, y = 0.0;
	printf("x=%6.3lf;  y=%6.3lf\n", x, y);
	if ((y >= 1 - x) && (x*x + y * y <= 1))
	{
		printf("Точка попадает в область\n");
	}
	else
	{
		printf("Точка не попадает в область\n");
	}
	x = 0.0, y = -1.0;
	printf("x=%6.3lf;  y=%6.3lf\n", x, y);
	if ((y >= 1 - x) && (x*x + y * y <= 1))
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