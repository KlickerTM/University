#include "Header.h"

void head()
{
    cout << "��������� �������" << endl;
    cout << "������������, ���, ����������,  ��� 1 ������ (�): " << endl;
}

bool cheak_index(int N) 
{
    if (N < 0 || N >= SizeN)
        return false;
    else
        return true;
}