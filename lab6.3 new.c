#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>

void main(void)
{
	int x, y, A, B,i;
	setlocale(LC_ALL, "RUS");
	scanf("%d", &A);
	scanf("%d", &B);
	for ( x=-(A/2); x<=A/2; x++)
	{
		for (y = -(B / 2); y <= B / 2; ++y)
		{
			if (figure(x, y)) printf("*x ");
			//else printf("* ");
		}
		printf("\n");
	
	}


	


}
float figure(int x, int y)
{
	if ((x >= 0 && x <= 6))
	{
		if ((y >= 0 && y <= 6) && (pow(x, 2) + pow(y, 2) <= 36))
		{
			return 1;
		}
		else
		{
			if ((y <= 0 && y >= -6) && (x - 6 <= y))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	else
	{
		return 0;
	}
}



	

