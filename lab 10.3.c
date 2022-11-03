#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "RUS");
	int a, h, x, i, j,v;
	puts("Параллелограмм");
	puts("Выберите операцию, которую вы хотите сделать с параллелограммом:\n 1.Посчитать площадь\n 2.Вывести определение \n 3.Нарисовать фигуру");
	scanf("%d", &v);
	switch (v)
	{
	case 1:
		printf("Введите высоту параллелограма: ");
		scanf("%d", &h);
		printf("Введите нижнюю сторону: ");
		scanf("%d", &a);
		printf("Площадь парраллелограма равна %i", a * h);
		break;
	case 2:
		printf("Парралелограмм - это четырехугольник у которого противоположные стороны параллельны");
		break;
	case 3:
		printf("Введите значение правого нижнего угла: ");
		scanf("%d", &x);
		printf("Введите высоту: ");
		scanf("%d", &h);
		printf("Введите нижнюю сторону: ");
		scanf("%d", &a);
		if (x == 90) {
			for (i = 0; i < h; i++) {
				for (j = 0; j < a; j++)
				{
					printf("#");
				}
				printf("\n");
			}
		}
		else if (x > 90) {
			int l = h - 1;

			for (i = 0; i < h; i++) {
				for (j = 0; j < (a + h); j++) {

					if (j > l && j < (a + h - i)) {
						printf("#");
					}
					else {
						printf(" ");
					}
				}
				l--;
				printf("\n");
			}
		}
		else if (x < 90) {
			int l = a;

			for (i = 0; i < h; i++) {
				for (j = 0; j < (a + h); j++) {

					if (j < l && j >= i) {
						printf("#");
					}
					else {
						printf(" ");
					}
				}
				l++;
				printf("\n");
			}
		}
	}

}
	