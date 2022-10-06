#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>
void main(void)
{
	setlocale(LC_ALL, "RUS");
	char c;
	int x;
	puts("Введите символ");
	scanf("%c", &c);
	switch (c)
	{
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	puts("Введена буква");
	break;
	default:
		printf("\nНеизвестный символ");
	
	}



}