#include <stdio.h>
#include <windows.h>
#include <iostream>
#include <ctime>
#include "Functions.h"
#include "Lib.h"

using namespace std;

prog knig;

void main()
{
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	do
	{
		short n;
		do
		{
			cout << "Выбирите что вы хотите сделать с файлом:" << endl;
			cout << "1 - Записать значения вручную" << endl;
			cout << "2 - Записать случайные значения" << endl;
			cout << "3 - Добавить случайные значения в начало файла" << endl;
			cout << "4 - Добавить случайные значения в конец файла" << endl;
			cout << "5 - Печать одной записи из файла по номеру" << endl;
			cout << "6 - Чтение всех записей из файла (в структуру) и печать" << endl;
			cout << "7 - Выйти из программы" << endl;
			cin >> n;
		} while (n != 1 && n !=2 && n != 3 && n != 4 && n != 5 && n != 6 && n != 7);
		if (n == 1)
		{
			input(knig);
		}
		else if (n == 2)
		{
			input_rand(knig);
		}
		else if (n == 3)
		{
			input_rand_add_S(knig);
		}
		else if (n == 4)
		{
			input_rand_add(knig);
		}
		else if (n == 5)
		{
			output_some_knig(knig);
		}
		else if (n == 6)
		{
			output_all_knig(knig);
		}
		else if (n == 7)
		{
			system("pause");
			exit(0);
		}
	} while (true);
}