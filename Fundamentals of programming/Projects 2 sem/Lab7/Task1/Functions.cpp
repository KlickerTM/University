#include <stdio.h>
#include <windows.h>
#include <iostream>
#include <string>
#include "Functions.h"
#include "Lib.h"

using namespace std;

#define FIWIE "d:\\My main File\\Универ\\Основи програмування\\Проекты по программированию 2 сем\\Lab7\\Task1\\numbers.txt\0"
#define FIWIE2 "d:\\My main File\\Универ\\Основи програмування\\Проекты по программированию 2 сем\\Lab7\\Task1\\add.txt\0"

void input(prog knig)
{
	char fname[200] = FIWIE;
	int N = 0;
	bool pass = false;
	FILE* f = 0; // файл чисел
	puts("\nСоздание файла");
	printf("Введенные числа будут записаны в файл %s\n", fname);
	puts("После ввода каждого числа нажимайте <Enter>\n");
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
		cout << "Введите: Название книги, Количество страниц книги, Среднее время прочтения в оригинале (час), Среднее время прочтения в коротком варианте (час)" << endl;
		cin >> knig.name;
		cin >> knig.kol;
		cin >> knig.time1;
		cin >> knig.time2;
		fprintf(f, "%-12s %-11u %-8.2lf %-5.2lf\n", knig.name.c_str(), knig.kol, knig.time1, knig.time2);
	}
	fclose(f); // закрыть файл
	printf("Введенные числа записаны в файл %s\n", fname);
	puts("\nДля завершения нажмите <Enter>");
	system("pause");
}

void input_rand(prog knig)
{
	char fname[200] = FIWIE;
	int N;
	bool pass;
	FILE* f; // файл чисел
	puts("\nСоздание файла\n");

	if ((f = fopen(fname, "wt")) == NULL)
	{
		cout << "Ошибка открытия файла для записи" << endl;
		system("pause");
		exit(0);
	}
	do
	{
		pass = false;
		cout << "Введите количество случаных значений что вы хотите записать в файл: ";
		cin >> N;
		if (N <= 0)
		{
			cout << "Вы ввели значение меньшее или равное 0" << endl;
			pass = true;
		}
	} while (pass);
	for (int i = 0; i < N; i++)
	{
		knig.name = "Book" + to_string(rand() % 50 + 1); // 1 - 50
		knig.kol = rand() % 653 + 124;
		knig.time1 = knig.kol / (rand() % 40 + 11);
		knig.time2 = knig.time1 / (rand() % 2 + 2);
		fprintf(f, "%-12s %-11u %-8.2lf %-5.2lf\n", knig.name.c_str(), knig.kol, knig.time1, knig.time2);
	}
	fclose(f); // закрыть файл
	printf("Введенные значения записаны в файл %s\n", fname);
	puts("\nДля завершения нажмите <Enter>");
	system("pause");
}

