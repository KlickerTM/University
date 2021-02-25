#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <ctime>

using namespace std;

void metod1(int *mas, int N) //Сортировка Челночная
{
	for (int i = 0; i < N - 1; i++)
	{
		if (mas[i] > mas[i + 1])
		{
			int tmp = mas[i];
			mas[i] = mas[i + 1];
			mas[i + 1] = tmp;
			for (int k = i; (mas[k] < mas[k - 1]) && (k >= 1); k--)
			{
				int tmp = mas[k];
				mas[k] = mas[k - 1];
				mas[k - 1] = tmp;
			}
		}
	}
}

void metod2(int *mas, int N) //Сортировка Шелла
{
	int d = N / 2;
	while (d > 0)
	{
		for (int i = 0; i < N - d; i++)
		{
			int j = i;
			while (j >= 0 && mas[j] > mas[j + d])
			{
				int tmp = mas[j];
				mas[j] = mas[j + d];
				mas[j + d] = tmp;
				j--;
			}
		}
		d /= 2;
	}
}

void metod3(int *mas, int N) //Сортировка Пузырьковая
{
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N - 1; j++) {
			if (mas[j] > mas[j + 1]) {
				int temp = mas[j]; 
				mas[j] = mas[j + 1]; 
				mas[j + 1] = temp;
			}
		}
	}
}

void choise(int *mas, int N, void(*point)(int*, int))
{
	int k;
	do
	{
		cout << "Каким методом сортировки вы хотите воспользоваться?" << endl;
		cout << "1 - Сортировка Челночная" << endl;
		cout << "2 - Сортировка Шелла" << endl;
		cout << "3 - Сортировка Пузырьковая" << endl;
		cin >> k;
	} while (k != 1 && k != 2 && k != 3);
	cout << endl;
	if (k == 1)
	{
		point = metod1;
	}
	else if (k == 2)
	{
		point = metod2;
	}
	else
	{
		point = metod3;
	}
	point(mas, N);
}

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	do
	{
		void(*point)(int*, int) = 0;
		int N;
		cout << "Введите количество елементов массива: ";
		cin >> N;
		int *mas = new int[N];
		cout << "Массив до сортировки:" << endl;
		for (int i = 0; i < N; i++)
		{
			mas[i] = rand() % 19 - 9;
			cout << mas[i] << " ";
		}
		cout << endl << endl;
		choise(mas, N, point);
		cout << "Массив после сортировки:" << endl;
		for (int i = 0; i < N; i++)
		{
			cout << mas[i] << " ";
		}
		cout << endl;
		delete[] mas;
		system("pause");
		system("cls");
	} while (true);
	return 0;
}
