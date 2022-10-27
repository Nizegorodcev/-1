#define _CRT_SECURE_NO_DEPRECATE
#define M_PI 3.14159265358979323846
#include <stdio.h>
#include <locale.h>
#include <math.h>

void main()
{
	setlocale(LC_ALL, "rus");
	int h, a,A;
	float b;
	puts("¬ведите высоту h");
	scanf("%d", &h);
	puts("¬ведите угол a");
	scanf("%d", &a);
	puts("¬ведите сторону A");
	scanf("%d", &A);
	float c = sin(a*(M_PI/180));
	b = h * c;
	int z = roundf(b);
	//printf("%i\n",z);
	//printf("%lf\n", sin(30*M_PI/180));
	if (a == 90)
	{
		for (int x = 0; x < h; x++)
		{
			for (int y = 0; y < A; ++y)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	if (a < 90)
	{
		for (int x = 1; x < z; x++)
		{
			printf("\n *");
			for (int y = 0; y < A; ++y)
			{
				
				printf("*");
			}
			printf("\n *");
			
		}
	}


}