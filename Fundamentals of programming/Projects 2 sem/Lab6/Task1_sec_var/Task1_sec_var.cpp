#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	do
	{
		short result;
		char* s1 = new char[256];
		char* s2 = new char[256];
		cout << "Введите первую строку: ";
		cin.getline(s1, 256);
		cout << "Введите вторую строку: ";
		cin.getline(s2, 256);
		result = _stricmp(s1, s2);
		if (result <= -1)
		{
			cout << "Первая строка меньше второй" << endl;
		}
		else if (result >= 1)
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