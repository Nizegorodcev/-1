#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>
void main(void)
{
	setlocale(LC_ALL, "RUS");
	int a;
	puts("Введите степень двойки");
	scanf("%i", &a);
	switch (a)
	{
	case(10):
		puts("Kilo");
		break;
	case(20):
		puts("Mega");
		break;
	case(30):
		puts("Giga");
		break;

	case(40):
		puts("Tera");
		break;

	case(50):
		puts("Penta");
		break;
	case(60):
		puts("Exa");
		break;
	default:
		puts("Неизвестная степень");
	}

}