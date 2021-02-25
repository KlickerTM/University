// Task_pack for lab4
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
	/* ввод составных частей */
	printf("Введите направление передачи (0 / 1) >");
	scanf("%d", &d);
	printf("Введите регистр адреса 1-го операнда (0 - 15) >");
	scanf("%d", &r);
	printf("Введите регистр адреса 2-го операнда (0 - 15) >");
	scanf("%d", &a);
	/* формирование упакованного кода */
	UnitFormComand = 0x71 << 9;
	UnitFormComand |= ((unsigned int)d & 1) << 8;
	UnitFormComand |= ((unsigned int)r & 0xF) << 4;
	UnitFormComand |= (unsigned int)a & 0xF;
	/* вывод результата */
	printf("\nФормат команды загрузки/сохранения = %04x\n", UnitFormComand);
	system("pause");
	return 0;
}

