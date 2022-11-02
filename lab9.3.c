#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	int a, h, x, i, j;
	setlocale(LC_ALL, "RUS");
	printf("Введите угол: ");
	scanf("%d", &x);
	printf("Введите высоту: ");
	scanf("%d", &h);
	printf("Введите сторону: ");
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
	return 0;
}
