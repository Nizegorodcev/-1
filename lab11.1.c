//Вариант 4
#define _CRT_SECURE_NO_DEPRECATE
#define N 10
#include <stdio.h>
#include <locale.h>
#include <math.h>

void main()
{
	setlocale(LC_ALL, "rus");
	float A[N];
	float temp;
	float s=0;
	for (int i = 0; i < N; i++)
	{
		printf("a[%d]=", i + 1);
		scanf("%f", &temp);
		A[i] = temp;
		s += temp;
	}
	printf("_______________________________________\n");
	printf("|Индекс|Старое значение|Новое значение|\n");
	for (int i = 0; i < N; i++)
	{
		printf("_______________________________________\n");
		printf("|  %i   |  %f   |   %f  |\n",i,A[i],-A[i]);
	}
	printf("\n\nСреднее арифметическое членов массива равно %f", s / N);
	
}
