// Task for Lab10

#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <stdio.h>
#include <math.h>

#define N 3 // Столбци
#define M 3 // Строки

using namespace std;

double conver(double odmas[])
{
	double dvumas[M][N];
	int i, j;
	// Переобразование массива
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			dvumas[i][j] = odmas[i * N + j];
		}
	}
	// Печать массива
	cout << "Двумерный массив до обработки:" << endl;
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf("%10.4f", dvumas[i][j]);
		}
		cout << endl;
	}
	cout << endl;
	// Переобразование массива
	double sum[M];
	for (i = 0; i < M; i++)
	{
		sum[i] = 0;
	}
	double sum_midl = 0;
	cout << "Двумерный массив после обработки:" << endl;
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++) // Подсчет суммы
		{
			sum[i] += dvumas[i][j];
		}
		double midl = sum[i] / N; // Подсчет среднего значения
		sum_midl += midl;  // Подсчет сумм средних значений строк матрицы
		for (j = 0; j < N; j++) // Умножение строки массива на среднее значение
		{
			dvumas[i][j] *= midl;
			printf("%10.4f", dvumas[i][j]);
		}
		cout << endl;
	}
	cout << endl;
	//Обратное приобразование
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			odmas[i * N + j] = dvumas[i][j];
		}
	}
	return sum_midl;
}

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	double odmas[M * N];
	int i;
	for (i = 0; i < M * N; i++)
	{
		odmas[i] = rand() % 101 - 50; //-50 - 50
	}
	//Печать одномерного массива
	cout << "Одномерный массив:" << endl;
	for (i = 0; i < M * N; i++)
	{
		cout << odmas[i] << " ";
	}
	cout << "\n\n";
	cout << "Сумма средних значений строк матрицы: " << conver(odmas) << endl;
	cout << endl;
	cout << "Одномерный массив после обработки:" << endl;
	for (i = 0; i < M * N; i++)
	{
		cout << odmas[i] << "  ";
	}
	cout << "\n\n";
	system("pause");
	return 0;
}