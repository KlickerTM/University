// Task for lab2
//Вариант 4
#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//Введение фактических даных
	const char *name1;
	name1 = "Фланец";
	const char *name2;
	name2 = "Переходник";
	const char *name3;
	name3 = "Станина";
	char tp1;
	tp1 = 'З';
	char tp2;
	tp2 = 'П';
	char tp3;
	tp3 = 'О';
	unsigned short cnt1;
	cnt1 = 3;
	unsigned short cnt2;
	cnt2 = 8;
	unsigned short cnt3;
	cnt3 = 1;
	unsigned long hg1;
	hg1 = 450;
	unsigned long hg2;
	hg2 = 74;
	unsigned long hg3;
	hg3 = 117050;
	/*char name1[10], name2[10], name3[10];
	char tp1, tp2, tp3;
	unsigned short cnt1, cnt2, cnt3;
	unsigned long hg1, hg2, hg3;
	printf("1. введите: наименование, тип, количество, вес 1 детали >");
	scanf("%s %c %d %d", name1, &tp1, &cnt1, &hg1);
	printf("2. введите: наименование, тип, количество, вес 1 детали >");
	scanf("%s %c %d %d", name2, &tp2, &cnt2, &hg2);
	printf("3. введите: наименование, тип, количество, вес 1 детали >");
	scanf("%s %c %d %d", name3, &tp3, &cnt3, &hg3);*/
	//Вывод таблицы
	//Вывод заголовков
	printf("-----------------------------------------------\n");
	printf("|            Ведомость деталей                |\n");
	printf("|---------------------------------------------|\n");
	printf("|Наименование|Тип  |Количество |Вес 1 детали  |\n");
	printf("|            |     |           |    (г)       |\n");
	printf("|------------|-----|-----------|--------------|\n");
	//вывод строк фактических данных
	printf("| %-10s | %-3c | %-9d | %-12d |\n", name1, tp1, cnt1, hg1);
	printf("| %-10s | %-3c | %-9d | %-12d |\n", name2, tp2, cnt2, hg2);
	printf("| %-10s | %-3c | %-9d | %-12d |\n", name3, tp3, cnt3, hg3);
	//вывод примечаний
	printf("|---------------------------------------------|\n");
	printf("|Примечание: принято такое кодирование типов: |\n");
	printf("|О-оригинальная, П-покупная, З-заимствованная |\n");
	printf("-----------------------------------------------\n");
	system("pause");
	return 0;
	//Пример
	//Фланец З 3 450
	//Переходник П 8 74
	//Станина О 1 117050
}
