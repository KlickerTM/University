// Task for lab5_A
#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Ukr");
	double a, b, c;
	do
	{
		cout << "Уведiть значення (a): ";
		cin >> a;
		if (a == 0)
		{
			cout << "Значення (a) не може дорiвнювати 0." << endl;
		}//if_a==0
	} while (a == 0);
	cout << "Уведiть значення (b): ";
	cin >> b;
	cout << "Уведiть значення (c): ";
	cin >> c;
	double D = b * b - 4 * a * c;
	if (D < 0)
	{
		cout << "Рiвняння коренiв не має" << endl;
	}//if_D<0
	else if (D == 0)
	{
		double x = -b / 2 * a;
		cout << "Рiвняння має один корiнь: " << x << endl;
	}//if_D==0
	else
	{
		double x1 = (-b + sqrt(D)) / (2 * a);
		double x2 = (-b - sqrt(D)) / (2 * a);
		cout << "Рiвняння має два коренi: " << x1 << " " << x2 << endl;
	}//if_D>0
	system("pause");
	return 0;
}

