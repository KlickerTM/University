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
	int mark = 0;
	for (int i = 1; i <= 10; i++)
	{
		long rand_number = rand() % 65;
		int number;
		switch (rand_number)
		{
		case 1:
			cout << "2 x 2 = ";
			cin >> number;
			if (number == 4)
			{
				mark++;
			}
			break;
		case 2:
			cout << "2 x 3 = ";
			cin >> number;
			if (number == 6)
			{
				mark++;
			}
			break;
		case 3:
			cout << "2 x 4 = ";
			cin >> number;
			if (number == 8)
			{
				mark++;
			}
			break;
		case 4:
			cout << "2 x 5 = ";
			cin >> number;
			if (number == 10)
			{
				mark++;
			}
			break;
		case 5:
			cout << "2 x 6 = ";
			cin >> number;
			if (number == 12)
			{
				mark++;
			}
			break;
		case 6:
			cout << "2 x 7 = ";
			cin >> number;
			if (number == 14)
			{
				mark++;
			}
			break;
		case 7:
			cout << "2 x 8 = ";
			cin >> number;
			if (number == 16)
			{
				mark++;
			}
			break;
		case 8:
			cout << "2 x 9 = ";
			cin >> number;
			if (number == 18)
			{
				mark++;
			}
			break;
		case 9:
			cout << "3 x 2 = ";
			cin >> number;
			if (number == 6)
			{
				mark++;
			}
			break;
		case 10:
			cout << "3 x 3 = ";
			cin >> number;
			if (number == 9)
			{
				mark++;
			}
			break;
		case 11:
			cout << "3 x 4 = ";
			cin >> number;
			if (number == 12)
			{
				mark++;
			}
			break;
		case 12:
			cout << "3 x 5 = ";
			cin >> number;
			if (number == 15)
			{
				mark++;
			}
			break;
		case 13:
			cout << "3 x 6 = ";
			cin >> number;
			if (number == 18)
			{
				mark++;
			}
			break;
		case 14:
			cout << "3 x 7 = ";
			cin >> number;
			if (number == 21)
			{
				mark++;
			}
			break;
		case 15:
			cout << "3 x 8 = ";
			cin >> number;
			if (number == 24)
			{
				mark++;
			}
			break;
		case 16:
			cout << "3 x 9 = ";
			cin >> number;
			if (number == 27)
			{
				mark++;
			}
			break;
		case 17:
			cout << "4 x 2 = ";
			cin >> number;
			if (number == 8)
			{
				mark++;
			}
			break;
		case 18:
			cout << "4 x 3 = ";
			cin >> number;
			if (number == 12)
			{
				mark++;
			}
			break;
		case 19:
			cout << "4 x 4 = ";
			cin >> number;
			if (number == 16)
			{
				mark++;
			}
			break;
		case 20:
			cout << "4 x 5 = ";
			cin >> number;
			if (number == 20)
			{
				mark++;
			}
			break;
		case 21:
			cout << "4 x 6 = ";
			cin >> number;
			if (number == 24)
			{
				mark++;
			}
			break;
		case 22:
			cout << "4 x 7 = ";
			cin >> number;
			if (number == 28)
			{
				mark++;
			}
			break;
		case 23:
			cout << "4 x 8 = ";
			cin >> number;
			if (number == 32)
			{
				mark++;
			}
			break;
		case 24:
			cout << "4 x 9 = ";
			cin >> number;
			if (number == 36)
			{
				mark++;
			}
			break;
		case 25:
			cout << "5 x 2 = ";
			cin >> number;
			if (number == 10)
			{
				mark++;
			}
			break;
		case 26:
			cout << "5 x 3 = ";
			cin >> number;
			if (number == 15)
			{
				mark++;
			}
			break;
		case 27:
			cout << "5 x 4 = ";
			cin >> number;
			if (number == 20)
			{
				mark++;
			}
			break;
		case 28:
			cout << "5 x 5 = ";
			cin >> number;
			if (number == 25)
			{
				mark++;
			}
			break;
		case 29:
			cout << "5 x 6 = ";
			cin >> number;
			if (number == 30)
			{
				mark++;
			}
			break;
		case 30:
			cout << "5 x 7 = ";
			cin >> number;
			if (number == 35)
			{
				mark++;
			}
			break;
		case 31:
			cout << "5 x 8 = ";
			cin >> number;
			if (number == 40)
			{
				mark++;
			}
			break;
		case 32:
			cout << "5 x 9 = ";
			cin >> number;
			if (number == 45)
			{
				mark++;
			}
			break;
		case 33:
			cout << "6 x 2 = ";
			cin >> number;
			if (number == 12)
			{
				mark++;
			}
			break;
		case 34:
			cout << "6 x 3 = ";
			cin >> number;
			if (number == 18)
			{
				mark++;
			}
			break;
		case 35:
			cout << "6 x 4 = ";
			cin >> number;
			if (number == 24)
			{
				mark++;
			}
			break;
		case 36:
			cout << "6 x 5 = ";
			cin >> number;
			if (number == 30)
			{
				mark++;
			}
			break;
		case 37:
			cout << "6 x 6 = ";
			cin >> number;
			if (number == 36)
			{
				mark++;
			}
			break;
		case 38:
			cout << "6 x 7 = ";
			cin >> number;
			if (number == 42)
			{
				mark++;
			}
			break;
		case 39:
			cout << "6 x 8 = ";
			cin >> number;
			if (number == 48)
			{
				mark++;
			}
			break;
		case 40:
			cout << "6 x 9 = ";
			cin >> number;
			if (number == 54)
			{
				mark++;
			}
			break;
		case 41:
			cout << "7 x 2 = ";
			cin >> number;
			if (number == 14)
			{
				mark++;
			}
			break;
		case 42:
			cout << "7 x 3 = ";
			cin >> number;
			if (number == 21)
			{
				mark++;
			}
			break;
		case 43:
			cout << "7 x 4 = ";
			cin >> number;
			if (number == 28)
			{
				mark++;
			}
			break;
		case 44:
			cout << "7 x 5 = ";
			cin >> number;
			if (number == 35)
			{
				mark++;
			}
			break;
		case 45:
			cout << "7 x 6 = ";
			cin >> number;
			if (number == 42)
			{
				mark++;
			}
			break;
		case 46:
			cout << "7 x 7 = ";
			cin >> number;
			if (number == 49)
			{
				mark++;
			}
			break;
		case 47:
			cout << "7 x 8 = ";
			cin >> number;
			if (number == 56)
			{
				mark++;
			}
			break;
		case 48:
			cout << "7 x 9 = ";
			cin >> number;
			if (number == 63)
			{
				mark++;
			}
			break;
		case 49:
			cout << "8 x 2 = ";
			cin >> number;
			if (number == 16)
			{
				mark++;
			}
			break;
		case 50:
			cout << "8 x 3 = ";
			cin >> number;
			if (number == 24)
			{
				mark++;
			}
			break;
		case 51:
			cout << "8 x 4 = ";
			cin >> number;
			if (number == 32)
			{
				mark++;
			}
			break;
		case 52:
			cout << "8 x 5 = ";
			cin >> number;
			if (number == 40)
			{
				mark++;
			}
			break;
		case 53:
			cout << "8 x 6 = ";
			cin >> number;
			if (number == 48)
			{
				mark++;
			}
			break;
		case 54:
			cout << "8 x 7 = ";
			cin >> number;
			if (number == 56)
			{
				mark++;
			}
			break;
		case 55:
			cout << "8 x 8 = ";
			cin >> number;
			if (number == 64)
			{
				mark++;
			}
			break;
		case 56:
			cout << "8 x 9 = ";
			cin >> number;
			if (number == 72)
			{
				mark++;
			}
			break;
		case 57:
			cout << "9 x 2 = ";
			cin >> number;
			if (number == 18)
			{
				mark++;
			}
			break;
		case 58:
			cout << "9 x 3 = ";
			cin >> number;
			if (number == 27)
			{
				mark++;
			}
			break;
		case 59:
			cout << "9 x 4 = ";
			cin >> number;
			if (number == 36)
			{
				mark++;
			}
			break;
		case 60:
			cout << "9 x 5 = ";
			cin >> number;
			if (number == 45)
			{
				mark++;
			}
			break;
		case 61:
			cout << "9 x 6 = ";
			cin >> number;
			if (number == 54)
			{
				mark++;
			}
			break;
		case 62:
			cout << "9 x 7 = ";
			cin >> number;
			if (number == 63)
			{
				mark++;
			}
			break;
		case 63:
			cout << "9 x 8 = ";
			cin >> number;
			if (number == 72)
			{
				mark++;
			}
			break;
		case 64:
			cout << "9 x 9 = ";
			cin >> number;
			if (number == 81)
			{
				mark++;
			}
			break;
		}
	}
	cout << "Ваша оценка: " << mark << " из 10" << endl;
	system("pause");
	return 0;
}