#include "Header.h"

void main()
{
	setlocale(LC_ALL, "rus");

	Sum A;
	A.SumShow();

	Sum B(5, 6);
	Sum* px = &B;
	px->SumShow();

	Sum C;
	C.init(3, 3);
	C.SumShow();
}