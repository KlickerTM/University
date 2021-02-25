#include "stdafx.h"
#include <iostream>
#include <ctime>
#include "Funct.h"

using namespace std;

#define N 10

void fill(double Arr[])
{
	for (int i = 0; i < N; i++)
	{
		*(Arr + i) = rand() % 21; // 0 - 20
	}
}

void write(double Arr[])
{
	cout << "���������� ������:" << endl;
	for (int i = 0; i < N; i++)
	{
		cout << *(Arr + i) << " ";
	}
	cout << endl << endl;
}

void task(double Arr[])
{
	double *ad_max = Arr, *ad_min = Arr;
	for (int i = 0; i < N; i++)
	{
		if (*(Arr + i) > *ad_max)
		{
			ad_max = (Arr + i);
		}
		if (*(Arr + i) < *ad_min)
		{
			ad_min = (Arr + i);
		}
	}
	cout << "������������ �������: " << *ad_max << endl;
	cout << "����������� �������: " << *ad_min << endl;
	double att;
	if (*ad_min == 0)
	{
		cout << "������ ����� ��������� ����. � ���. ��� ��� ����������� ������� ����� 0 " << endl << endl;
	}
	else
	{
		att = *ad_max / *ad_min;
		cout << "��������� ������������� �������� � ������������ �����: " << att << endl << endl;
	}
	int k = 0;
	for (int i = 0; i < N; i++)
	{
		if (*(Arr + i) > *ad_min && *(Arr + i) < *ad_max)
		{
			k++;
		}
	}
	double* Narr = new double[k];
	for (int i = 0, j = 0; i < N; i++)
	{
		if (*(Arr + i) > *ad_min && *(Arr + i) < *ad_max)
		{
			Narr[j] = *(Arr + i);
			j++;
		}
	}
	cout << "���������� ������:" << endl;
	for (int i = 0; i < k; i++)
	{
		cout << *(Narr + i) << " ";
	}
	cout << endl << endl;
	delete[] Narr;
}

