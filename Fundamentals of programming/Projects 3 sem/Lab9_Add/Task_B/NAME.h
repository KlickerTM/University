#pragma once
#include "Header.h"

class NAME
{
private:
	string Name;
public:
	friend bool operator<(const NAME& fist, const NAME& second);
	friend bool operator ==(NAME& name, string& str);
	string get();
	void set(string);
	void show();
	NAME(string);
	friend ostream& operator<< (ostream& out, const NAME& point) {
		out << point.Name;
		return out;
	}
};
