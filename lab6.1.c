#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>
void main(void)
{
	setlocale(LC_ALL, "RUS");
	int years;
	puts("Введите год");
	scanf("%i", &years);
	if (!((years % 4)))
		puts("Год високосный");
	else
		puts("Год не високосный");




}