#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>

void main()
{
	int x, c = 0;
	setlocale(LC_ALL, "rus");
	printf("¬ведите число:\n");
	scanf("%d", &x);
	for (int z = x; x > 0; c++) z = z / 10;
	for (int y = 1; y < c; y++)
	{
		printf("%d ", x / 10);
	}


}