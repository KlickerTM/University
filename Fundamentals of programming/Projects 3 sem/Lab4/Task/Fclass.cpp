#include "Header.h"

detail::detail(string Surname, string code, int kol, double weight)
{
    this->Surname = Surname;
    this->code = code;
    this->kol = kol;
    this->weight = weight;
}

BASE::BASE(string name) 
{
    this->title_DATA_BASE = name;
    this->col = 0;
    this->sorted = 0;
}

BASE::~BASE() 
{
    for (int i = 0; i < this->col; i++) 
    {
        delete this->details[i];
    }
}

istream& operator>> (istream& in, detail& temp)
{
    cout << "///ВВОД ЕЛЕМЕНТА///\n"; cout << "Наименование: "; in >> temp.Surname; cout << "Тип: "; in >> temp.code;
    cout << "Количество: "; in >> temp.kol; cout << "Вес 1 детали (г): "; in >> temp.weight; cout << endl; return in;
}

ostream& operator<< (ostream& out, const detail& temp)
{
    return out << temp.Surname << "    " << temp.code << "    " << temp.kol << "    " << temp.weight << "\n";
}

detail detail::operator=(const detail& temp)
{
    detail result;
    result.set(temp.Surname, temp.code, temp.kol, temp.weight);
    return result;
}

bool detail::operator==(const detail& temp)
{
    if (this->Surname == temp.Surname && this->code == temp.code && this->kol == temp.kol && this->weight == temp.weight)
        return true;
    else
        return false;
}

string detail::name()
{
    return this->Surname;
}

void detail::get(string* Surname, string* code, int* kol, double* weight)
{
    *Surname = this->Surname;
    *code = this->code;
    *kol = this->kol;
    *weight = this->weight;
}

void detail::set(string Surname, string code, int kol, double weight)
{
    this->Surname = Surname;
    this->code = code;
    this->kol = kol;
    this->weight = weight;
}

void detail::show(void)
{
    cout << "Наименование: " << this->Surname << ". Тип: " << this->code << ". Количество: " << this->kol << ". Вес 1 детали (г): " << this->weight << endl;
}

detail detail::operator+(const detail& temp)
{
    detail result;
    result.set(this->Surname + temp.Surname, this->code + temp.code, this->kol + temp.kol, this->weight + temp.weight);
    return result;
}

void BASE::insert(string Surname, string code, int kol, double weight)
{
    if (this->col > 11) 
    {
        cout << "\nERROR: \"База данных заполнена\"\n\n";
        return;
    }
    this->details[col] = new detail(Surname, code, kol, weight);
    col++;
    this->sorted = 0;
    cout << "\n--- Запись успешно добавлена ---\n\n";
}

void BASE::del()
{
    if (this->col == 0) 
    {
        cout << "\nERROR: \"База данных пуста\"\n\n";
        return;
    }
    delete this->details[col - 1];
    col--;
    cout << "\n--- Запись успешно удалена ---\n\n";
}

void BASE::view(void) 
{
    if (this->col == 0) 
    {
        cout << "\nВ базе нет элементов\n\n";
        return;
    }

    head();

    for (int i = 0; i < col; i++)
    {
        cout << *(details[i]);
    }
    cout << "\n\n";
}

void BASE::sort() 
{
    if (this->col == 0) 
    {
        cout << "\nERROR: \"База данных пуста\"\n\n";
        return;
    }
    if (this->sorted == 1)
    {
        cout << "\nERROR: \"База данных уже отсортирована\"\n\n";
        return;
    }
    for (int i = 0; i < col - 1; i++)
    {
        for (int i = 0; i < col - 1; i++) 
        {
            if (BASE::SORT_FUNC(this->details[i]->name(), this->details[i + 1]->name()))
            {
                detail* temp = this->details[i];
                this->details[i] = this->details[i + 1];
                this->details[i + 1] = temp;
            }
        }

    }
    this->sorted = 1;
    cout << "\nБаза данных успешно отсортирована\n\n";
}

bool BASE::SORT_FUNC(string s1, string s2) 
{
    if (s1 > s2)
        return true;
    return false;
}