// Task1 for lab9
// Variant 4
#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <math.h>
#include <ctime>
using namespace std;

#define S 9
int Ar[S][S]; /* матрица */

int main()
{
	setlocale(LC_ALL, "Russian");
	short i, j;        /* Индикаторы столбца и ряда */
	short k, cof;      /* Коэффициенты для заполнения рядов */
	short num = S * S; /* Текущий член ЛП с конца */
	for (k = 0; k < S / 2; k++) // Заполнение по слоям
	{
		cof = S - 1 - k;
		for (i = k; i < cof; i++, num--)
		{
			Ar[k][i] = num;
		}
		for (j = k; j < cof; j++, num--)
		{
			Ar[j][cof] = num;
		}
		for (i = cof; i > k; i--, num--)
		{
			Ar[cof][i] = num;
		}
		for (j = cof; j > k; j--, num--)
		{
			Ar[j][k] = num;
		}
	}
	if (S % 2) //если S-нечетное дополнить центральным элементом
	{
		Ar[S / 2][S / 2] = num;
	}
	for (i = 0; i < S; i++)
	{
		for (j = 0; j < S; j++)
		{
			printf("%3d", Ar[i][j]);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}

