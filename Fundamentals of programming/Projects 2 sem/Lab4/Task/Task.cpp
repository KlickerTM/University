#include "stdafx.h"
#include <iostream>
#include "Funct.h"

using namespace std;

#define N 10

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	do
	{
		double* Arr = new double[N];
		fill(Arr);
		write(Arr);
		task(Arr);
		delete[] Arr;
		system("pause");
		system("cls");
	} while (true);
	return 0;
}