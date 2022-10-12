#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>
void main(void)
{
	setlocale(LC_ALL, "RUS");
	float x, y;
	char c;
	puts("Калькулятор чисел");
	scanf("%f%c%f", &x, &c,&y);

	switch (c)
	{
	case('+'):
		printf("%.2f%c%.2f = %.2f",x,c,y,x+y);
		break;
	case('-'):
		printf("%.2f%c%.2f = %.2f", x, c, y, x - y);
		break;
	case('*'):
		printf("%.2f%c%.2f = %.2f", x, c, y, x * y);
		break;
	case('/'):
		printf("%.2f%c%.2f = %.2f", x, c, y, x / y);
		break;
	case('^'):
		printf("%.2f%c%.2f = %.2f", x, c, y,pow(x,y));
		break;


	}



}