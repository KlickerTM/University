//Task_8B_sec

#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <stdio.h>
#include <string>
#include <windows.h>

using namespace std;

#define N 10
int mas[N];

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int i, j, n;
	for (i = 0; i < 5; i++)
		mas[i] = rand() % 11 + 1; // 1 - 10
	for (i = 0; i < 5; i++)
		printf("%d ", mas[i]);
	cout << "Число: ";
	cin >> n;
	cout << "Позиция: ";
	cin >> j;
	for (i = 4; i >= j - 1; i--)
	{
		mas[i + 1] = mas[i];
	}
	mas[j - 1] = n;
	for (i = 0; i < 6; i++)
	{
		printf("%d ", mas[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}