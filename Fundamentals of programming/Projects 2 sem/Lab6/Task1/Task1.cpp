#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int strcompare(const char* str1, const char* str2);

int main()
{
	setlocale(LC_ALL, "Rus");
	do
	{
		short result;
		char *s1 = new char[256];
		char *s2 = new char[256];
		cout << "Введите первую строку: ";
		cin.getline(s1, 256);
		cout << "Введите вторую строку: ";
		cin.getline(s2, 256);
		result = strcompare(s1, s2);
		if (result == -1)
		{
			cout << "Первая строка меньше второй" << endl;
		}
		else if (result == 1)
		{
			cout << "Первая строка больше второй" << endl;
		}
		else if (result == 0)
		{
			cout << "Строки равны" << endl;
		}
		delete[] s1;
		delete[] s2;
		system("pause");
		system("cls");
	} while (true);
	return 0;
}

int strcompare(const char* str1, const char* str2)
{
	for (; *str1 && *str2; ++str1, ++str2)
	{
		if (tolower(*str1) < tolower(*str2))
			return -1;
		else if (tolower(*str1) > tolower(*str2))
			return 1;
	}
	return ((!*str1) && (!*str2) ? 0 : (!*str1) ? -1 : 1);
}