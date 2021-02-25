#include <stdio.h>
#include <cstdio>
#include <windows.h>
#include <iostream>
#include <ctime>
#include <string>

using namespace std;

#define FIWIE1 "d:\\My main File\\Универ\\Основи програмування\\Проекты по программированию 2 сем\\Lab7_Add\\Task_C\\numbers.txt\0"

void main()
{
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	const int N = 20;
	char f1name[200] = FIWIE1;
	FILE* f1;
	int k;
	if ((f1 = fopen(f1name, "wb")) == NULL)
	{
		cout << "Ошибка открытия файла для записи" << endl;
		system("pause");
		exit(0);
	}
	for (int i = 0; i < N; i++)
	{
		k = rand() % 101 + 1; // 1 - 100
		fwrite(&k, sizeof(int), 1, f1);
	}
	fclose(f1);
	if ((f1 = fopen(f1name, "rb")) == NULL)
	{
		cout << "Ошибка открытия файла" << endl;
		system("pause");
		exit(0);
	}
	int sum = 0;
	int min = INT_MAX;
	int min_i;
	for (int i = 0; i < N; i++)
	{
		fread(&k, sizeof k, 1, f1);
		cout << k << " ";
		if (i == 1 || i == 4 || i == 8)
		{
			sum += k;
		}
		if (min > k)
		{
			min = k;
			min_i = i;
		}
	}
	cout << endl;
	cout << "Минимум = " << min << endl;
	fclose(f1);
	cout << "Сума чисел 2, 5, 9: " << sum << endl;
	if ((f1 = fopen(f1name, "r+b")) == NULL)
	{
		cout << "Ошибка открытия файла для записи" << endl;
		system("pause");
		exit(0);
	}
	int k1 = 999;
	fseek(f1, min_i*sizeof(int), SEEK_SET);
	fwrite(&k1, sizeof(int), 1, f1);
	fclose(f1);
	if ((f1 = fopen(f1name, "rb")) == NULL)
	{
		cout << "Ошибка открытия файла" << endl;
		system("pause");
		exit(0);
	}
	for (int i = 0; i < N; i++)
	{
		fread(&k, sizeof k, 1, f1);
		cout << k << " ";
	}
	fclose(f1);
	cout << endl;
	cout << endl;
	system("pause");
}