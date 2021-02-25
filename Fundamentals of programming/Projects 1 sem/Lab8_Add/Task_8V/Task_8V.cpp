// Task_8V

#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <stdio.h>
#include <string>

using namespace std;

#define K 19
short numeral[K];

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	unsigned long long chislo;
	int sum = 0;
	int kol;
	bool pov;
	do
	{
		pov = true;
		cout << "Введите число (от 0 до 9,223,372,036,854,775,807): ";
		cin >> chislo;
		if (chislo < 0 || chislo > 9223372036854775807)
		{
			cout << "Число должно быть больше 0 и меньше 9,223,372,036,854,775,807" << endl;
		}
		else
		{
			pov = false;
		}
	} while (pov);
	for (int i = 0; i < K; i++)
	{
		numeral[i] = (chislo / (unsigned long long) pow(10, i)) % 10;
		sum += numeral[i];
	}
	cout << "Сумма цифр числа " << chislo << " равна = " << sum << endl;
	for (int i = K - 1; i > 0; i--)
	{
		if (numeral[i] > 0)
		{
			kol = i + 1;
			break;
		}
	}
	cout << "Количество цифр числа " << chislo << " равно = " << kol << endl;
	chislo = 0;
	for (int i = 0; i < kol; i++)
	{
		chislo += numeral[kol - i - 1] * (unsigned long long) pow(10, i);
	}
	cout << "Число наоборот: " << chislo << endl;
	system("pause");
    return 0;
}

