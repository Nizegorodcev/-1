#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(void) {
	char fname[20] = "number.txt";
	FILE* out;
	setlocale(LC_ALL, "rus");
	puts("�������� �����");
	if ((out = fopen(fname, "wt")) == NULL) {
		printf("������ �������� ����� ��� ������");
	}
	fprintf(out, "%d\n", 5);
	fopen(fname, "a");
	fprintf(out, "%.2lf\n", 12.56);
	fclose(out);


	char ftemp[40] = "temp.txt";
	FILE* out1;
	puts("�������� ����� � ������������ ���������");
	if ((out1 = fopen(ftemp, "wt")) == NULL) {
		printf("������ �������� ����� ��� ������");
	}

	double f = 0;
	printf("������� ���������� ��������� � �����:\n");
	scanf("%lf", &f);
	for (int i = 0; i < f; i++) {
		fprintf(out1, "%d\n", (rand() % 201) - 100);
	}

	double x = 0;
	printf("������� �����, ������� ������ ����������:\n");
	scanf("%lf", &x);
	fopen(ftemp, "a");
	fprintf(out, "%.2lf\n", x);
}