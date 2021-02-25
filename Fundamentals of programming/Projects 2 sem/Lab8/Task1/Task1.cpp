#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <cstdlib>
#include <iostream>
#include <windows.h>

#define TRUE 1

using namespace std;

struct List
{
	int x;
	struct List* Next;
};

struct List* CreateList(void);
void DisplayList(struct List*);
void RemoveTermBegin(struct List**);
void RemoveTermTag(struct List*);
void RemoveTermEnd(struct List*);
void AddTermBegin(struct List**);
void AddTermEnd(struct List*);
void AddTermTag(struct List*);
void FreeList(struct List**);

int main(void)
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	struct List *Begin = NULL;
	char Key;
	while (TRUE)
	{
		printf("\nEnter the number- the mode of operations with Lists : "
			   "\n 1 - FORMATION OF THE LIST"
			   "\n 2 - VIEWING OF CONTENTS OF THE LIST"
			   "\n 3 - REMOVE THE ELEMENT FROM THE BEGIN OF LIST"
			   "\n 4 - REMOVE THE ELEMENT FROM THE MIDLE OF LIST"
			   "\n 5 - REMOVE THE ELEMENT FROM THE END OF LIST"
			   "\n 6 - ADD THE ELEMENT IN THE BEGIN OF LIST"
			   "\n 7 - ADD THE ELEMENT IN THE END OF LIST"
			   "\n 8 - ADD THE ELEMENT AFTER ELEMENT - KEY OF LIST"
			   "\n 9 - END OF WORK\n");
		cin >> Key;
		system("cls");
		switch (Key)
		{
		case '1':
			system("cls");
			Begin = CreateList();
			system("pause");
			system("cls");
			break;
		case '2':
			system("cls");
			DisplayList(Begin);
			system("pause");
			system("cls");
			break;
		case '3':
			system("cls");
			RemoveTermBegin(&Begin);
			system("pause");
			system("cls");
			break;
		case '4':
			system("cls");
			RemoveTermTag(Begin);
			system("pause");
			system("cls");
			break;
		case '5':
			system("cls");
			RemoveTermEnd(Begin);
			system("pause");
			system("cls");
			break;
		case '6':
			system("cls");
			AddTermBegin(&Begin);
			system("pause");
			system("cls");
			break;
		case '7':
			system("cls");
			AddTermEnd(Begin);
			system("pause");
			system("cls");
			break;
		case '8':
			system("cls");
			AddTermTag(Begin);
			system("pause");
			system("cls");
			break;
		case '9':
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

struct List* CreateList(void)
{
	struct List *Begin = NULL, *Previos = NULL,
		*Current = NULL;

	char Ok = 'y';
	while (Ok == 'y')
	{
		printf("\nEnter the numbers of List: ");
		Current = (struct List*)malloc(sizeof(struct List));

		if (Begin == NULL)
			Begin = Current;
		else
			Previos->Next = Current;

		Previos = Current;
		cin >> Current->x;
		printf("Continue? (Y/N):");
		cin >> Ok;
	}
	Previos->Next = NULL;
	return Begin;
}

void DisplayList(struct List* Begin)
{
	struct List* Current = Begin;
	if (Begin == NULL)
	{
		printf("List is empty\n");
		return;
	}
	printf("\nThe List of numbers:\n");
	while (Current)
	{
		printf("%d ", Current->x);
		Current = Current->Next;
	}
	printf("\n");
}

void RemoveTermBegin(struct List** Begin)
{
	struct List** Current = Begin;
	*Begin = (*Current)->Next;
	Current = NULL;
}

void RemoveTermTag(struct List* Begin)
{
	struct List* Current = Begin, * Previos = Current;
	int NumberTag;
	printf("\nEnter number-key: ");
	cin >> NumberTag;
	while (Current)
	{
		if (Current->x == NumberTag)
		{
			Previos->Next = Current->Next;
			Current = NULL;
			Current = Previos->Next;
		}
		else
		{
			Previos = Current;
			Current = Current->Next;
		}
	}
}

void RemoveTermEnd(struct List* Begin)
{
	struct List* Current = Begin, * Previos = NULL;
	while (Current->Next)
	{
		Previos = Current;
		Current = Current->Next;
	}
	Previos->Next = NULL;
	Current = NULL;
}

void AddTermBegin(struct List** Begin)
{
	struct List* Current =

		(struct List*)malloc(sizeof(struct List));

	printf("\nEnter number: ");
	cin >> Current->x;
	Current->Next = *Begin;
	*Begin = Current;
}

void AddTermEnd(struct List* Begin)
{
	struct List* Current = Begin, * Previos = NULL;
	while (Current)
	{
		Previos = Current;
		Current = Current->Next;
	}
	Current = (struct List*)malloc(sizeof(struct List));
	Previos->Next = Current;
	printf("\nEnter the number:\n");
	cin >> Current->x;
	Current->Next = NULL;
}

void AddTermTag(struct List* Begin)
{
	struct List* Current = Begin, * Previos = Current;
	int NumberTag;
	printf("\nEnter number-tag: ");
	cin >> NumberTag;
	while (Current)
	{
		if (Current->x == NumberTag)
		{
			Previos = Current;
			Current =

				(struct List*)malloc(sizeof(struct List));
				Current->Next = Previos->Next;
			Previos->Next = Current;
			printf("\nEnter the number:\n");
			cin >> Current->x;
			break;
		}
		else
		{
			Previos = Current;
			Current = Current->Next;
		}
	}
}

void FreeList(struct List** Begin)
{
	struct List* Current = *Begin;
	while (Current)
	{
		*Begin = (*Begin)->Next;
		free(Current);
		Current = *Begin;
	}
}