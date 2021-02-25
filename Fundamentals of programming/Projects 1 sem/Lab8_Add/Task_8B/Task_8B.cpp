// Task_8A

#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <stdio.h>
#include <string>
#include <windows.h>

using namespace std;

#define P 10
#define N 1000
int mas[N];

int main()
{
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	int poz, num, elm;
	bool otv_b;
	bool pov;
	//Запонение массива и печать
	cout << "Изначальный массив:" << endl;
	for (int i = 0; i < P; i++)
	{
		mas[i] = rand() % 9 + 1; // 1 - 9
	}
	for (int i = 0; i < P; i++)
	{
		cout << mas[i] << " ";
	}
	cout << endl;
	elm = P;
	do
	{
		//Получение позиции
		do
		{
			pov = true;
			cout << "В какую позицию (от " << 0 << " до " << elm - 1 << ") вы хотите вставить/удалить элементы массива: ";
			cin >> poz;
			if (poz < 0 || poz > elm - 1)
			{
				cout << "Такой позиции нету, введите другую" << endl;
			}
			else
			{
				pov = false;
			}
		} while (pov);
		//Получение (Вставить или удалить)
		do
		{
			pov = true;
			string otv;
			cout << "Вы хотите вставить или удалить элементы (Вст или Удл): ";
			cin >> otv;
			if (otv == "Вст")
			{
				otv_b = true;
				pov = false;
			}
			else if (otv == "Удл")
			{
				otv_b = false;
				pov = false;
			}
			else
			{
				cout << "Вы должны написать Вст или Удл" << endl;
			}
		} while (pov);
		//Получение количества чисел и заполнение/удаление массива
		if (otv_b == true)
		{
			do
			{
				pov = true;
				cout << "Введите сколько чисел вы хотите вставить: ";
				cin >> num;
				if (num < 1)
				{
					cout << "Число вставляемых элементов должно быть больше 0" << endl;
				}
				else
				{
					pov = false;
				}
			} while (pov);
			for (int i = elm - 1; i >= poz; i--)
			{
				mas[i + num] = mas[i];
			}
			for (int i = poz; i < poz + num; i++)
			{
				mas[i] = rand() % 9 + 1; // 1 - 9
			}
			elm += num;
			cout << "Новый массив:" << endl;
			for (int i = 0; i < elm; i++)
			{
				cout << mas[i] << " ";
			}
			cout << endl;
		}
		else
		{
			do
			{
				pov = true;
				cout << "Введите сколько чисел вы хотите удалить: ";
				cin >> num;
				if (num > elm - 1 - poz)
				{
					cout << "Вы хотите удалить больше чисел чем осталось места в массиве!" << endl;
				}
				else if (num < 1)
				{
					cout << "Число удаляемых элементов должно быть больше 0" << endl;
				}
				else
				{
					pov = false;
				}
			} while (pov);
			for (int i = poz + num; i <= elm - 1; i++)
			{
				mas[i - num] = mas[i];
				//mas[i] = 0;
			}
			elm -= num;
			cout << "Новый массив:" << endl;
			for (int i = 0; i < elm; i++)
			{
				cout << mas[i] << " ";
			}
			cout << endl;
		}
	} while (true);
	system("pause");
	return 0;
}