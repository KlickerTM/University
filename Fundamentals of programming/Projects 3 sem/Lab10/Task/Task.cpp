#include "header.h"
#include <assert.h>
#include <iostream>
#include <string>

int main()
{
	setlocale(LC_ALL, "rus");
	std::cout << "\n\nПРОВЕРКА ФУНКЦИИ МИНИМУМА:\n\n";
	std::cout << "Для целых положительных числа 7523 и 64444\n";
	assert(min<int>(7523, 64444) == 7523);
	std::cout << "Программа сработала коректно! \n";
	std::cout << "Для целых отрицательных числа -5555 и -3\n";
	assert(min<int>(-5555, -3) == -5555);
	std::cout << "Программа сработала коректно!\n";
	std::cout << "Для вещественных положительных чисел 2.3 и 4.5 \n";
	assert(min<double>(2.3, 4.5) == 2.3);
	std::cout << "ТПрограмма сработала коректно!\n";
	std::cout << "Для вещественных смешаных чисел 12.43 и -4.5\n";
	assert(min<double>(12.43, -4.5) == -4.5);
	std::cout << "Программа сработала коректно!\n";
	std::cout << "Для двух символов 1 и 2\n";
	assert(min<char>('1', '2') == '1');
	std::cout << "Программа сработала коректно!\n";
	std::cout << "\n\nПРОВЕРКА ФУНКЦИИ СОРТИРОВКИ:\n\n";
	std::cout << "Пробуем отсортировать массив 5, 6, -3\n";
	assert(proverka1(sort<int>(new int[3]{ 5,6,-3 }, 3)) == true);
	std::cout << "Массив отсортирован правильно! -3, 5, 6\n";
	std::cout << "Пробуем отсортировать массив 5.3, 6.3, -3.3\n";
	assert(proverka2(sort<double>(new double[3]{ 5.3, 6.3, -3.3 }, 3)) == true);
	std::cout << "Массив отсортирован правильно! -3.3, 5.3, 6.3\n";
	std::cout << "Пробуем отсортировать массив c, a, p\n";
	assert(proverka3(sort<char>(new char[3]{ 'c','a','p' }, 3)) == true);
	std::cout << "Массив отсортирован правильно! 'a' 'c' 'p'\n";
	std::cout << "\n\nПРОВЕРКА ФУНКЦИИ СУМЫ:\n\n";
	std::cout << "Попробуем сложить 1, -2, 3\n";
	assert((sum<int>(new int[3]{ 1,-2,3 }, 3)) == 2);
	std::cout << "Сложение прошло успешно!\n";
	std::cout << "Попробуем сложить 1.2, 1.3, 1.5\n";
	assert(sum<double>(new double[3]{ 1.2, 1.3, 1.5 }, 4) == 4);
	std::cout << "Сложение прошло успешно!\n";
	std::cout << "Попробуем сложить a, b, c\n";
	assert(sum<char>(new char[3]{ 'a', 'b', 'c' }, 3) == (char)294);
	std::cout << "Сложение прошло успешно!\n";
	system("pause");
	return 1;
}