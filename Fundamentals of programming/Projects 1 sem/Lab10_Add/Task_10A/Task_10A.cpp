// Task_10A

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

string Fsign(double ch1, double ch2)
{
	string sign;
	if (ch1 > ch2)
	{
		sign = '>';
	}
	else if (ch1 < ch2)
	{
		sign = '<';
	}
	else
	{
		sign = '=';
	}
	return sign;
}

int main()
{
	setlocale(LC_ALL, "Rus");
	double ch1, ch2;
	cout << "Введите первое число: ";
	cin >> ch1;
	cout << "Введите второе число: ";
	cin >> ch2;
	cout << ch1 << " " << Fsign(ch1, ch2) << " " << ch2 << endl;
	system("pause");
	return 0;
}
