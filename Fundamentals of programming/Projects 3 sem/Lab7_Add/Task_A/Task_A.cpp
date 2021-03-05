#include "comp.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите парное количетво чисел: ";

    bool pass;
    int count;
    do
    {
        pass = true;
        cin >> count;
        if (count % 2 != 0 || count <= 0)
        {
            cout << "Повтори попытку: "; pass = false;
        }
    } while (!pass);

    ofstream fo;
    fo.open("t.txt");
    cout << "Введите числа: ";
    for (int i = 0; i < count; i++)
    {
        double chislo;
        cin >> chislo;
        fo << chislo << endl;
    }
    fo.close();

    double* count_of_num = new double[count];
    try
    {
        ifstream fi("t.txt");
        if (!fi)
        {
            throw exception();
        }
        for (int i = 0; i < count; i++)
        {
            fi >> count_of_num[i];
        }
        COMP* massive = new COMP[count / 2];
        for (auto i = 0, z = 0; i < count / 2; i++)
        {
            massive[i].to_complex(count_of_num[z], count_of_num[z + 1]);
            z += 2;
        }
        for (auto i = 0; i < count / 2; i++)
            massive[i].OUT();
        fi.close();
    }
    catch (const exception&)
    {
        cout << "FILE ERROR\n";
        exit(-1);
    }

}