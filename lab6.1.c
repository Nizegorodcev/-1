#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>
void main(void)
{
	setlocale(LC_ALL, "RUS");
	int years;
	puts("������� ���");
	scanf("%i", &years);
	if (!((years % 4)))
		puts("��� ����������");
	else
		puts("��� �� ����������");




}