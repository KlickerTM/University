#include "header.h"

int main() 
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    details detail[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        cin >> detail[i];
    }
    cout << "Вы ввели:\n";

    head();
    for (int i = 0; i < SIZE; i++)
    {
        cout << detail[i] << endl;
    }
    cout << "\n\n///Проверка работы оператора ==///\n";

    int n_1, n_2, mesto;
    double mark;
    string code, Surname;
    bool check;
    do
    {
        check = false;
        cout << "Первый индекс: ";
        cin >> n_1;
        cout << "Второй индекс: ";
        cin >> n_2;
        if (!cheak_index(n_1) || !cheak_index(n_2))
        {
            cout << "\nОшибка\n";
            check = true;
        }
    } while (check);
    cout << "Вы пытаетесь сравнить [ " << detail[n_1] << "] и [" << detail[n_2] << "]  ";
    if (detail[n_1] == detail[n_2])
        cout << "Они равны\n";
    else
        cout << "Они не равны\n";

    cout << "\n\n///Проверка работы оператора =///\n";

    do
    {
        check = false;
        cout << "Введите индекс елемента, который хотите клонировать : ";
        cin >> n_1;
        if (!cheak_index(n_1))
        {
            cout << "\nОшибка\n";
            check = true;
        }
    } while (check);
    details sravn = detail[n_1];
    cout << "Елемент созданный с помощю = : \n"; sravn.show();
    cout << "\n\n///Проверка работы оператора +///\n";

    do
    {
        check = false;
        cout << "Первый индекс: ";
        cin >> n_1;
        cout << "Второй индекс: ";
        cin >> n_2;
        if (!cheak_index(n_1) || !cheak_index(n_2))
        {
            cout << "\nОшибка\n";
            check = true;
        }
    } while (check);

    cout << "Вы пытаетесь соеденить [" << detail[n_1] << "] и [" << detail[n_2] << "]";
    details newdetail = detail[n_1] + detail[n_2];
    cout << " Вот что получилось: \n"; newdetail.show();
}
