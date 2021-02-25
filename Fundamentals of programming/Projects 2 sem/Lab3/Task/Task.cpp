#include "stdafx.h"
#include <iostream>
#include <ctime>
using namespace std;

#define N 10

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

	double Arr[N];
	for (int i = 0; i < N; i++)
	{
		*(Arr + i) = rand() % 21; // 0 - 20
	}
	cout << "Одномерный массив:" << endl;
	for (int i = 0; i < N; i++)
	{
		cout << *(Arr + i) << " ";
	}
	cout << endl << endl;

	double *ad_max = Arr, *ad_min = Arr;
	for (int i = 0; i < N; i++)
	{
		if (*(Arr + i) > *ad_max)
		{
			ad_max = (Arr + i);
		}
		if (*(Arr + i) < *ad_min)
		{
			ad_min = (Arr + i);
		}
	}
	cout << "Максимальный елемент: " << *ad_max << endl;
	cout << "Минимальный елемент: " << *ad_min << endl;
	double att;
	if (*ad_min == 0)
	{
		cout << "Нельзя найти отношение Макс. к Мин. так как минимальный елемент равен 0 " << endl << endl;
	}
	else
	{
		att = *ad_max / *ad_min;
		cout << "Отношение максимального елемента к минимальному равно: " << att << endl << endl;
	}

	int Narr[N - 2];
	int k = 0;
	for (int i = 0; i < N; i++)
	{
		if (*(Arr + i) > *ad_min && *(Arr + i) < *ad_max)
		{
			Narr[k] = *(Arr + i);
			k++;
		}
	}
	cout << "Новый одномерный массив:" << endl;
	for (int i = 0; i < k; i++)
	{
		cout << Narr[i] << " ";
	}
	cout << endl << endl;

	system("pause");
	return 0;
}