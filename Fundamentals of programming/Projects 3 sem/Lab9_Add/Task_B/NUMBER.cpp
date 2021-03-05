#include "NUMBER.h"

string NUMBER::get()
{
	return this->Number;
}

void NUMBER::set(string Number)
{
	this->Number = Number;
}

void NUMBER::show()
{
	cout << "Number:" << this->Number << ". ";
}

NUMBER::NUMBER(string Number)
{
	this->Number = Number;
}