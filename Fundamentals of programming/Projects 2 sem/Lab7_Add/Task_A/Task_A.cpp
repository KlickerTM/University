#include <stdio.h>
#include <windows.h>
#include <iostream>
#include <ctime>
#include <string>

using namespace std;

#define FIWIE1 "d:\\My main File\\Универ\\Основи програмування\\Проекты по программированию 2 сем\\Lab7_Add\\Task_A\\numbers1.txt\0"
#define FIWIE2 "d:\\My main File\\Универ\\Основи програмування\\Проекты по программированию 2 сем\\Lab7_Add\\Task_A\\numbers2.txt\0"

void main()
{
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	const int N = 10;
	char f1name[200] = FIWIE1;
	char f2name[200] = FIWIE2;
	FILE* f1;
	FILE* f2;
	if ((f1 = fopen(f1name, "wt")) == NULL)
	{
		cout << "Ошибка открытия файла для записи" << endl;
		system("pause");
		exit(0);
	}
	int mas1[N];
	for (int i = 0; i < N; i++)
	{
		mas1[i] = rand() % 101 - 50; // -50 - 50
		fprintf(f1, "%-4i", mas1[i]);
	}
	fclose(f1);
	if ((f1 = fopen(f1name, "rt")) == NULL)
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
	int mas2[N];
	for (int i = 0; i < N; i++)
	{
		fscanf(f1, "%i", &mas2[i]);
		printf("%-4i", mas2[i]);
		fprintf(f2, "%-4i", mas2[i]);
	}
	cout << endl;
	fclose(f1);
	fclose(f2); 
	int x;
	if ((f2 = fopen(f2name, "rt")) == NULL)
	{
		cout << "Ошибка открытия файла" << endl;
		system("pause");
		exit(0);
	}
	for (int i = 0; i < N; i++)
	{
		fscanf(f2, "%i", &x);
		printf("%-4i", x);
	}
	cout << endl;
	system("pause");
}