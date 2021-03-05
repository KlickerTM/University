#include "header.h"

bool proverka1(int* temp) 
{
	int test[] = { -3, 5, 6 };
	for (int i = 0; i < 3; i++)
		if (temp[i] == test[i])
			continue;
		else
			return false;
	return true;
}

bool proverka2(double* a) 
{
	double test[] = { -3.3, 5.3, 6.3 };
	for (int i = 0; i < 3; i++)
		if (a[i] == test[i])
			continue;
		else
			return false;
	return true;
}

bool proverka3(char* a) 
{
	char test[] = { 'a', 'c','p' };
	for (int i = 0; i < 3; i++)
		if (a[i] == test[i])
			continue;
		else
			return false;
	return true;
}