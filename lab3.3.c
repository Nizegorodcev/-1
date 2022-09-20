#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include<locale.h>
void main(void)
{
	int a, b;
	setlocale(LC_ALL, "RUS");
	puts("¬ведите число a");
	scanf("%d", &a);
	puts("¬ведите число b");
	scanf("%d", &b);
	printf("|a*b\t|a+b\t|a-b\t|\n");
	printf("-------------------\n");
	printf("|%d*%d\t|%d+%d\t|%d-%d\t|\n", a, b, a, b, a, b);
	printf("-------------------\n");
	printf("|%d\t|%d\t|%d\t|\n", a * b, a + b, a - b);
  










}