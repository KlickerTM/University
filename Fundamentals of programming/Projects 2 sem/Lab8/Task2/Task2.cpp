#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <cstdlib>
#include <iostream>
#include <windows.h>
#include <string>
#include <ctime>
#include "Functions.h"
#include "FunctionsF.h"
#include "Lib.h"

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	struct List* Begin = NULL;
	short Key;
	while (true)
	{
		printf("\nВведите число операции для выполнения:"
			"\n 1 - Сформировать список вручную"
			"\n 2 - Сформировать список случайно"
			"\n 3 - Посмотреть содержания списка"
			"\n 4 - Посмотреть содержания списка по критерию"
			"\n 5 - Убрать книгу из списка по названию"
			"\n 6 - Добавить книгу после любой книги"
			"\n 7 - Сортировка списка по количеству страниц"
			"\n 8 - Печать из списка в файл"
			"\n 9 - Печать из файла в список и в консоль"
			"\n 0 - Закончить работу\n");
		cin >> Key;
		system("cls");
		switch (Key)
		{
		case 1:
			system("cls");
			Begin = CreateList();
			system("pause");
			system("cls");
			break;
		case 2:
			system("cls");
			Begin = CreateListRandom();
			system("pause");
			system("cls");
			break;
		case 3:
			system("cls");
			DisplayList(Begin);
			system("pause");
			system("cls");
			break;
		case 4:
			system("cls");
			DisplayCriterionList(Begin);
			system("pause");
			system("cls");
			break;
		case 5:
			system("cls");
			RemoveTermTag(Begin);
			system("pause");
			system("cls");
			break;
		case 6:
			system("cls");
			AddTermTag(Begin);
			system("pause");
			system("cls");
			break;
		case 7:
			system("cls");
			SortKol(Begin);
			system("pause");
			system("cls");
			break;
		case 8:
			system("cls");
			InputListToFile(Begin);
			system("pause");
			system("cls");
			break;
		case 9:
			system("cls");
			Begin = OutputListFromFile();
			system("pause");
			system("cls");
			break;
		case 0:
			FreeList(&Begin);
			DisplayList(Begin);
			system("pause");
			return 0;
		default:
			system("cls");
			printf("\nIncorrect input!!! Try again!!!\n");
			system("pause");
			system("cls");
			break;
		}
	}
}