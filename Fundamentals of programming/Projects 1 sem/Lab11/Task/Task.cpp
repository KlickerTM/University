// Task_11

#include "stdafx.h"
#include <iostream>

using namespace std;

int sum(int x, int y, int i) 
{
	if (y > 0)
	{
		if (y != i)
		{
			i++;
			return sum(++x, y, i);
		}
	}
	else if (y < 0)
	{
		int tmp = x;
		x = y;
		y = tmp;
		return sum(x, y, i);
	}
	return x;
}

int main()
{
	setlocale(LC_ALL, "Rus");
	int x, y, i = 0;
	cout << "Введите первое число: ";
	cin >> x;
	cout << "Введите второе число: ";
	cin >> y;
	cout << "Сумма двух чисел равна: " << sum(x, y, i) << endl;
	system("pause");
	return 0;
}
