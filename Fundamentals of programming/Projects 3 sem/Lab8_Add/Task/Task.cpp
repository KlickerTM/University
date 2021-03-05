#include "Class.h"

int main() 
{
	setlocale(LC_ALL, "rus");

	int INT;
	double DOUBLE;
	bool pass;
	do
	{
		pass = true;
		try
		{
			cout << "Введите целое число: ";
			cin >> INT;
			if (cin.fail())
			{
				throw exception();
			}
			cout << "Введите вещественное число: ";
			cin >> DOUBLE;
			if (cin.fail())
			{
				throw exception();
			}
		}
		catch (const exception&)
		{
			cout << "Ошибка ввода!\n";
			cin.clear();
			cin.ignore(50000, '\n');
			pass = false;
		}
	} while (!pass);

	my_class<int> INT_NUM(INT);
	my_class<double> DOUBLE_NUM(DOUBLE);

	cout << "Первый объект: "; INT_NUM.INFO(); cout << endl;
	cout << "Второй объект: "; DOUBLE_NUM.INFO(); cout << endl;

	cout << "Попробуем сложить два объекта для целых чисел - ";
	my_class<int> INT_RESULT = INT_NUM + INT_NUM;
	INT_RESULT.INFO();

	cout << "Попробуем сложить два объекта для вещественных чисел - ";
	my_class<double> DOUBLE_RESULT = DOUBLE_NUM + DOUBLE_NUM;
	DOUBLE_RESULT.INFO();

	cout << "Попробуем сложить два объекта для вещественных и целых чисел - ";
	my_class<double> INT_DOUBLE_RESULT = INT_NUM + DOUBLE_NUM;
	INT_DOUBLE_RESULT.INFO();
}