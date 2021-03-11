#include "Func_class.h"

void Stavka::set_money(int money)
{
	this->money = money;
}

int Stavka::get_money()
{
	return this->money;
}

int Win::calcule_win(int n)
{
	this->totalwin = get_money() * n * 10;

	return this->totalwin;
}