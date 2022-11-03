#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>
void main()
{
	float A[10];
	float temp;
	for (int i = 0; i < 10; i++)
	{
		printf("a[%d]=", i+1);
		scanf("%f", &temp);
		A[i] = -temp;
		printf("%.2f\n", A[i]);
	}
	
}