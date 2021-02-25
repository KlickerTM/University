// Task_with_check for lab6
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
	double tmp;         /* значение текущего члена */
	short k1 = 1;        /* pow(-1,n)*/
	double tmp1, tmp2; /* временные переменные */
	for (n = 0; ; k1 *= -1, n++)
	{
		dbln = n;
		tmp1 = dbln * dbln + 1;
		tmp2 = dbln * dbln * dbln + 3;
		tmp1 = tmp1 / tmp2;
		tmp = k1 * tmp1;
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
	printf("n = %ld, tmp = %10.7lf\n", n, tmp);
	system("pause");
	return 0;
}
