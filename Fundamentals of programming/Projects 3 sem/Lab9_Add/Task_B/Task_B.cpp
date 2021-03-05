#include "Header.h"
#include <map>

int main()
{
	setlocale(LC_ALL, "ru");

	NAME n_1("Dima"); NUMBER n_2("+380953016930"); 
	NAME p_1("Sveta"); NUMBER p_2("+380503476629"); 
	NAME z_1("Vera"); NUMBER z_2("+380954085623"); 
	NAME c_1("Oleg"); NUMBER c_2("+380651023410"); 
	NAME o_1("Sasha"); NUMBER o_2("+380665553535");
	cout << "Введенная база:\n";
	map<NAME, NUMBER> MyBook = { {n_1,n_2},{p_1,p_2},{z_1,z_2},{c_1,c_2}, {o_1, o_2 } };
	for (auto it = MyBook.begin(); it != MyBook.end(); it++) {
		((NAME)it->first).show();
		((NUMBER)it->second).show();
		cout << endl;
	}
	map<NAME, NUMBER> ::iterator f_search, iteration;


	while ('s' == 's') 
	{
		bool pass;
		int otven;
		do
		{
			pass = true;
			cout << "1) Вывод\n2) Поиск.\n3) Вывод по первой букве\n4) Удаление по первой букве.\n0) Exit.\n ";
			try
			{
				cin >> otven;
				if (cin.fail()) 
				{
					cout << "ERROR\n";
					throw exception();
				}
			}
			catch (const exception&)
			{
				cin.clear();
				cin.ignore(3999, '\n');
				pass = false;
			}
		} while (!pass);

		string names; char bukv;
		switch (otven)
		{
		case 0:
			exit(1);
			break;
		case 1:
			for (auto it = MyBook.begin(); it != MyBook.end(); it++)
			{
				((NAME)it->first).show();
				((NUMBER)it->second).show();
				cout << endl;
			}
			break;
		case 2:
			cout << "Имя: ";
			cin >> names;
			f_search = MyBook.find(names);
			if (f_search == MyBook.end())
				cout << "Такого ключа нет в массиве.\n";
			else 
			{
				cout << "Найденая запись:\n ";
				((NAME)f_search->first).show();
				((NUMBER)f_search->second).show();
				cout << endl;
			}
			break;
		case 3:
			cout << "Введите букву по которой хотите вести поиск: >>>";
			cin >> bukv;
			for (auto it = MyBook.begin(); it != MyBook.end(); it++)
			{
				if (((NAME)it->first).get()[0] == bukv) 
				{
					((NAME)it->first).show();
					((NUMBER)it->second).show();
					cout << endl;
				}
			}
			break;
		case 4:
			cout << "Введите букву: >>>";
			cin >> bukv;
			cout << "Удаленные люди:\n";
			for (auto it = MyBook.begin(); it != MyBook.end(); it++)
			{
				if (((NAME)it->first).get()[0] == bukv) 
				{
					cout << "Удален: ";
					((NAME)it->first).show();
					((NUMBER)it->second).show();
					MyBook.erase(it);
					it = MyBook.begin();
					cout << endl;
				}
			}
			break;
		default:
			cout << "Error!\n";
			exit(-1);
			break;
		}
	}
	return 1;
}