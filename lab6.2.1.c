#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>
void main(void)
{
	setlocale(LC_ALL, "RUS");
	float x;
	double z;
	puts("¬ведите число x");
	scanf("%f", &x);
	z = (x >= 3) ? -pow(x, 2) + 3 * x + 9 : x / (pow(x, 3) - 6);
	printf("%lf", z);
}
	//-pow(x, 2) + 3 * x + 9
	//x / pow(x, 3) - 6
	//вариант 2