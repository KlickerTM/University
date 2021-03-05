#include "header.h"

int main()
{
    cout << "B1: ";    B1 b1(1); b1.show_B1(); cout << "\n";
    cout << "B2: ";    B2 b2(2); b2.show_B2(); cout << "\n";
    cout << "D1: ";    D1 d1(1, 2, 3); d1.show_D1(); cout << "\n";
    cout << "D2: ";    D2 d2(1, 2, 3, 4); d2.show_D2(); cout << "\n";
    cout << "D3: ";    D3 d3(1, 2, 3, 4, 5); d3.show_D3(); cout << "\n";
    system("pause");
}
