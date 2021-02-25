// Task_10B

#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <stdio.h>
#include <math.h>

using namespace std;

#define M 5 // Строки
#define N 5 // Столбци
short mas[M][N];

void write()
{
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			mas[i][j] = rand() % 201 - 100; //-100 - 100
		}
	}
	cout << "Двумерный массив:" << endl;
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			printf("%5d", mas[i][j]);
		}
		cout << endl;
	}
	cout << endl;
}

int count(int i)
{
	int pol = 0;
	for (int j = 0; j < N; j++)
	{
		if (mas[i][j] > 0)
		{
			pol++;
		}
	}
	return pol;
}

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	write();
	for (int i = 0; i < M; i++)
	{
		cout << "Количества положительных элементов в строке №" << i + 1 << " равно: " << count(i) << "\n\n";
	}
	system("pause");
	return 0;
}
