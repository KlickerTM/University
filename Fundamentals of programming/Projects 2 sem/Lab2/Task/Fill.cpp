#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <windows.h>
#include "Fill.h"
#include "Lib.h"

using namespace std;

#define DEBUG

void input(lib lab[])
{
#ifdef DEBUG
	cout << endl;
	cout << __TIME__ << " " << __DATE__ << endl;
	cout << __FILE__ << " " << __FUNCTION__ << endl;
	cout << endl;
#endif // DEBUG
	for (int i = 0; i < N; i++) {
		cout << i + 1 << ": ";
		cout << "Введите: Название книги, Количество страниц книги, Среднее время прочтения в оригинале (час), Среднее время прочтения в коротком варианте (час)\n";
		cin >> lab[i].name;
		cin >> lab[i].kol;
		cin >> lab[i].time1;
		cin >> lab[i].time2;
	}
#ifdef DEBUG
	cout << endl;
	cout << __TIME__ << " " << __DATE__ << endl;
	cout << __FILE__ << " " << __FUNCTION__ << endl;
	cout << endl;
#endif // DEBUG
}

void input_rand(lib lab[])
{
#ifdef DEBUG
	cout << endl;
	cout << __TIME__ << " " << __DATE__ << endl;
	cout << __FILE__ << " " << __FUNCTION__ << endl;
	cout << endl;
#endif // DEBUG
	for (int i = 0; i < N; i++)
	{
		bool index = true;
		do {
			lab[i].name = "Book" + to_string(rand() % N + 1);
			for (int j = 0; j < N; j++)
			{
				if (i != j && lab[i].name == lab[j].name)
				{
					index = true; break;
				}
				else index = false;
			}
		} while (index);
		lab[i].kol = rand() % 653 + 124;
		lab[i].time1 = lab[i].kol / (rand() % 40 + 11);
		lab[i].time2 = lab[i].time1 / (rand() % 2 + 2);
	}
#ifdef DEBUG
	cout << endl;
	cout << __TIME__ << " " << __DATE__ << endl;
	cout << __FILE__ << " " << __FUNCTION__ << endl;
	cout << endl;
#endif // DEBUG
}