#pragma once
#include <iostream>
using namespace std;

template <typename T> class my_class
{
	T key;
public:
	my_class(T key);
	T get();
	void set(T key);
	void INFO();
	my_class<T> operator+(my_class<T> next)
	{
		my_class<T> result(this->key + next.get());
		return result;
	}

	template< typename T1>
	my_class<double> operator+(my_class<T1> next)
	{
		my_class<double> result(this->key + next.get());
		return result;
	}
};
