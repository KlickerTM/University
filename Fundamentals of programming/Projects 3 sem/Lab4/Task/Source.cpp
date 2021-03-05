#include "Header.h"

void head()
{
    cout << "Ведомость деталей" << endl;
    cout << "Наименование, Тип, Количество,  Вес 1 детали (г): " << endl;
}

bool cheak_index(int N) 
{
    if (N < 0 || N >= SizeN)
        return false;
    else
        return true;
}