// Task1 for lab9
// Variant 4
#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <math.h>
#include <ctime>
using namespace std;

#define S 5
int Ar[S][S]; /* матрица */

int main()
{
	setlocale(LC_ALL, "Russian");
	short i, j;        /* Индикаторы столбца и ряда */
	short k, cof;      /* Коэффициенты для заполнения рядов */
	short num = 2;         /* Текущий член ЛП*/
	Ar[S / 2][S / 2] = 1;  //  Заполняем центр матрицы
	for (k = S / 2; k > 0; k--) // Заполнение по слоям
	{
		cof = S - k + 1;
		for (j = k; j < cof; j++, num++)
		{
			Ar[j][S - cof] = num;
		}
		for (i = k; i < cof; i++, num++)
		{
			Ar[S - k][i] = num;
		}
		for (j = cof; j > k; j--, num++)
		{
			Ar[j - 2][S - k] = num;
		}
		for (i = cof; i > k; i--, num++)
		{
			Ar[S - cof][i - 2] = num;
		}
	}
	for (i = 0; i < S; i++)
	{
		for (j = 0; j < S; j++)
		{
			printf("%4d", Ar[i][j]);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}