#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int substr(char *, char *, int, int);
/* главная функция */
int main() 
{
	setlocale(LC_ALL, "Rus");
	char s1[80], s2[80]; /* источник и результат */
	int n, l, r; /* позиция, длина, результат */
	for (;;) 
	{   /* бесконечный цикл */
		printf("Введите строку:");
		/* ввод строки-источника */
		if (!strcmp(gets_s(s1), "***")) break;
		/* ввод остальных параметров */
		printf("Введиту позицию и длину:");
		scanf("%d %d", &n, &l);
		/* обращение к функции substr() */
		r = substr(s1, s2, n, l);
		/* вывод результатЁв */
		printf("pos=%d, len=%d\n", n, l);
		printf("s1=>>%s<<\n", s1);
		printf("s2=>>%s<<\n", s2);
		printf("R=%d\n\n", r);
		gets_s(s1);
	}
}
/* функция выделения подстроки */
/* параметры:
src - строка-источник
dest - строка-результат
pos - позиция, с которой выделяется подстрока
len - длина подстроки
функция возвращает:
0 - нормальное выполнение
1 - подстрока имеет меньшую длину, чем задано
-1 - ошибка в параметрах, результат пустой */
int substr(char *src, char *dest, int pos, int len) 
{
	int ret; /* значение, которое возвращается */
			 /* выход на начальную позицию */
	for (; pos&&*src; pos--, src++);
	/* проверка параметров */
	if (pos || (len<0)) ret = -1;
	else 
	{    /* параметры корректны */
			  /* пересылка символов */
		for (; len&&*src; *dest++ = *src++, len--);
		/* проверка длины результата */
		ret = len ? 1 : 0;
	}
	/* запись признака конца в результат */
	*dest = 0;
	return ret;
}
