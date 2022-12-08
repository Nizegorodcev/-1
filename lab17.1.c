#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include<stdlib.h>
#define N  20
int sort_buble(int* ptrarr);
int put(int* ptrarr);
int putmassive(int* ptrarr);
void main(void)
{
	int A[N];
	put(A);
	printf("\n");
	//sort_buble(put(A));
	putmassive(sort_buble(A));
}
int sort_buble(int* ptrarr)
{
	int tmp;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N-1; j++)
		{
			if (ptrarr[j] > ptrarr[j + 1])
			{
				tmp = ptrarr[j];
				ptrarr[j] = ptrarr[j + 1];
				ptrarr[j + 1] = tmp;
			}
		}
		
	}
	return ptrarr;
}
int put(int* ptrarr)
{
	for (int i = 0; i < N; i++)
	{
		ptrarr[i] = rand();
		printf("%i\n", ptrarr[i]);
	}
}
int putmassive(int* ptrarr)
{
	for (int i = 0; i < N; i++)
	{
		printf("%d\n", ptrarr[i]);
	}
}