// Example for lab3
// Variant 30
#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double x, y;
	double a = 12.5, b = 1.3;
	double c = 14.1, d = 2.7;
	double t1, t2; //Результаты
	double ax; //Промежуточная переменная
	printf("Введите x, y >");
	scanf("%lf %lf", &x, &y);
	ax = a * x;
	t1 = (b * log(ax + b) / a + d * log(y * x + d) / y) / c;
	ax = sqrt((c - b)*(c + b))*tan(ax);
	t2 = log((ax + 2) / (ax - 2)) / 2 / a / b;
	printf("t1 = %lg\n", t1); printf("t2 = %lg\n", t2);
	system("pause");
    return 0;
}

