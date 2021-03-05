#include "Header.h"

void fabric::redo(string& Name, int& code, int& mark, double& weight)
{
    this->code = code;
    this->Name = Name;
    this->mark = mark;
    this->weight = weight;
}

void fabric::show()
{
    cout << "Название изделия - " << this->Name << ". Код изделия - " << this->code << ". Марка металла - " << this->mark << ". Вес изделия - " << this->weight << ".\n";
}

void sort(fabric* arr)
{
    for (int i = 0; i < SIZE - 1; i++) 
    {
        for (int i = 0; i < SIZE - 1; i++) 
        {
            if (arr[i].code > arr[i + 1].code)
            {
                fabric temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
}

void ShowAllFabric(fabric* arr)
{
    sort(arr);
    for (int i = 0; i < SIZE; i++) 
    {
        arr[i].show();
    }
}

fabric::fabric()
{
    this->mark = 0;
    this->weight = 0;
    this->code = 0;
    this->Name = "NULL STREET";
}

fabric::fabric(string Name, int code, int mark, double weight)
{
    this->mark = mark;
    this->weight = weight;
    this->code = code;
    this->Name = Name;
}