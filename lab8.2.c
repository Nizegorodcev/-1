#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>
float fun(float x)
{
	return pow(x, 3) - 4 * pow(x, 2) + 2;
}
void main()
{
	setlocale(LC_ALL, "rus");
	float y;
	float i = 1.0;
	puts("x^3 - 4x^2 + 2");	
	puts("¬ведите шаг табул€ции");
	scanf("%f", &y);
	printf("____________________\n");
	printf("|  x     |   F(x)  |\n");
	for (i;  i <= 3.0; i += y)
		printf("|%6.5f |%9.5f|\n", i, fun(i));	

}
