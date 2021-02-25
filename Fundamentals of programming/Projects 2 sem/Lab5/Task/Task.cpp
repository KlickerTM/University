// Task.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <windows.h>
#include <stdio.h>

using namespace std;

void fir_fill(int* A, int S)
{
	int* C;      /* текущий указатель в массиве */
	short i, j;        /* Индикаторы столбца и ряда */
	short l, m;        /* Индикаторы столбца и ряда для передвижения указателя С*/
	short k, cof;      /* Коэффициенты для заполнения рядов */
	short num = 2;         /* Текущий член ЛП*/
	for (i = 0, C = A; i < S; i++)
	{
		for (j = 0; j < S; j++, C++) 
		{
			if (j == S / 2 && i == S / 2)
			{
				*C = 1;
			}
		}
	}
	for (k = S / 2; k > 0; k--) // Заполнение по слоям
	{
		cof = S - k + 1;
		for (j = k; j < cof; j++, num++)
		{
			for (l = 0, C = A; l < S; l++)
			{
				for (m = 0; m < S; m++, C++)
				{
					if (l == j && m == S - cof)
					{
						*C = num;
					}
				}
			}
		}
		for (i = k; i < cof; i++, num++)
		{
			for (l = 0, C = A; l < S; l++)
			{
				for (m = 0; m < S; m++, C++)
				{
					if (l == S - k  && m == i)
					{
						*C = num;
					}
				}
			}
		}
		for (j = cof; j > k; j--, num++)
		{
			for (l = 0, C = A; l < S; l++)
			{
				for (m = 0; m < S; m++, C++)
				{
					if (l == j - 2 && m == S - k)
					{
						*C = num;
					}
				}
			}
		}
		for (i = cof; i > k; i--, num++)
		{
			for (l = 0, C = A; l < S; l++)
			{
				for (m = 0; m < S; m++, C++)
				{
					if (l == S - cof && m == i - 2)
					{
						*C = num;
					}
				}
			}
		}
	}
}

void sec_fill(int **A, int S)
{
	short i, j;        /* Индикаторы столбца и ряда */
	short k, cof;      /* Коэффициенты для заполнения рядов */
	short num = 2;         /* Текущий член ЛП*/
	A[S / 2][S / 2] = 1;  //  Заполняем центр матрицы
	for (k = S / 2; k > 0; k--) // Заполнение по слоям
	{
		cof = S - k + 1;
		for (j = k; j < cof; j++, num++)
		{
			A[j][S - cof] = num;
		}
		for (i = k; i < cof; i++, num++)
		{
			A[S - k][i] = num;
		}
		for (j = cof; j > k; j--, num++)
		{
			A[j - 2][S - k] = num;
		}
		for (i = cof; i > k; i--, num++)
		{
			A[S - cof][i - 2] = num;
		}
	}
}

void fir_var()
{
	int* Ar; /* указатель на начало массива */
	int* Cr; /* текущий указатель у массиве */
	int i;   /* счетчик элементов */
	int S;   /* размерность матрицы */

			 /* ввод размерности */
	printf("Введите размерность матрицы от 0 до 29 >");
	scanf_s("%d", &S, sizeof(S));
	/* проверка размерности */
	if (S <= 0) {
		printf("Размерность слишком мала\n");
		system("pause");
		exit(0);
	}
	if (S > 29) {
		printf("Размерность слишком велика\n");
		system("pause");
		exit(0);
	}
	if (S % 2 == 0)
	{
		printf("Размерность должна быть нечетной\n");
		system("pause");
		exit(0);
	}
	printf("S = %d\n", S);
	/* выделение памяти */
	if ((Ar = (int*)malloc(sizeof(int) * S * S)) == NULL) {
		printf("Недостаток памяти\n");
		exit(0);
	}
	/* обращение к функции заполнения матрицы */
	fir_fill(Ar, S);
	/* вывод матрицы */
	for (Cr = Ar, i = 0; i < S * S; Cr++, i++) {
		printf("%4d", *Cr);
		if (i % S == S - 1) putchar('\n');
	}
	/* освобождение памяти */

	free(Ar);
}

void sec_var()
{
	int **Ar; /* указатель на массив указателей */
	int i, j; /* строка и столбец */
	int S;    /* размерность матрицы */
			  /* ввод размерности */
	printf("Введите размерность матрицы от 0 до 29 >");
	scanf_s("%d", &S, sizeof(S));
	printf("S = %d\n", S);
	if (S <= 0) {
		printf("Размерность слишком мала\n");
		system("pause");
		exit(0);
	}
	if (S > 29) {
		printf("Размерность слишком велика\n");
		system("pause");
		exit(0);
	}
	if (S % 2 == 0)
	{ 
		printf("Размерность должна быть нечетной\n");
		system("pause");
		exit(0);
	}
	/* выделение памяти для массива указателей */
	Ar = (int **)malloc(sizeof(int*) * S);
	/* выделение памяти для каждой строки
	и заполнение массива указателей */
	for (i = 0; i < S; i++)
		Ar[i] = (int *)malloc(sizeof(int) * S);

	/* обращение к функции заполнения матрицы */
	sec_fill(Ar, S);
	/* вывод матрицы */
	for (i = 0; i < S; i++) {
		for (j = 0; j < S; printf("%4d", Ar[i][j++]));
		putchar('\n');
	}
	/* освобождение памяти строк */
	for (i = 0; i < S; free(Ar[i++]));
	/* освобождение памяти массива указателей */
	free(Ar);
}

int main()
{
	setlocale(LC_ALL, "ru");
	do
	{
		fir_var();
		//sec_var();
		system("pause");
		system("cls");
	} while (true);
    return 0;
}
