//Example for Lab2
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
	char name1[9], name2[9], name3[9];
	char sc1, sc2, sc3;
	unsigned short cnt1, cnt2, cnt3;
	float sq1, sq2, sq3;
	/* Введение фактических данных*/
	printf("1. Введите: название, школу, количество, площадь >");
	scanf("%s %c %d %f", name1, &sc1, &cnt1, &sq1);
	printf("2. Введите: название, школу, количество, площадь >");
	scanf("%s %c %d %f", name2, &sc2, &cnt2, &sq2);
	printf("3. Введите: название, школу, количество, площадь >");
	scanf("%s %c %d %f", name3, &sc3, &cnt3, &sq3);
	/* Вывод таблицы */
	/* вывод заголовков */
	printf("-----------------------------------------------\n");
	printf("|  Буддийские монастыри Японии периода Нара   |\n");
	printf("|---------------------------------------------|\n");
	printf("| Название | Школа | Количество|Площадь земли |\n");
	printf("|          |       |    монахов|    (га)      |\n");
	printf("|----------|-------|-----------|--------------|\n");
	/* вывод строк фактических данных */
	printf("| %8s |   %c   |       %3d | %-5.1f        |\n", name1, sc1, cnt1, sq1);
	printf("| %8s |   %c   |       %3d | %-5.1f        |\n", name2, sc2, cnt2, sq2);
	printf("| %8s |   %c   |       %3d | %-5.1f        |\n", name3, sc3, cnt3, sq3);
	/* вывод примечаний */
	printf("|---------------------------------------------|\n");
	printf("| Примечание: Т - Тэндай; С - Сингон;         |\n");
	printf("|             Д - Дзедзицу                    |\n");
	printf("-----------------------------------------------\n");
	system("pause");
	return 0;
}

