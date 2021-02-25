#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <cstdlib>
#include <iostream>
#include <windows.h>
#include <string>
#include "Functions.h"
#include "Lib.h"

using namespace std;

struct List* CreateList()
{
	struct List* Begin = NULL, * Previos = NULL, * Current = NULL;

	char Ok = 'y';
	while (Ok == 'y')
	{
		cout << "�������: �������� �����, ���������� ������� �����, ������� ����� ��������� � ��������� (���), ������� ����� ��������� � �������� �������� (���)\n";
		Current = new List;
		if (Begin == NULL)
			Begin = Current;
		else
			Previos->Next = Current;

		Previos = Current;
		cin >> Current->name;
		cin >> Current->kol;
		cin >> Current->time1;
		cin >> Current->time2;
		cout << "����������? (y/n)" << endl;
		cin >> Ok;
	}
	Previos->Next = NULL;
	return Begin;
}

struct List* CreateListRandom()
{
	struct List* Begin = NULL, * Previos = NULL, * Current = NULL;
	int N;
	cout << "������� �������� ����: ";
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		Current = new List;
		if (Begin == NULL)
			Begin = Current;
		else
			Previos->Next = Current;

		Previos = Current;

		Current->name = "Book" + to_string(rand() % 500 + 1); // 1 - 500
		Current->kol = rand() % 653 + 124;
		Current->time1 = Current->kol / (rand() % 40 + 11);
		Current->time2 = Current->time1 / (rand() % 2 + 2);
	}
	Previos->Next = NULL;
	return Begin;
}

void DisplayList(struct List* Begin)
{
	struct List* Current = Begin;
	if (Begin == NULL)
	{
		printf("������ ����\n");
		return;
	}
	printf("\n��� ����� � ������:\n");
	while (Current)
	{
		printf("%-12s %-11u %-8.2lf %-5.2lf\n", Current->name.c_str(), Current->kol, Current->time1, Current->time2);;
		Current = Current->Next;
	}
	printf("\n");
}

void DisplayCriterionList(struct List* Begin)
{
	struct List* Current = Begin, * Previos = Current;
	if (Begin == NULL)
	{
		printf("������ ����\n");
		return;
	}
	short Criterion;
	printf("\n������� ����� �������� ��� ������ �� ����:"
		"\n 1 - ��������"
		"\n 2 - ���������� �������"
		"\n 3 - ������� ����� ��������� � ���������"
		"\n 4 - ������� ����� ��������� � �������� ��������\n");
	cin >> Criterion;
	string NumberTag;
	unsigned int NumberTag1;
	double NumberTag2;
	double NumberTag3;
	switch (Criterion)
	{
	case 1:
		system("cls");
		cout << "\n������� �������� ����� ��� ������� �: ";
		cin >> NumberTag;
		while (Current)
		{
			if (Current->name == NumberTag)
			{
				printf("%-12s %-11u %-8.2lf %-5.2lf\n", Current->name.c_str(), Current->kol, Current->time1, Current->time2);
				Current = Current->Next;
			}
			else
			{
				Previos = Current;
				Current = Current->Next;
			}
		}
		break;
	case 2:
		system("cls");
		cout << "\n������� ���������� ������� ����� ��� ������� �: ";
		cin >> NumberTag1;
		while (Current)
		{
			if (Current->kol == NumberTag1)
			{
				printf("%-12s %-11u %-8.2lf %-5.2lf\n", Current->name.c_str(), Current->kol, Current->time1, Current->time2);
				Current = Current->Next;
			}
			else
			{
				Previos = Current;
				Current = Current->Next;
			}
		}
		break;
	case 3:
		system("cls");
		cout << "\n������� ������� ����� ��������� � ��������� ����� ��� ������� �: ";
		cin >> NumberTag2;
		while (Current)
		{
			if (Current->time1 == NumberTag2)
			{
				printf("%-12s %-11u %-8.2lf %-5.2lf\n", Current->name.c_str(), Current->kol, Current->time1, Current->time2);
				Current = Current->Next;
			}
			else
			{
				Previos = Current;
				Current = Current->Next;
			}
		}
		break;
	case 4:
		system("cls");
		cout << "\n������� ������� ����� ��������� � �������� �������� ����� ��� ������� �: ";
		cin >> NumberTag3;
		while (Current)
		{
			if (Current->time2 == NumberTag3)
			{
				printf("%-12s %-11u %-8.2lf %-5.2lf\n", Current->name.c_str(), Current->kol, Current->time1, Current->time2);
				Current = Current->Next;
			}
			else
			{
				Previos = Current;
				Current = Current->Next;
			}
		}
		break;
	default:
		system("cls");
		printf("\n������������ ����!!!\n");
		break;
	}
}

void RemoveTermTag(struct List* Begin)
{
	struct List* Current = Begin, * Previos = Current;
	string NumberTag;
	cout << "\n������� �������� ����� ��� �� ������ ������: ";
	cin >> NumberTag;
	while (Current)
	{
		if (Current->name == NumberTag)
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

void AddTermTag(struct List* Begin)
{
	struct List* Current = Begin, * Previos = Current;
	string NumberTag;
	printf("\n������� �������� ����� ����� ������� �� ������ �������� �����: ");
	cin >> NumberTag;
	while (Current)
	{
		if (Current->name == NumberTag)
		{
			Previos = Current;
			Current = new List;
			Current->Next = Previos->Next;
			Previos->Next = Current;
			cout << "�������: �������� �����, ���������� ������� �����, ������� ����� ��������� � ��������� (���), ������� ����� ��������� � �������� �������� (���)\n";
			cin >> Current->name;
			cin >> Current->kol;
			cin >> Current->time1;
			cin >> Current->time2;
			break;
		}
		else
		{
			Previos = Current;
			Current = Current->Next;
		}
	}
}

void SortKol(struct List* Begin)
{
	struct List* Current = Begin, * Previos = Current;
	int l = 0;
	while (Current)
	{
		Previos = Current;
		Current = Current->Next;
		l++;
	}
	Current = Begin, Previos = Current;
	string nametmp;
	unsigned int koltmp;
	double time1tmp;
	double time2tmp;
	for (int i = 0; i < l; i++)
	{
		Current = Begin, Previos = Current;
		while (Current)
		{
			if (Current->kol > Previos->kol)
			{
				nametmp = Current->name;
				koltmp = Current->kol;
				time1tmp = Current->time1;
				time2tmp = Current->time2;

				Current->name = Previos->name;
				Current->kol = Previos->kol;
				Current->time1 = Previos->time1;
				Current->time2 = Previos->time2;

				Previos->name = nametmp;
				Previos->kol = koltmp;
				Previos->time1 = time1tmp;
				Previos->time2 = time2tmp;

				Previos = Current;
				Current = Current->Next;
			}
			else
			{
				Previos = Current;
				Current = Current->Next;
			}
		}
	}
}

void FreeList(struct List** Begin)
{
	struct List* Current = *Begin;
	while (Current)
	{
		*Begin = (*Begin)->Next;
		Current = NULL;
		Current = *Begin;
	}
}