// Example for lab5
// Variant 30
#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

int main() 
{
	setlocale(LC_ALL, "Russian");
	double x, y; /* координаты точки */
	/* ввод координат */
	printf("Введите координату x >");
	scanf("%lf", &x);
	printf("Введите координату y >");
	scanf("%lf", &y);
	/* вывод только что введенных значений */
	printf("x=%6.3lf;  y=%6.3lf\n", x, y);
	/* проверка условий */
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