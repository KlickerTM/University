// Task for lab8
// Variant 4
#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <math.h>
#include <ctime>
using namespace std;

#define N 20

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int Ar[N];   /* массив, который обрабатывается */
	int i;    /* индексы в массиве */
	int n1;      /* проверка первого элемента*/
	int score = 0;   /* счетчик */
	bool sign = false;   /* знак числа */
	for (i = 0; i < N; Ar[i++] = rand() % 101 - 50); //-50 - 50
	printf("Начальный массив:\n");
	for (i = 0; i < N; printf("%3d  ", Ar[i++]));
	putchar('\n');
	putchar('\n');
	for (n1 = i = 0; i < N; i++, n1++)
	{
		if (n1 != 0)
		{
			if ((Ar[i] < 0 && sign == true) || (Ar[i] > 0 && sign == false))
			{
				score++;
			}
		}
		if (Ar[i] < 0)
		{
			sign = false;
		}
		else
		{
			sign = true;
		}
	}
	cout << "Количество пар соседних элементов, которые имеют противоположные знаки: " << score << endl;
	putchar('\n');
	system("pause");
	return 0;
}