#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>
void main(void)
{
	setlocale(LC_ALL, "RUS");
	int N;
	int a;
	int b;
	int c;
	puts("������� ����� ����� N < 1000");
	scanf("%i", &N);
	if (N > 1000)
	{
		puts("�� ��������� �������");
	}
	else
	{
		if (N / 100 != 0)
		{
			a = N / 100;
			c = N % 10;
			b = (N % 100) / 10;
			if ((a + b + c) % 3 == 0)
			{
				printf("����� ����  ����� %i ������ 3", N);
			}
			else
			{
				printf("����� ����  ����� %i  �� ������ 3", N);
			}
		}
		else
		{
			if (N / 10 != 0)
			{
				a = N / 10;
				b = N % 10;

				if ((a + b) % 3 == 0)
				{
					printf("����� ����  ����� %i ������ 3", N);
				}
				else
				{
					printf("����� ����  ����� %i  �� ������ 3", N);
				}
			}


			else
			{
				if (N % 3 == 0)
				{
					printf("����� ����  ����� %i ������ 3", N);
				}
				else
				{
					printf("����� ����  ����� %i  �� ������ 3", N);
				}
			}
		}
	}	
		
		

 







}
//������� 18