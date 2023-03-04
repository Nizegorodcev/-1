
#define _CRT_SECURE_NO_DEPRECATE
#define M_PI 3.14159265358979323846
#include <stdio.h>
#include <locale.h>
#include <math.h>
void main(void)
{
	setlocale(LC_ALL, "rus");
	int n;
	float x;
	float f=0;
	int i = 1;
	float g=0;
	puts("Ââåäèòå íàòóðàëüíîå ÷èñëî n");
	scanf("%i", &n);
	puts("Ââåäèòå äåéñòâèòåëüíîå ÷èñëî x ");
	scanf("%f", &x);

	

	for (; n >= 1 && i<=n; g=pow(sin(x),i),i = i + 1)
	{
		f = f +g;
	}
	printf("%f",f);
	

}

#define _CRT_SECURE_NO_DEPRECATE
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
void main()
{
	setlocale(LC_ALL, "RUS");
	double a, b, c, x,y,f,g;
	a=0;
	b = 0;
	c = 0;
	x = 0;
	g = 0.15 / 100;
	int v;
	int* d;
	int l;
	char stroka;
	double drob;
	printf("Выберите действие:\n 1)Какое выражение точнее\n 2)Округлить сомнительные цифры числа, оставив верные знаки.Определить абсолютную погрешность результата.\n");
	scanf("%i", &v);
	switch (v)
	{
		case 1:
			printf("Введите число а:");
			scanf("%lf", &a);
			printf("Введите число b:");
			scanf("%lf", &b);
			printf("Введите число c:");
			scanf("%lf", &c);
			printf("%.0lf / %.0lf = %lf\n", a, b, a / b);
			printf("корень из %.0lf = %lf\n", c, sqrt(c));
			x = round((a / b) * 100) / 100;
			y = round(sqrt(c) * 100) / 100;
			printf("%lf\n", x);
			printf("предельная абсолютная погрешность для первых двух чисел: %lf\n", fabs((a / b) - x));
			printf("предельная абсолютная погрешность второго числа: %lf\n", fabs(sqrt(c) - y));
			break;
		case 2:
			printf("Введите число:");
			scanf("%lf", &f);
			stroka = f;
			printf("%s",stroka);
	}
	
}
