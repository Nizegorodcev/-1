#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define N 100

int main() {
	double array[N][N];
	int a = 0, b = 0;
	setlocale(LC_ALL, "rus");
	printf("Введите количество строк: \n");
	scanf("%d", &a);
	printf("Введите количество столбцов: \n");
	scanf("%d", &b);
	if (!(a < N) || !(b < N)) return;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			array[i][j] = j*1000+i;
		}
	}

	for (int i = -1; i < a; i++) {
		printf("\n");
		for (int j = -1; j < b; j++) {
			if (i == -1 && j != -1) printf("%d\t", j);
			else if (j == -1 && i != -1) printf("%d\t", i);
			else if (i == -1 && j == -1) printf("\t");
			else printf("%.2lf\t", array[i][j]);

		}
		printf("\n");
	}
	printf("\n%.2lf\n", array[1][1]);

	int c;
	printf("Введите строку для поиска минимального значения:\n");
	scanf("%d", &c);
	if (c < a) {
		double min = array[c][0];
		for (int j = 0; j < b; j++) {
			if (array[c][j] < min) min = array[c][j];
		}
		printf("%.2lf", min);
	}
	else printf("\nОшибка! Выход за диапазон.");
}