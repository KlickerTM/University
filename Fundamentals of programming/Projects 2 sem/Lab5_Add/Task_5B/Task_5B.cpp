#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <ctime>

using namespace std;

int f1(int *mas, int N) 
{
	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		if (mas[i] >= 0)
		{
			sum += mas[i];
		}
	}
	return sum;
}

int f2(int *mas, int N)
{
	int proi = 1;
	for (int i = 0; i < N; i++)
	{
		if (mas[i] < 0)
		{
			proi *= mas[i];
		}
	}
	return proi;
}

void choise(int *mas, int N, int(*point)(int*, int))
{
	int k;
	do
	{
		cout << "Что вы хотите сделать?" << endl;
		cout << "1 - Посчитать сумму положительных елементов" << endl;
		cout << "2 - Посчитать произведение отрицательных елементов" << endl;
		cin >> k;
	} while (k != 1 && k != 2);
	cout << endl;
	if (k == 1)
	{
		point = f1;
		cout << "Сумма равна = " << point(mas, N) << endl;
	}
	else if (k == 2)
	{
		point = f2;
		cout << "Произведение равно = " << point(mas, N) << endl;
	}
}

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	do
	{
		int(*point)(int*, int) = 0;
		int N;
		cout << "Введите количество елементов массива: ";
		cin >> N;
		int *mas = new int[N];
		cout << "Массив:" << endl;
		for (int i = 0; i < N; i++)
		{
			mas[i] = rand() % 19 - 9;
			cout << mas[i] << " ";
		}
		cout << endl << endl;
		choise(mas, N, point);
		system("pause");
		delete[] mas;
		system("cls");
	} while (true);
	return 0;
}
