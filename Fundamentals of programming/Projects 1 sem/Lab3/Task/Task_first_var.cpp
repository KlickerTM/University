// Task_first_var for lab3
// Variant 4
#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	// Ограничения на значения параметров
	// a - b ≠ 0;  b + x ≠ 0; a ≠ 0; sin a * x = [-1;0) V (0;1]; (a + x) / (b + x) > 0; tan(a * x / 2) > 0;
	setlocale(LC_ALL, "Russian");
	double a = 12.5, b = 1.3; // Сталые переменные 
	double t1, t2; // Переменные с результатом
	double temp1, temp2; // Переменные промежуточного результата
	double x = 6.6, y = 1.1; //Изменил x на 6.6 чтоб подходил под ограничения
	/*double x, y;
	printf("Введите x, y =");
	scanf("%lf %lf", &x, &y);*/
	temp1 = a - b;
	temp2 = b + x;
	t1 = b / temp1 * temp2 - a / pow(temp1, 2) * log((a + x) * temp2);
	temp1 = a * x;
	t2 = (log(tan(temp1 / 2)) - (1 / sin(temp1))) / a;
	printf("t1 = %lg\n", t1); printf("t2 = %lg\n", t2);
	system("pause");
	return 0;
}
