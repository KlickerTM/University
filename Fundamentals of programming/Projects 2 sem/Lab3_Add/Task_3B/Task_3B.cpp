#include "stdafx.h"
#include <iostream>
#include <ctime>
using namespace std;

#define N 20

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	do
	{
		int A[N], b = 0, c = 0, d = 0;
		cout << "Начальный массив:" << endl;
		for (int i = 0; i < N; i++)
		{
			A[i] = rand() % 21 - 10; //-10 - 10
			cout << A[i] << " ";
			if (A[i] < 0)
			{
				b++;
			}
			else if (A[i] > 0)
			{
				c++;
			}
			else
			{
				d++;
			}
		}
		cout << endl << endl;
		int* B = new int[b];
		int* C = new int[c];
		int* D = new int[d];
		int* B_start = B;
		int* C_start = C;
		int* D_start = D;
		for (int i = 0; i < N; i++)
		{
			if (A[i] < 0)
			{
				*B = A[i];
				B++;
			}
			else if (A[i] > 0)
			{
				*C = A[i];
				C++;
			}
			else
			{
				*D = A[i];
				D++;
			}
		}
		for (int i = 0; i < N; i++)
		{
			if (D != D_start)
			{
				D--;
				A[i] = *D;
			}
			else if (B != B_start)
			{
				B--;
				A[i] = *B;
			}
			else if (C != C_start)
			{
				C--;
				A[i] = *C;
			}
		}
		// Вывод массивов B, C, D
		cout << "Массив B: " << endl;
		for (int i = 0; i < b; i++)
		{
			cout << B[i] << " ";
		}
		cout << endl;
		cout << "Массив C: " << endl;
		for (int i = 0; i < c; i++)
		{
			cout << C[i] << " ";
		}
		cout << endl;
		cout << "Массив D: " << endl;
		for (int i = 0; i < d; i++)
		{
			cout << D[i] << " ";
		}
		cout << endl << endl;
		// Вывод окончательного массива
		cout << "Конечный массив: " << endl;
		for (int i = 0; i < N; i++)
		{
			cout << A[i] << " ";
		}
		cout << endl << endl;
		// Конец программы
		system("pause");
		system("cls");
		delete[] B;
		delete[] C;
		delete[] D;
	} while (true);
	return 0;
}

