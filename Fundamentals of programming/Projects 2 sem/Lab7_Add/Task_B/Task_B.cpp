#include <stdio.h>
#include <cstdio>
#include <windows.h>
#include <iostream>
#include <ctime>
#include <string>

using namespace std;

#define FIWIE1 "d:\\My main File\\Универ\\Основи програмування\\Проекты по программированию 2 сем\\Lab7_Add\\Task_B\\numbers.txt\0"

void main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	const int N = 10;
	char f1name[200] = FIWIE1;
	FILE* f1;
	fopen_s(&f1, f1name, "wb");
	int mas1[N];
	for (int i = 0; i < N; i++)
	{
		mas1[i] = rand() % 101 - 50; // -50 - 50
	}
	fwrite(&mas1, sizeof (int), 10, f1);
	fclose(f1);
	fopen_s(&f1, f1name, "rb");
	int mas2[N];
	fread(mas2, sizeof mas2, 1, f1);
	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		printf("%-4i", mas2[i]);
		if (mas2[i] > 0)
		{
			sum += mas2[i];
		}
	}
	cout << endl;
	cout << "Сума положительних чисел: " << sum << endl;
	fclose(f1);
	cout << endl;
	system("pause");
}