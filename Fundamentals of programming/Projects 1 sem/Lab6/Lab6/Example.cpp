// Example for lab6
// Variant 30
#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	long n;              /* параметр ряда */
	double dbln;         /* параметр ряда в форме с плавающей точкой */
	double sum = 0;      /* сумма членов ряда */
	double term;         /* значение текущего члена */
	const double eps = 0.000001;  /* предел точности */
	long k2 = 1;           /* pow(2,n)*/
	short k1 = 1;          /* pow(-1,n)*/
						   /* основной цикл; в модификациях вычисляются
						   следующие значения pow(2,n) и pow(-1,n)*/
	for (n = 0; ; n++, k2 *= 2, k1 = -k1)
	{
		/* преобразование n в форму с плавающей точкой */
		dbln = n;
		/* вычисление очередного члена */
		term = k1 * (dbln + 1) / (dbln*dbln + k2);
		/* проверка достижения предела точности */
		if (fabs(term) >= eps)
		{
			/* если не достигнут - накопление суммы */
			sum += term;
		}
		/* если достигнут - выход из цикла */
		else break;
		/* если 10 членов - вывод суммы */
		if (n == 9)
		{
			printf("Сумма 10 членов ряда = %10.7lf\n", sum);
		}
	}
	/* конец основного цикла */
	/* вывод окончательной суммы */
	printf("Полная сумма ряда = %10.7lf\n", sum);
	printf("%ld %10.7lf\n", n, term);
	system("pause");
	return 0;
}
