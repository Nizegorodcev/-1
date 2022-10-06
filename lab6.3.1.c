#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>
void main(void)
{
	setlocale(LC_ALL, "RUS");
	float x, y;
	puts("Введите  число x");
	scanf("%f", &x);
	puts("Введите  число y");
	scanf("%f", &y);


	if ((x >= 0 && x <= 6))
	{
		if ((y >= 0 && y <= 6) && (pow(x, 2) + pow(y, 2) <= 36))
		{
			puts("Координнаты принадлежат графику");
		}
		else
		{
			if ((y <= 0 && y >= -6) && (x - 6 <= y))
			{
				puts("Координнаты принадлежат графику");
			}
			else
			{
				puts("Координнаты не принадлежат графику");
			}
		}
			
	
		
			


	}
	else
	{
		puts("Координнаты  не принадлежат графику");


	}











}