//вариант 1
#define ROW 9
#define COL 9
#include <locale.h>
#include<stdio.h>

void main(void)
{
	setlocale(LC_ALL, "RUS");
	int row, col;
	printf("\n");
	for (row = 1; row <= ROW; ++row)
	{
		for (col = 1; col <= COL; ++col)
		{
		
			printf("%d*%1d=%d",col,row, col * row);
			printf("\t");
			

		}
		printf("\n");
	}
}