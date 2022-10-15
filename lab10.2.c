#define _CRT_SECURE_NO_DEPRECATE
#define M_PI  3.14159265358979323846
#include <stdio.h>
#include <locale.h>
#include <math.h>
int factorial(int l)
{
	int i;
	int d=1;
	for (i = 1; i <= l; i++)
	{
		d = d * i;
	}
	return d;
}

void main(void)
{
	setlocale(LC_ALL, "rus");
	int n = 0;
	int x;
	float res=0;
	puts("¬ведите x");
	scanf("%i", &x);
	float a;

	for (; n >= 0; res = res + (pow(-1, n) * pow(x, 2 * n)) / (factorial(2 * n)))
	{
		n = n + 1;
		a = (pow(-1, n) * pow(x, 2 * n)) / (factorial(2 * n));
		if (a = abs(x))
		{
			break;
		}

	}
	printf("%f", res);


}