#define _CRT_SECURE_NO_DEPRECATE
#define N 100
#include <stdio.h>
#include <locale.h>
#include <math.h>
float fun(float x);
void main()
{
	setlocale(LC_ALL, "rus");
	float A[N];
	float s;
	int kol = 0;
	int len = 0;
	float sum = 0;
	int otr = 0;
	int pol = 0;
	float otrsum = 0;
	float polsum = 0;
	printf("������� ��� ��������� ��� ��������� �� 1 �� 3 ������������:");
	scanf("%f", &s);
	for (float i = 1.0; i <= 3.0; i += s)
	{
		A[kol] = fun(i);
		kol += 1;
		sum += fun(i);
	}
	for (int i = 0; i < kol; i++)
	{
		if (A[i] < 0)
		{
			otr += 1;
			otrsum += A[i];
		}
		if (A[i] > 0)
		{
			pol += 1;
			polsum += A[i];
		}
	}
	

	printf("����� ������������� ��������� � �������: %i\n ����� ������������� ��������� � �������: %i\n", pol, otr);
	printf("����������� �������� ������������� ���������: %.2f\n����������� �������� ������������� ���������: %f\n", polsum, otrsum);
	printf("������� ��������������: %f", sum / kol);
}
float fun(float x)
{
	return pow(x, 3) - 4 * pow(x, 2) + 2;
}