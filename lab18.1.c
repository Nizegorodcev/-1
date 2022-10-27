#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>

struct point 
{
	float x;
	float y;
	char name;
};
typedef struct  point Point;
void put_point(Point z);
float dist(Point z, Point w);
float middle1(Point z, Point w);
float middle2(Point z, Point w);
float quarter(Point z);
float edit();
int main()
{
	int v;
	
	Point b, a;
	setlocale(LC_ALL, "rus");
	a = (Point){ 1.f,2.f,'A' };
	b.name = 'B'; b.x = 5; b.y = -3;
	a.x = 9;
	a.y = 2;
	put_point(b);
	//printf("\n%f", dist(b, a));
	//printf("\n%f;%f", middle1(b, a), middle2(b, a));
	
	
	printf("Введите номер операции, которую вы хотите выполнить:\n1.)Вывести информацию о точках a,b\n2.)Декартовое расстояниме между точками\n3.)Середина отрезка между двумя точками\n4.)Определение координатной четверти точки\n5.)Изменить координаты точек a,b\n0)Завершить программу\n");
	scanf("\n%d", &v);
	switch (v)
	{
	case 1:
		put_point(a);
		put_point(b);
		break;
	case 2:
		printf("\n%f", dist(b, a));
		break;
	case 3:
		printf("\n(%.2f,%.2f", middle1(b, a), middle2(b, a));
		break;
	case 4:
		printf("\nКоординаты точки a принадлежат  %.0f четверти", quarter(a));
		printf("\nКоординаты точки b  принадлежат %.0f четверти", quarter(b));
		break;
	case 5:

	case
	default: 
		printf("Ошибка");
	}
}
void put_point(Point z) 
{
	printf("point %c (%.1f, %.1f)", z.name, z.x, z.y);
}
float dist(Point z, Point w)
{
	return(fabs(sqrt(pow(z.x - w.x, 2) + pow(z.y - w.y, 2))));
}
float middle1(Point z, Point w)
{
	return ((z.x + w.x) / 2);
}
float middle2(Point z, Point w)
{
	return((z.y + w.y) / 2);
}
float quarter(Point z)
{
	if (z.x > 0 && z.y > 0) return 1;
	if (z.x < 0 && z.y > 0) return 2;
	if (z.x < 0 && z.y < 0) return 3;
	if (z.x > 0 && z.y < 0) return 4;
}
float edit()
{

}