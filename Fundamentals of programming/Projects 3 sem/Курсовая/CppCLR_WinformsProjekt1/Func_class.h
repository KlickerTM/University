#pragma once

#include <string>
#include <ctime>
#include <iostream>
#include <fstream>
#include "Math.h"
using namespace std;

class Stavka
{
	int money;

public:
	Stavka() { this->money = 0; }

	void set_money(int);
	int get_money();
};

class Win : public Stavka
{
	int totalwin;

public:
	int calcule_win(int);
};