#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>
void main(void)
{
	setlocale(LC_ALL, "RUS");
	int m, n;
	int s;
	int kol = 0;
	
	puts("������� ����� m");
	scanf("%d", &m);
	puts("������� ����� n");
	scanf("%d", &n);
	s = 0;
	for (; m <= n; m++)
	{
		s += m;
		++kol;
		printf("\n�������� ����� %i",kol);
		

	}
	printf("\n��������� %d", s);





}