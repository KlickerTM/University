// Task for lab5_B
#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	long k;
	cout << "Введите сколько у вас грибов: ";
	cin >> k;
	if (k < 11 || k > 14)
	{
		if (k % 10 == 1)
		{
			cout << "У вас " << k << " гриб" << endl;
		}
		else if (k % 10 >= 2 && k % 10 <= 4)
		{
			cout << "У вас " << k << " грибa" << endl;
		}
		else
		{
			cout << "У вас " << k << " грибов" << endl;
		}
	}// Все кроме 11-14
	else
	{
		cout << "У вас " << k << " грибов" << endl;
	}// Числа 11-14
	//printf("Введите сколько у вас грибов: ");
	//scanf("%d", &k);
	//if (k < 11 || k > 14)
	//{
	//	if (k % 10 == 1)
	//	{
	//		printf("У вас %d гриб\n", k);
	//	}
	//	else if (k % 10 >= 2 && k % 10 <= 4)
	//	{
	//		printf("У вас %d гриба\n", k);
	//	}
	//	else
	//	{
	//		printf("У вас %d грибов\n", k);
	//	}
	//}
	//else
	//{
	//	printf("У вас %d грибов\n", k);
	//}
	system("pause");
	return 0;
}