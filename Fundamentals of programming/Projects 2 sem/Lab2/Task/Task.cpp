#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <windows.h>
#include "Fill.h"
#include "Lib.h"

using namespace std;

#define DEBUG
lib lab[N], tmp;

bool fpass(bool pass, int a)
{
#ifdef DEBUG
	cout << endl;
	cout << __TIME__ << " " << __DATE__ << endl;
	cout << __FILE__ << " " << __FUNCTION__ << endl;
	cout << endl;
#endif // DEBUG
	if (a == 0 || a == 1)
	{
		pass = false;
	}
	else
	{
		pass = true;
		cout << "Вам нужно ввести 1 или 0" << endl << endl;
	}
#ifdef DEBUG
	cout << endl;
	cout << __TIME__ << " " << __DATE__ << endl;
	cout << __FILE__ << " " << __FUNCTION__ << endl;
	cout << endl;
#endif // DEBUG
	return pass;
}

void sort(lib lab[])
{
#ifdef DEBUG
	cout << endl;
	cout << __TIME__ << " " << __DATE__ << endl;
	cout << __FILE__ << " " << __FUNCTION__ << endl;
	cout << endl;
#endif // DEBUG
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (lab[i].kol > lab[j].kol)
			{
				tmp = lab[i];
				lab[i] = lab[j];
				lab[j] = tmp;
			}
		}
	}
#ifdef DEBUG
	cout << endl;
	cout << __TIME__ << " " << __DATE__ << endl;
	cout << __FILE__ << " " << __FUNCTION__ << endl;
	cout << endl;
#endif // DEBUG
}

void write(lib lab[])
{
#ifdef DEBUG
	cout << endl;
	cout << __TIME__ << " " << __DATE__ << endl;
	cout << __FILE__ << " " << __FUNCTION__ << endl;
	cout << endl;
#endif // DEBUG
	cout << "---------------------------------------------------------------------------------------------------------------------\n";
	cout << "|Среднее время которое занимает прочтение одной книги в оригинале и в коротком варианте (час)                       |\n";
	cout << "|-------------------------------------------------------------------------------------------------------------------|\n";
	cout << "|Название книги|Количество страниц книги|Среднее время прч. в оригинале(час)|Среднее время прч. в кор. варианте(час)|\n";
	for (int i = 0; i < N; i++)
	{
		cout << "|--------------|------------------------|-----------------------------------|---------------------------------------|\n";
		printf_s("|%-14s|%-24u|%-35.2lf|%-39.2lf|\n", lab[i].name.c_str(), lab[i].kol, lab[i].time1, lab[i].time2);
	}
	cout << "---------------------------------------------------------------------------------------------------------------------\n";
#ifdef DEBUG
	cout << endl;
	cout << __TIME__ << " " << __DATE__ << endl;
	cout << __FILE__ << " " << __FUNCTION__ << endl;
	cout << endl;
#endif // DEBUG
}


int main() {
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
#ifdef DEBUG
	cout << endl;
	cout << __TIME__ << " " << __DATE__ << endl;
	cout << __FILE__ << " " << __FUNCTION__ << endl;
	cout << endl;
#endif // DEBUG
	int a, b, c;
	bool pass = false;
	while (true)
	{
		cout << "МЕНЮ" << endl << endl;
		cout << "Как вы хотите заполнить список структур?" << endl;
		do
		{
			cout << "Введите 0 если хотите ввести с экрана" << endl;
			cout << "Введите 1 если хотите заполнить случайным образом" << endl;
			cin >> a;
		} while (fpass(pass, a));
		if (a == 0)
		{
			input(lab);
		}
		else if (a == 1)
		{
			input_rand(lab);
		}
		do
		{
			cout << "Какие действия вы хотите провести над структурами?" << endl;
			cout << "Введите 0 если хотите отсортировать структуру" << endl;
			cout << "Введите 1 если хотите печатать структуру" << endl;
			cin >> b;
		} while (fpass(pass, b));
		if (b == 0)
		{
			do
			{
				sort(lab);
				cout << "Хотите ли вы напечатать структуру (0-Нет, 1-Да)" << endl;
				cin >> c;
			} while (fpass(pass, c));
			if (c)
			{
				write(lab);
			}
		}
		else if (b == 1)
		{
			write(lab);
		}
		system("pause");
		system("cls");
	}
#ifdef DEBUG
	cout << endl;
	cout << __TIME__ << " " << __DATE__ << endl;
	cout << __FILE__ << " " << __FUNCTION__ << endl;
	cout << endl;
#endif // DEBUG
}