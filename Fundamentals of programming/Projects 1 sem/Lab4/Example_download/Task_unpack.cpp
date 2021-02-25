// Task_unpack for lab4
// Variant 4
#include "stdafx.h"
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	char d; // направление передачи
	char r; // регистр адреса 1-го операнда
	char a; // регистр адреса 2-го операнда
	unsigned int UnitFormComand; // Формат команды
	/* ввод формата команды */
	printf("Введите формат команды загрузки/сохранения \n");
	printf("(16-ричное число от 0 до 0xE3FF) >");
	scanf("%x", &UnitFormComand);
	/* Выделение составных частей */
	d = (UnitFormComand >> 8) & 1;
	r = (UnitFormComand >> 4) & 0xF;
	a = UnitFormComand & 0xF;
	/* вывод результатов */
	putchar('\n');
	printf("направление передачи = %d\n", d);
	printf("регистр адреса 1-го операнда = %d\n", r);
	printf("регистр адреса 2-го операнда = %d\n", a);
	system("pause");
	return 0;
}