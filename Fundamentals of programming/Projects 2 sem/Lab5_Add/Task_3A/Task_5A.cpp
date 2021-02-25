#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <ctime>

using namespace std;

int *func(int **Arr, int *Arrmin, int *Arrmax, int *sum_GD, long *proi_PD, int M, int N)
{
	cout << "Массив содержащий минимальные элементы в каждом столбце:" << endl;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (Arr[j][i] < Arrmin[i])
			{
				Arrmin[i] = Arr[j][i];
			}
		}
		cout << Arrmin[i] << " ";
	}
	cout << endl << endl;
	cout << "Массив содержащий максимальные элементы в каждой строке:" << endl;
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (Arr[i][j] > Arrmax[i])
			{
				Arrmax[i] = Arr[i][j];
			}
		}
		cout << Arrmax[i] << " ";
	}
	cout << endl << endl;
	int sum = 0;
	long proi = 1;
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i == j)
			{
				sum += Arr[i][j];
			}
			if (i + j == M - 1)
			{
				proi *= Arr[i][j];
			}
		}
	}
	sum_GD = &sum;
	proi_PD = &proi;
	int *newArr = new int[2];
	newArr[0] = *sum_GD;
	newArr[1] = *proi_PD;
	return newArr;
}

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	do
	{
		//Задать количество строк и столбцов
		int M; //Строки
		int N; //Столбци
		cout << "Введите количесто строк M: ";
		cin >> M;
		cout << "Введите количесто столбцов N: ";
		cin >> N;
		//Строки в двумерном массиве

		int **Arr = new int*[M];

		//Столбци в двумерном массиве
		for (int i = 0; i < M; i++)
		{
			Arr[i] = new int[N];
		}

		for (int i = 0; i < M; i++)
		{
			for (int j = 0; j < N; j++)
			{
				Arr[i][j] = rand() % 19 - 9; //-9 - 9
				printf("%3d", Arr[i][j]);
			}
			cout << endl;
		}
		cout << endl;

		int *Arrmin = new int[N]; //Содержит минимальные элементы в каждом столбце
		for (int i = 0; i < N; i++)
		{
			Arrmin[i] = INT_MAX;
		}
		int *Arrmax = new int[M]; //Содержит максимальные элементы в каждой строке
		for (int i = 0; i < M; i++)
		{
			Arrmax[i] = INT_MIN;
		}

		int *sum_GD = 0; //Cумма на ГД;
		long *proi_PD = 0; //Произведение на ПД.

		int *A = func(Arr, Arrmin, Arrmax, sum_GD, proi_PD, M, N);

		cout << "Сумма на ГД: " << A[0] << endl;
		cout << "Произведение на ПД: " << A[1] << endl;

		for (int i = 0; i < M; i++)
		{
			delete[] Arr[i];
		}
		delete[] Arr;
		delete[] Arrmin;
		delete[] Arrmax;
		delete[] A;
		delete sum_GD;
		delete proi_PD;
		system("pause");
		system("cls");
	} while (true);
	return 0;
}
