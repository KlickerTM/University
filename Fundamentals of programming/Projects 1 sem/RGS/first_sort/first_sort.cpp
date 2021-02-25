// first_sort Сортировка Челночная

#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <stdio.h>
#include <math.h>
#include <chrono>

using namespace std;

//Количество елементов массива
#define N 5 
//#define N 10
//#define N 15
//#define N 20
//#define N 25
//#define N 30
//#define N 35
//#define N 40
//#define N 45
//Количество проверок
#define P 1000

void fill_random(int Ar[]) //Неупорядоченный массив
{
	for (int i = 0; i < N; i++)
	{
		Ar[i] = rand() % 101 - 50; //-50 - 50
	}
}

void fill_ordered(int Ar[]) //Упорядоченный массив
{
	for (int i = 0; i < N; i++)
	{
		Ar[i] = i + 1;
	}
}

void fill_reordered(int Ar[]) //Массив, упорядоченный в обратном порядке
{
	for (int i = 0; i < N; i++)
	{
		Ar[i] = N - i;
	}
}


void sort(int Ar[]) //Сортировка Челночная
{
	for (int i = 0; i < N - 1; i++)
	{
		if (Ar[i] > Ar[i + 1])
		{
			int tmp = Ar[i];
			Ar[i] = Ar[i + 1];
			Ar[i + 1] = tmp;
			for (int k = i; (Ar[k] < Ar[k - 1]) && (k >= 1); k--)
			{
				int tmp = Ar[k];
				Ar[k] = Ar[k - 1];
				Ar[k - 1] = tmp;
			}
		}
	}
}

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int Ar[N]; //Массив для сортировки
	fill_random(Ar); //Неупорядоченный массив
	//fill_ordered(Ar); //Упорядоченный массив
	//fill_reordered(Ar); //Массив, упорядоченный в обратном порядке
	cout << "Массив до обработки:" << endl;
	for (int i = 0; i < N; i++)
	{
		printf("|%3d ", Ar[i]);
	}
	cout << "|";
	cout << endl;
	cout << endl;
	double k = 0;
	for (int j = 0; j < P; j++) 
	{
		auto begin = std::chrono::high_resolution_clock::now();
		sort(Ar);
		auto end = std::chrono::high_resolution_clock::now();
		chrono::duration<double> elapsed = end - begin;
		cout << "Проверка №" << j + 1 << ": " << elapsed.count() << endl;
		k += elapsed.count() / P;
	}
	cout << "Средний результат: " << k << endl;
	cout << endl;
	cout << "Массив после обработки:" << endl;
	for (int i = 0; i < N; i++)
	{
		printf("|%3d ", Ar[i]);
	}
	cout << "|";
	cout << endl;
	cout << endl;
	system("pause");
    return 0;
}

