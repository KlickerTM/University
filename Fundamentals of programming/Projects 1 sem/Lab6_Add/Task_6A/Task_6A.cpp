// Task for lab6_A
#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <math.h> 
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL)); //Рандом от текущего времени
	int n = 0; // Число попыток
	long number_hum, number_comp; 
	number_comp = rand() % 2001 - 1000; // -1000 до 1000
	cout << "Компьютер загадал число от -1000 до 1000\n" << "Угадайте его" << endl;
	//cout << "Читы:" << number_comp;
	do
	{
		cout << "\n";
		cout << "Введите ваше число: ";
		cin >> number_hum;
		n++;
		if (number_hum > number_comp)
		{
			cout << "Ваше число больше чем загаданное" << endl;
		}
		if (number_hum < number_comp)
		{
			cout << "Ваше число меньше чем загаданное" << endl;
		}
	} while (number_hum != number_comp);
	cout << "Поздравляю вы угадали!\n\n" << "Число попыток которое вы на это потратили: " << n << endl;
	system("pause");
	return 0;
}