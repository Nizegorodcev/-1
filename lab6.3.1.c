#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>
void main(void)
{
	setlocale(LC_ALL, "RUS");
	float x, y;
	puts("�������  ����� x");
	scanf("%f", &x);
	puts("�������  ����� y");
	scanf("%f", &y);


	if ((x >= 0 && x <= 6))
	{
		if ((y >= 0 && y <= 6) && (pow(x, 2) + pow(y, 2) <= 36))
		{
			puts("����������� ����������� �������");
		}
		else
		{
			if ((y <= 0 && y >= -6) && (x - 6 <= y))
			{
				puts("����������� ����������� �������");
			}
			else
			{
				puts("����������� �� ����������� �������");
			}
		}
			
	
		
			


	}
	else
	{
		puts("�����������  �� ����������� �������");


	}











}