#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "RUS");
	int a, h, x, i, j,v;
	puts("��������������");
	puts("�������� ��������, ������� �� ������ ������� � ����������������:\n 1.��������� �������\n 2.������� ����������� \n 3.���������� ������");
	scanf("%d", &v);
	switch (v)
	{
	case 1:
		printf("������� ������ ��������������: ");
		scanf("%d", &h);
		printf("������� ������ �������: ");
		scanf("%d", &a);
		printf("������� ��������������� ����� %i", a * h);
		break;
	case 2:
		printf("�������������� - ��� ��������������� � �������� ��������������� ������� �����������");
		break;
	case 3:
		printf("������� �������� ������� ������� ����: ");
		scanf("%d", &x);
		printf("������� ������: ");
		scanf("%d", &h);
		printf("������� ������ �������: ");
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
	