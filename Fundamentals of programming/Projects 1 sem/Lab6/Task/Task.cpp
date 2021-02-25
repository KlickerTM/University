// Task for lab6
// Variant 4
#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

#define eps 0.000001

int main()
{
	setlocale(LC_ALL, "Russian");
	long n;              /* параметр ряда */
	double dbln;         /* параметр ряда в форме с плавающей точкой */
	double sum = 0;      /* сумма членов ряда */
	double tmp;          /* значение текущего члена */
	short k1 = 1;        /* pow(-1,n)*/
	for (n = 0; ; k1 *= -1, n++)
	{
		dbln = n;
		tmp = k1 * (dbln * dbln + 1) / (dbln * dbln * dbln + 3);
		if (fabs(tmp) >= eps)
		{
			sum += tmp;
		}
		else break;
		if (n == 9)
		{
			printf("Сумма 10 членов ряда = %10.7lf\n", sum);
		}
	}
	printf("Полная сумма ряда = %10.7lf\n", sum);
	system("pause");
	return 0;
}
