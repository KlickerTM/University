// Example for lab9
// Variant 30
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
	short l, r;  /* текущие индексы */
	short r1, r2; /* граничные номера столбцов */
	short dd;    /* модификатор граничных номеров */
	short k;     /* текущий член ЛП */
				 /* начальные значения переменных */
	r1 = 1; r2 = S - 2; dd = 1; k = 1;
	for (l = 0; l<S; l++) {  /* перебор строк */
		for (r = 0; r<S; r++)  /* перебор столбцов */
							   /* условие ненулевого значения */
			if ((r<r1) || (r>r2)) Ar[l][r] = 0;
			else Ar[l][r] = k++;
			/* конец перебора строк */
			/* модификация границ */
			r1 += dd; r2 -= dd;
			/* уловие перехода в нижнюю часть */
			if (r1>r2) dd = -dd;
	} /* конец перебора столбцов */
	  /* вывод матрицы */
	for (l = 0; l<S; l++) {
		for (r = 0; r<S; r++) {
			printf("%3d", Ar[l][r]);
		}
		printf("\n");
	}
	system("pause");
    return 0;
}

