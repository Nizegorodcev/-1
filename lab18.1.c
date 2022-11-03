#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>



struct point {
	float x;
	float y;
	char name;
};

typedef struct point Point;\

void put_point(Point z);
float dist(Point z, Point w);
Point midle(Point z, Point w);
float quater(Point x);
Point edit(Point z);

int main()
{
	int v=-1;
	float m1, m2;
	Point b,a;
	b.x = 5;
	b.y = -3;
	a.x = 9;
	a.y = 2;
	b.name = 'B';
	a.name = 'A';
	setlocale(LC_ALL, "rus");
	while (v != 0)
	{
	
		printf("\nВыберите операцию:\n1.) Вывести информацию о точках а и b\n2.) Вывести дистанцию между точками a и b\n3.) Вывести точку, которая является серединой отрезка ab\n4.) Вывести к каким четвертям принадлежат точки\n5.) Изменить значение точек a и b\n0.) Завершение работы с программой\n");
		scanf("%d", &v);
		switch (v)
		{
		case 1:
			put_point(a);
			put_point(b);
			break;
		case 2:
			printf("Дистанция между точками = %f\n", dist(b, a));
			break;
		case 3:
			printf("Точка середины отрезка ab = ");
			put_point(midle(a,b));

			break;
		case 4:
			printf("\n Точка a принадлежит к %.0f четверти\n", quater(a));
			printf("\n Точка b принадлежит к %.0f четверти\n", quater(b));
			break;
		case 5:
			a = edit(a);
			b = edit(b);
			break;
		case 0:
			v = 0;
			break;
		default:
			printf("\nОшибка\n");
		}
	}
	
	
	
	

}

void put_point(Point z) 
{
	 printf("point %c (%.1f, %.1f)", z.name, z.x, z.y);
}

float dist(Point z, Point w) 
{
	return fabs(pow((pow(z.x - w.x, 2) + (pow(z.y - w.y, 2))), 1. / 2));
}

Point midle(Point z, Point w)
{
	Point b;
	b.x = (z.x + w.x) / 2.;
	b.y = (z.y + w.y) / 2;
	b.name = 'm';
	return b;

}
float quater(Point z)
{
	if (z.x > 0 && z.y > 0) return 1;
	if (z.x < 0 && z.y > 0) return 2;
	if (z.x < 0 && z.y < 0) return 3;
	if (z.x > 0 && z.y < 0) return 4;
}

Point edit(Point z)
{
	Point m;
	float i, j;
	m.name = 'M';
	printf("Введите значение точки %c.x",z.name);
	scanf("%f", &i);
	printf("Введите значение точки %c.y",z.name);
	scanf("%f", &j);
	m.x = i;
	m.y = j;
	return (m);
}
