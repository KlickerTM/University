// Task_9B

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <math.h>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int n, m, q, w;
	int i, j;
	bool pov;
	do
	{
		pov = true;
		cout << "Введите количество строк в матрице A: ";
		cin >> m;
		cout << "Введите количество столбцов в матрице A: ";
		cin >> n;
		cout << "Введите количество строк в матрице B: ";
		cin >> w;
		cout << "Введите количество столбцов в матрице B: ";
		cin >> q;
		if (n != w)
		{
			pov = false;
			cout << "Число столбцов матрицы А должно совпадать с числом строк матрицы В" << endl;
		}
	} while (!pov);
	int **aArr = new int *[m]; //Создаем динамический массив А
	for (i = 0; i < m; i++)
	{
		aArr[i] = new int[n];
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			aArr[i][j] = rand() % 19 - 9; //-9 - 9;
		}
	}
	cout << "Первая матрица: " << endl;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%4d", aArr[i][j]);
		}
		cout << endl;
	}
	int **bArr = new int *[w]; //Создаем динамический массив B
	for (i = 0; i < n; i++)
	{
		bArr[i] = new int[q];
	}
	for (i = 0; i < w; i++)
	{
		for (j = 0; j < q; j++)
		{
			bArr[i][j] = rand() % 19 - 9; //-9 - 9;
		}
	}
	cout << "Вторая матрица: " << endl;
	for (i = 0; i < w; i++)
	{
		for (j = 0; j < q; j++)
		{
			printf("%4d", bArr[i][j]);
		}
		cout << endl;
	}
	int **cArr = new int *[m];
	for (i = 0; i < m; i++)
	{
		cArr[i] = new int[q];
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < q; j++)
		{
			cArr[i][j] = 0;
			for (int k = 0; k < n; k++)
			{
				cArr[i][j] += (aArr[i][k] * bArr[k][j]);
			}
		}
	}
	cout << "Произведение двух матриц:" << endl;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < q; j++)
		{
			printf("%6d", cArr[i][j]);
		}
		cout << endl;
	}
	system("pause");
	return 0;
}

