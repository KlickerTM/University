#include <stdio.h>
#include <windows.h>
#include <iostream>
#include <string>

using namespace std;

struct prog
{
	string name;
	unsigned int kol;
	double time1;
	double time2;
};
prog knig;

#define FIWIE "d:\\My main File\\Универ\\Основи програмування\\Проекты по программированию 2 сем\\Lab7\\Task2\\numbers.txt\0"

void main()
{
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char fname[200] = FIWIE;
	int N;
	bool pass;
	FILE* f; // файл чисел
	puts("\nСоздание файла");
	printf("Введенные числа будут записаны в файл %s\n", fname);

	if ((f = fopen(fname, "wt")) == NULL)
	{
		cout << "Ошибка открытия файла для записи" << endl;
		system("pause");
		exit(0);
	}
	do
	{
		pass = false;
		cout << "Введите количество значений что вы хотите записать в файл: ";
		cin >> N;
		if (N <= 0)
		{
			cout << "Вы ввели значение меньшее или равное 0" << endl;
			pass = true;
		}
	} while (pass);
	for (int i = 0; i < N; i++)
	{
		knig.name = "Book" + to_string(rand() % 50 + 1); // 0 - 50
		knig.kol = rand() % 653 + 124;
		knig.time1 = knig.kol / (rand() % 40 + 11);
		knig.time2 = knig.time1 / (rand() % 2 + 2);
		fprintf(f, "%-12s %-11u %-8.2lf %-5.2lf\n", knig.name.c_str(), knig.kol, knig.time1, knig.time2);
	}
	fclose(f); // закрыть файл
	printf("Введенные числа записаны в файл %s\n", fname);
	puts("\nДля завершения нажмите <Enter>");
	system("pause");
}