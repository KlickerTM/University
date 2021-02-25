// Task_8A

#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <stdio.h>
#include <string>
#include <windows.h>

using namespace std;

bool mesta[10];


bool vopros()
{
	string otv_pol;
	bool rez;
	bool prov;
	do
	{
		cout << "Курите?" << endl;
		cin >> otv_pol;
		if (otv_pol == "Да")
		{
			prov = false;
			if (mesta[4] == false)
			{
				rez = true;
			}
			else
			{
				cout << "Места для курящих закончились" << endl;
				prov = true;
			}
		}
		else if (otv_pol == "Нет")
		{
			prov = false;
			if (mesta[9] == false)
			{
				rez = false;
			}
			else
			{
				cout << "Места для не курящих закончились" << endl;
				prov = true;
			}
		}
		else
		{
			cout << "Надо ответить именно (Да) или (Нет)" << endl;
			prov = true;
		}
	} while (prov);
	return rez;
}

void bron(bool rez)
{
	if (rez == true)
	{
		for (int i = 0; i < 5; i++)
		{
			if (mesta[i] == false)
			{
				mesta[i] = true;
				cout << "Вы забронировали место под номером " << i+1 << endl;
				break;
			}
		}
	}
	else
	{
		for (int i = 5; i < 10; i++)
		{
			if (mesta[i] == false)
			{
				mesta[i] = true;
				cout << "Вы забронировали место под номером " << i+1 << endl;
				break;
			}
		}
	}
}

int main()
{
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	for (int i = 0; i < 10; i++)
	{
		mesta[i] = false;
	}
	do
	{
		if (mesta[4] == true && mesta[9] == true)
		{
			cout << "Все места забронированы" << endl;
			break;
		}
		bron(vopros());
	} while (true);
	cout << endl;
	system("pause");
	return 0;
}