// Task_9A

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <math.h>
#include <ctime>
using namespace std;

#define M 5 // Строки
#define N 5 // Столбци

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int dvumas[M][N];
	int i, j;
	int in_i, in_j;
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			dvumas[i][j] = rand() % 101 - 50; //-50 - 50
		}
	}
	cout << "Двумерный массив до обработки:" << endl;
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf("%4d", dvumas[i][j]);
		}
		cout << endl;
	}
	for (i = 0; i < M; i++)
	{
		int max = INT_MIN;
		in_i = 0;
		in_j = 0;
		for (j = 0; j < N; j++)
		{
			if (dvumas[i][j] > max)
			{
				max = dvumas[i][j];
				in_i = i;
				in_j = j;
			}
		}
		int tmp = dvumas[i][0];
		dvumas[i][0] = dvumas[in_i][in_j];
		dvumas[in_i][in_j] = tmp;
	}
	cout << "Двумерный массив после обработки (а):" << endl;
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf("%4d", dvumas[i][j]);
		}
		cout << endl;
	}
	for (j = 0; j < N; j++)
	{
		int min = INT_MAX;
		in_i = 0;
		in_j = 0;
		for (i = 0; i < M; i++)
		{
			if (dvumas[i][j] < min)
			{
				min = dvumas[i][j];
				in_i = i;
				in_j = j;
			}
		}
		int tmp = dvumas[M - 1][j];
		dvumas[M - 1][j] = dvumas[in_i][in_j];
		dvumas[in_i][in_j] = tmp;
	}
	cout << "Двумерный массив после обработки (b):" << endl;
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf("%4d", dvumas[i][j]);
		}
		cout << endl;
	}
	cout << endl;
	system("pause");
	return 0;
}

