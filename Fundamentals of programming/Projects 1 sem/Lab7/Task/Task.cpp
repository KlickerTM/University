// Task for lab7
// Variant 4
#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	short n;        /* параметр внешнего цикла */
	double x, y;    /* абсцисса и ордината графика */
	short h;        /* позиция точки на экране */
	for (n = 0; n<5; n++) 
	{
		printf("|   X   |      Y     |\n");
		printf("|-------|------------|\n");
		for (x = 0; x<4; x += 0.25) 
		{
			if (x < 1)
			{
				y = x;
			}
			else if (x < 3)
			{
				y = 2 - x;
			}
			else
			{
				y = x - 4;
			}
			printf("| %5.2lf | %10.7lf |", x + n * 4, y);
			h = (y + 1) * 10;
			if ((y + 1) * 10 - h > 0.5) h++;
			for (; h>0; h--) printf(" ");
			printf("*\n");
		}
		printf("Нажмите клавишу Enter...");
		getchar();
	}
	system("pause");
	return 0;
}
