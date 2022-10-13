#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>
void main(void)
{
	int a;
	char x, y;
	setlocale(LC_ALL,"rus");
	puts("¬ведите первый и второй символы");
	scanf("%c %c", &x ,&y);
	puts("¬ведите количество символов:");
	scanf("%d", &a);
	for (int start = 1; start <= a / 2; start++) printf("%c", x);
	for (int start = a/2; start <= a; start++) printf("%c", y);




}