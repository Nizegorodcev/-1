#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>
void main(void)
{
	setlocale(LC_ALL, "RUS");
	float x;
	double z;
	puts("Введите число x");
	scanf("%f", &x);
	printf((x>=3) ? "%f":"%f", -pow(x, 2) + 3 * x + 9, x / (pow(x, 3) - 6));
	//-pow(x, 2) + 3 * x + 9
	//x / pow(x, 3) - 6
	//Пример: x=4, результат 5    x=2, результат 1

}