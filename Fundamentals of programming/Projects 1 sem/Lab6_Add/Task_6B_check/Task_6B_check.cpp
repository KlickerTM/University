// Task for lab6_A
#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <math.h> 
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int N = 10;
	int mark = 0;
	for (int i = 1; i <= N; i++)
	{
		long rand_number = rand() % 8 + 1; // 1-8
		long cof = rand() % 8 + 2; // 2-9
		int number;
		switch (rand_number)
		{
		case 1:
			cout << "2 x " << cof << " = ";
			cin >> number;
			if (number == 2 * cof)
			{
				mark++;
			}
			break;
		case 2:
			cout << "3 x " << cof << " = ";
			cin >> number;
			if (number == 3 * cof)
			{
				mark++;
			}
			break;
		case 3:
			cout << "4 x " << cof << " = ";
			cin >> number;
			if (number == 4 * cof)
			{
				mark++;
			}
			break;
		case 4:
			cout << "5 x " << cof << " = ";
			cin >> number;
			if (number == 5 * cof)
			{
				mark++;
			}
			break;
		case 5:
			cout << "6 x " << cof << " = ";
			cin >> number;
			if (number == 6 * cof)
			{
				mark++;
			}
			break;
		case 6:
			cout << "7 x " << cof << " = ";
			cin >> number;
			if (number == 7 * cof)
			{
				mark++;
			}
			break;
		case 7:
			cout << "8 x " << cof << " = ";
			cin >> number;
			if (number == 8 * cof)
			{
				mark++;
			}
			break;
		case 8:
			cout << "9 x " << cof << " = ";
			cin >> number;
			if (number == 9 * cof)
			{
				mark++;
			}
			break;
		}
	}
	cout << "Ваша оценка: " << mark << " из " << N << endl;
	system("pause");
	return 0;
}
