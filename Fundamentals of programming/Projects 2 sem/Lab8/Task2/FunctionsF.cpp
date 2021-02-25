#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <cstdlib>
#include <iostream>
#include <windows.h>
#include <string>
#include "FunctionsF.h"
#include "Lib.h"

#define FIWIE "d:\\My main File\\������\\������ �������������\\������� �� ���������������� 2 ���\\Lab8\\Task2\\numbers.txt\0"

using namespace std;

void InputListToFile(struct List* Begin)
{
	struct List *Current = Begin, *Previos = Current;
	char fname[200] = FIWIE;
	int N;
	bool pass;
	FILE* f; // ���� �����
	puts("\n�������� �����");

	if ((f = fopen(fname, "wt")) == NULL)
	{
		cout << "������ �������� ����� ��� ������" << endl;
		system("pause");
		exit(0);
	}
	
	if (Begin == NULL)
	{
		cout << "������ ����" << endl;
		return;
	}
	while (Current)
	{
		fprintf(f, "%-12s %-11u %-8.2lf %-5.2lf\n", Current->name.c_str(), Current->kol, Current->time1, Current->time2);;
		Current = Current->Next;
	}
	printf("\n");
	fclose(f); // ������� ����
}

struct List* OutputListFromFile(void)
{
	struct List* Begin = NULL, * Previos = NULL, * Current = NULL;
	char fname[200] = FIWIE;
	int N;
	bool pass;
	FILE* f; // ���� �����
	char dop[100];
	puts("\n�������� �����\n");

	if ((f = fopen(fname, "rt")) == NULL)
	{
		cout << "������ �������� �����" << endl;
		system("pause");
		exit(0);
	}

	while (true)
	{
		Current = new List;
		if (Begin == NULL)
			Begin = Current;
		else
			Previos->Next = Current;

		Previos = Current;
		fscanf(f, "%s", &dop);
		Current->name = dop;
		fscanf(f, "%u %lf %lf", &Current->kol, &Current->time1, &Current->time2);
		if (feof(f)) break;
		printf("\n%-12s %-11u %-8.2lf %-5.2lf\n", Current->name.c_str(), Current->kol, Current->time1, Current->time2);
	}
	printf("\n");
	fclose(f); // ������� ����
	Previos->Next = NULL;
	return Begin;
}