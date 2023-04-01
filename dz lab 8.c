#define _CRT_SECURE_NO_DEPRECATE
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include<math.h>

void main()
{
	setlocale(LC_ALL, "RUS");
	double a, b, c, x, y, f;
	a = 0;
	b = 0;
	c = 0;
	x = 0;
	double g;
	int v;
	int d;
	int l;
	double okr1,okr2;
	double drob,z,pribl,chislo;
	char stroka[1000];
	int u;
	int kol = 0;
	printf("Выберите действие:\n 1)Какое выражение точнее\n 2)Округлить сомнительные цифры числа, оставив верные знаки.Определить абсолютную погрешность результата.\n3)Найти предельные абсолютную и относительную погрешности приближенного числа, все цифры которого по умолчанию верные.\n");
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
		printf("Введите погрешность в процентах:");
		scanf("%lf", &drob);
		for (int i = 1; i < 10000000; i++)
		{
			 okr1= trunc(f * pow(10,i)) / pow(10,i);
			 okr2 = trunc(f * pow(10, i+1)) / pow(10, i+1);
			 if (okr1 > drob / 100)
			 {
				 z = okr2 - okr1;
				 if (z > drob / 100)
				 {
					 continue;
				 }
				 else
				 {
					 printf("%lf\n", okr1);
					 break;
				 }
			 }
			 else
			 {
				 printf("%lf\n", okr1);
				 break;
			 } 
			
		}
		printf("%lf", okr1 * (drob / 100));
		break;
	case 3:
		printf("Введите число");
		scanf("%lf", &chislo);
		d = chislo;
		g = chislo - d; 
		printf("%lf\n", g);
	}
	
	for (int i = 0; i < 100000; i++)
	{
		g = g * 10;
		u = g;
		if (u - g == 0)
		{
			break;
		}
	}
	for(int i=0;i<100;i++)
	{
		if (u > pow(10, i))
		{
			kol = kol + 1;
		}
	}
	printf("%i\n", kol);
	printf("Абсолютная погрешность: %lf", 5 * pow(10, -kol));
}