void input_rand_add_S(prog knig)
{
	char fname[200] = FIWIE;
	char f2name[200] = FIWIE2;
	FILE* f; // файл
	FILE* f2;
	bool pass;
	int N;
	char dop[12];
	puts("\nПечать всех книг из БД");
	if ((f = fopen(fname, "rt")) == NULL)
	{
		cout << "Ошибка открытия файла" << endl;
		system("pause");
		exit(0);
	}
	if ((f2 = fopen(f2name, "wt")) == NULL)
	{
		cout << "Ошибка открытия файла для записи" << endl;
		system("pause");
		exit(0);
	}
	while (true)
	{
		fscanf(f, "%s", &dop);
		knig.name = dop;
		fscanf(f, "%u %lf %lf", &knig.kol, &knig.time1, &knig.time2);
		if (feof(f)) break;
		fprintf(f2, "%-12s %-11u %-8.2lf %-5.2lf\n", knig.name.c_str(), knig.kol, knig.time1, knig.time2);
	}
	fclose(f);
	fclose(f2);
	if ((f = fopen(fname, "wt")) == NULL)
	{
		cout << "Ошибка открытия файла для записи" << endl;
		system("pause");
		exit(0);
	}
	do
	{
		pass = false;
		cout << "Введите количество случаных значений что вы хотите записать в файл: ";
		cin >> N;
		if (N <= 0)
		{
			cout << "Вы ввели значение меньшее или равное 0" << endl;
			pass = true;
		}
	} while (pass);
	for (int i = 0; i < N; i++)
	{
		knig.name = "Book" + to_string(rand() % 50 + 1); // 1 - 50
		knig.kol = rand() % 653 + 124;
		knig.time1 = knig.kol / (rand() % 40 + 11);
		knig.time2 = knig.time1 / (rand() % 2 + 2);
		fprintf(f, "%-12s %-11u %-8.2lf %-5.2lf\n", knig.name.c_str(), knig.kol, knig.time1, knig.time2);
	}
	fclose(f);
	if ((f = fopen(fname, "at")) == NULL)
	{
		cout << "Ошибка открытия файла для записи" << endl;
		system("pause");
		exit(0);
	}
	if ((f2 = fopen(f2name, "rt")) == NULL)
	{
		cout << "Ошибка открытия файла" << endl;
		system("pause");
		exit(0);
	}
	while (true)
	{
		fscanf(f2, "%s", &dop);
		knig.name = dop;
		fscanf(f2, "%u %lf %lf", &knig.kol, &knig.time1, &knig.time2);
		if (feof(f2)) break;
		fprintf(f, "%-12s %-11u %-8.2lf %-5.2lf\n", knig.name.c_str(), knig.kol, knig.time1, knig.time2);
	}
	fclose(f); // закрыть файл
	fclose(f2);
	printf("Введенные значения записаны в файл %s\n", fname);
	puts("\nДля завершения нажмите <Enter>");
	system("pause");
}

void input_rand_add(prog knig)
{
	char fname[200] = FIWIE;
	int N;
	bool pass;
	FILE* f; // файл чисел
	puts("\nСоздание файла");
	printf("Введенные числа будут записаны в файл %s\n", fname);

	//if ((f = fopen(fname, "at")) == NULL)
	if ((f = fopen(fname, "at")) == NULL)
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
		knig.name = "Book" + to_string(rand() % 50 + 1); // 1 - 50
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

void output_some_knig(prog knig)
{
	char fname[200] = FIWIE;
	FILE* f; // файл
	char obr[12];
	char dop[12];
	int n = 0; // количество записей, удовлетворяющих запросу
	puts("\nПоиск в БД книг");
	if ((f = fopen(fname, "rt")) == NULL)
	{
		cout << "Ошибка открытия файла" << endl;
		system("pause");
		exit(0);
	}
	printf("Название книги: ");
	scanf("%s", &obr);
	while (true)
	{
		fscanf(f, "%s", &dop);
		knig.name = dop;
		fscanf(f, "%u %lf %lf", &knig.kol, &knig.time1, &knig.time2);
		if (feof(f)) break;
		if (strcmp(knig.name.c_str(), obr) == 0)
		{
			printf("\n%-12s %-11u %-8.2lf %-5.2lf\n", knig.name.c_str(), knig.kol, knig.time1, knig.time2);
			n++;
		}
	}
	if (n)
		printf("\nНайдено записей: %i", n);
	else
		printf("\nДанных об книге %s в БД нет", obr);
	fclose(f); // закрыть файл
	puts("\nДля завершения работы нажмите <Enter>");
	system("pause");
}

void output_all_knig(prog knig)
{
	char fname[200] = FIWIE;
	FILE* f; // файл
	char dop[12];
	puts("\nПечать всех книг из БД");
	if ((f = fopen(fname, "rt")) == NULL)
	{
		cout << "Ошибка открытия файла" << endl;
		system("pause");
		exit(0);
	}
	while (true)
	{
		fscanf(f, "%s", &dop);
		knig.name = dop;
		fscanf(f, "%u %lf %lf", &knig.kol, &knig.time1, &knig.time2);
		if (feof(f)) break;
		printf("\n%-12s %-11u %-8.2lf %-5.2lf\n", knig.name.c_str(), knig.kol, knig.time1, knig.time2);
	}
	fclose(f); // закрыть файл
	puts("\nДля завершения работы нажмите <Enter>");
	system("pause");
}