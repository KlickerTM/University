#include "Header.h"
#include <limits>


int main() 
{
    setlocale(LC_ALL, "ru");

    int code, mark;
    double weight;
    string Name;
    fabric my_fabrics[SIZE];
    for (int i = 0; i < SIZE; i++) 
    {
        cout << "//////////////////////////////\n";
        cout << "Введите название изделия:";
        cin >> Name;
        cout << "Введите код изделия:";
        cin >> code;
        cout << "Введите марку металла:";
        cin >> mark;
        cout << "Введите вес изделия (г):";
        cin >> weight;
        my_fabrics[i].redo(Name, code, mark, weight);
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    system("cls");
    ShowAllFabric(my_fabrics);
}