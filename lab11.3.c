#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <malloc.h>
void main()
{
	setlocale(LC_ALL, "rus");
	int n=1;
	printf("������� ������ �������:");
	scanf("%i", &n);
	float A[]={n};
	float a;
	float sum=0;
	int kol=0;
	for (int i = 0; i < n; i++)
	{
		printf("a[%d] = ", i);
		scanf("%f", &a);
		A[i] = a;
	}
	for (int i = 0; i < n; i++)
	{
		if (i != 0 && i % 2 == 0)
		{
			sum += A[i];
			kol += 1;
		}
	}
	printf("������� �������� ��������� ������� ������ ������ �� ������� ������� �����: %f", sum / kol);
}
//��� ��� �������� ������������� ����� �������
/*
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int main()
{
	int *a;  // ��������� �� int ��� �������
	int i, n;

	printf("������� ������ �������: ");
	scanf("%d", &n);

	// ��������� ������
	a = (int*)malloc(n * sizeof(int));

	// ���� ��������� �������
	for (i = 0; i<n; i++)
	{
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}

	// ����� ��������� �������
	for (i = 0; i<n; i++)
		printf("%d ", a[i]);

	free(a);

	getchar();
	return 0;
}

*/