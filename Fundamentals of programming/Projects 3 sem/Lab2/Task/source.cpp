#include "header.h"

void head()
{
    cout << "Ведомость деталей\n";
    cout << "Наименование, Тип, Количество,  Вес 1 детали (г): " << endl;
}

bool cheak_index(int INDEX)
{
    if (INDEX < 0 || INDEX >= SIZE)
        return false;
    else
        return true;
}

void details::get(string* Surname, string* code, int* kol, double* weight)
{
    *Surname = this->Surname;
    *code = this->code;
    *kol = this->kol;
    *weight = this->weight;
}

void details::set(string Surname, string code, int kol, double weight)
{
    this->Surname = Surname;
    this->code = code;
    this->kol = kol;
    this->weight = weight;
}

void details::show(void)
{
    cout << "Наименование: " << this->Surname << ". Тип: " << this->code << ". Количество: " << this->kol << ". Вес 1 детали (г): " << this->weight << endl;
}

istream& operator>> (istream& in, details& temp)
{
    cout << "///ВВОД ЕЛЕМЕНТА///\n"; cout << "Наименование: "; in >> temp.Surname; cout << "Тип: "; in >> temp.code;
    cout << "Количество: "; in >> temp.kol; cout << "Вес 1 детали (г): "; in >> temp.weight; cout << endl; return in;
}

ostream& operator<< (ostream& out, const details& temp)
{
    return out << temp.Surname << " " << temp.code << " " << temp.kol << " " << temp.weight;
}

details details::operator=(const details& temp)
{
    details result;
    result.set(temp.Surname, temp.code, temp.kol, temp.weight);
    return result;
}

bool details::operator==(const details& temp)
{
    if (this->Surname == temp.Surname && this->code == temp.code && this->kol == temp.kol && this->weight == temp.weight)
    {
        return true;
    }
    else
    {
        return false;
    }
}

details details::operator+(const details& temp)
{
    details result;
    result.set(this->Surname + temp.Surname, this->code + temp.code, this->kol + temp.kol, this->weight + temp.weight);
    return result;
}