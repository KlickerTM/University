#include "Header.h"

int main() 
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    BASE* detail_data_base = new BASE("DETAILS");
    string Surname, code;
    int kol;
    double weight;

    bool working = true;
    while (working) 
    {
        int temp_o;
        cout << "1. Добавить запись\n2. Удалить запись\n3. Сортировать базу\n4. Вывести базу\n0. Выход\n";
        cin >> temp_o;
        switch (temp_o)
        {
        case 0:
            exit(0);
            break;
        case 1:
            cout << "\n///ВВОД ЕЛЕМЕНТА///\n"; 
            cout << "Наименование: ";
            cin >> Surname;
            cout << "Тип: ";
            cin >> code;
            cout << "Количество: ";
            cin >> kol;
            cout << "Вес 1 детали (г): ";
            cin >> weight;
            cout << endl;
            detail_data_base->insert(Surname, code, kol, weight);
            break;
        case 2:
            detail_data_base->del();
            break;
        case 3:
            detail_data_base->sort();
            break;
        case 4:
            detail_data_base->view();
            break;
        default:
            exit(-1);
            break;
        }
    }
}
