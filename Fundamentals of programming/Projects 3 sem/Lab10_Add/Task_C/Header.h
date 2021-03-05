#pragma once
#include <vector>
#include <iostream>
#include <conio.h> 
#include <windows.h>
#include <ctime>
using namespace std;

class Sum
{
	int x, y, s = 0;

public:
	Sum()
	{
		x = 15;
		y = 3;
	}

	Sum(int x, int y)
	{
		this->x = x;
		this->y = y;
	}

	void init(int x, int y)
	{
		this->x = x;
		this->y = y;
	}

	void SumShow()
	{
		s = x + y;
		cout << "x = " << x << " " << "y = " << y << "\n Ñóììà:" << s << endl;
	}

private:

};