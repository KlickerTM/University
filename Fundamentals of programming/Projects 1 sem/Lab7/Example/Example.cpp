// Example for lab7
// Variant 30
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
	/* внешний цикл - для 5 периодов */
	for (n = 0; n<5; n++) {
		/* вывод заголовка таблицы */
		printf("|   x   |      y     |\n");
		printf("|-------|------------|\n");
		/* внутренний цикл для одного периода */
		for (x = 0; x<4; x += 0.25) {
			/* 1-й отрезок */
			if (x<1) y = 2 * x - 1;
			/* 2-й отрезок */
			else if (x<3) y = 1 - sqrt(1 - (x - 2)*(x - 2));
			/* 3-й отрезок */
			else y = 7 - 2 * x;
			/* вывод строки таблицы */
			printf("| %5.2lf | %10.7lf |", x + n * 4, y);
			/* определение позиции точки */
			h = (y + 1) * 10;
			if (y - 1 - h * 10>0.5) h++;
			/* вывод точки графика */
			for (; h>0; h--) printf(" ");
			printf("*\n");
		}  /* конец внутреннего цикла */
		   /* пауза до команды оператора */
		printf("Нажмите клавишу Enter...");
		getchar();
	}  /* конец внешнего цикла */
	system("pause");
	return 0;
}
