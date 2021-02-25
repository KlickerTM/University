#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <string>
using namespace std;

#define N 5

void A_f(int Arr[N])
{
	for (int i = 0; i < N; i++)
	{
		*(Arr + i) = rand() % 21 - 10; // -10 - 10
		cout << *(Arr + i) << " ";
	}
	cout << endl;
	int sum = 0, k = 0;
	for (int i = 0; i < N; i++)
	{
		if (*(Arr + i) < 0)
		{
			sum += *(Arr + i);
			k++;
		}
	}
	cout << "Сумма отрицательних елементов = " << sum << endl;
	cout << "Количество отрицательних елементов = " << k << endl;
}

void B_f(int Arr[N])
{
	int *Arr_start = Arr;
	for (int i = 0; i < N; i++, Arr++)
	{
		*Arr = rand() % 21 - 10; // -10 - 10
		cout << *Arr << " ";
	}
	cout << endl;
	Arr = Arr_start;
	int sum = 0, k = 0;
	for (int i = 0; i < N; i++, Arr++)
	{
		if (*Arr < 0)
		{
			sum += *Arr;
			k++;
		}
	}
	cout << "Сумма отрицательних елементов = " << sum << endl;
	cout << "Количество отрицательних елементов = " << k << endl;
}

void V_f(int Arr[N])
{
	int *Arr_start = Arr;
	for (Arr = Arr_start; Arr != Arr_start + N; Arr++)
	{
		*Arr = rand() % 21 - 10; // -10 - 10
		cout << *Arr << " ";
	}
	cout << endl;
	int sum = 0, k = 0;
	for (Arr = Arr_start; Arr != Arr_start + N; Arr++)
	{
		if (*Arr < 0)
		{
			sum += *Arr;
			k++;
		}
	}
	cout << "Сумма отрицательних елементов = " << sum << endl;
	cout << "Количество отрицательних елементов = " << k << endl;
}

void G_f(int Arr[N])
{
	int *Arr_u[N];
	for (int i = 0; i < N; i++)
	{
		Arr_u[i] = Arr + i;
	}
	for (int i = 0; i < N; i++)
	{
		*Arr_u[i] = rand() % 21 - 10; // -10 - 10
		cout << *Arr_u[i] << " ";
	}
	cout << endl;
	int sum = 0, k = 0;
	for (int i = 0; i < N; i++)
	{
		if (*Arr_u[i] < 0)
		{
			sum += *Arr_u[i];
			k++;
		}
	}
	cout << "Сумма отрицательних елементов = " << sum << endl;
	cout << "Количество отрицательних елементов = " << k << endl;
}

void D_f(int Arr[N])
{
	int *Arr_u[N];
	for (int i = 0; i < N; i++)
	{
		Arr_u[i] = Arr + i;
	}
	int **Arr_uu = Arr_u;
	for (int i = 0; i < N; i++)
	{
		*Arr_uu[i] = rand() % 21 - 10; // -10 - 10
		cout << *Arr_uu[i] << " ";
	}
	cout << endl;
	int sum = 0, k = 0;
	for (int i = 0; i < N; i++)
	{
		if (*Arr_uu[i] < 0)
		{
			sum += *Arr_uu[i];
			k++;
		}
	}
	cout << "Сумма отрицательних елементов = " << sum << endl;
	cout << "Количество отрицательних елементов = " << k << endl;
}

void E_f(int *Arr, int *sum, int *k)
{
	for (int i = 0; i < N; i++)
	{
		Arr[i] = rand() % 21 - 10; // -10 - 10
		cout << Arr[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < N; i++)
	{
		if (Arr[i] < 0)
		{
			*sum += Arr[i];
			++*k;
		}
	}
	cout << "Сумма отрицательних елементов = " << *sum << endl;
	cout << "Количество отрицательних елементов = " << *k << endl;
}

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int Arr[N];
	int sum = 0, k = 0;
	string an;
	do
	{
		do
		{
			cout << "Через какую функцию вы хотите выполнить задание (A, B, V, G, D, E): ";
			cin >> an;
			if (an != "A" && an != "B" && an != "V" && an != "G" && an != "D" && an != "E")
			{
				cout << "Вы должны ввести одну из этих букв (A, B, V, G, D, E)" << endl;
			}
		} while (an != "A" && an != "B" && an != "V" && an != "G" && an != "D" && an != "E");
		if (an == "A")
		{
			A_f(Arr);
		}
		else if (an == "B")
		{
			B_f(Arr);
		}
		else if (an == "V")
		{
			V_f(Arr);
		}
		else if (an == "G")
		{
			G_f(Arr);
		}
		else if (an == "D")
		{
			D_f(Arr);
		}
		else
		{
			E_f(Arr, &sum, &k);
		}
		system("pause");
		system("cls");
	} while (true);
	system("pause");
	return 0;
}

