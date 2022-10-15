
#define _CRT_SECURE_NO_DEPRECATE
#define M_PI 3.14159265358979323846
#include <stdio.h>
#include <locale.h>
#include <math.h>
void main(void)
{
	setlocale(LC_ALL, "rus");
	int n;
	float x;
	float f=0;
	int i = 1;
	float g=0;
	puts("¬ведите натуральное число n");
	scanf("%i", &n);
	puts("¬ведите действительное число x ");
	scanf("%f", &x);

	

	for (; n >= 1 && i<=n; g=pow(sin(x),i),i = i + 1)
	{
		f = f +g;
	}
	printf("%f",f);
	

}