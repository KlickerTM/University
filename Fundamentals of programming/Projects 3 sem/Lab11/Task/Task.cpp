//Вариант 4
#include"Header.h"
#define N 1

int main(void)
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string n;
	char t;
	unsigned int k;
	float w;
	short i;

	Details obj[N];
	system("cls");
	cout << "/РАБОТА ФУНКЦИИ SET/\n";
	for (i = 0; i < N; i++)
	{
		cout << "Ведомость деталей\n";
		cout << "Наименование, Тип, Количество,  Вес 1 детали (г): ";
		cin >> n;
		cin >> t;
		cin >> k;
		cin >> w;


		obj[i].set(n, t, k, w);
	}
	cout << "/РАБОТА ФУНКЦИИ SHOW/\n";
	cout << "Ведомость деталей\n";
	cout << "Наименование, Тип, Количество,  Вес 1 детали (г): " << endl;
	for (i = 0; i < N; i++)
	{
		obj[i].show();
	}
	cout << "/РАБОТА ФУНКЦИЙ GET и SHOW/\n";
	cout << "Ведомость деталей\n";
	cout << "Наименование, Тип, Количество,  Вес 1 детали (г): " << endl;
	for (i = 0; i < N; i++)
	{
		obj[i].get(n, t, k, w);
		obj[i].show();
	}
	system("pause");
	return 0;
}