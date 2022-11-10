#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>
#define N 1000
float func(float x);
double* full_elements(double* ptr_array, int n); //заполнение массива случайными значени€ми(нет)
int put_elements(double* ptr_array, int n); //печать элементов массива
double* calc_elements(double* ptr_array, int n); //обработка элементов массива
double sum_elements(double* ptr_array, int begin, int end);
void main()
{
	setlocale(LC_ALL, "rus");
	double array[N];
	int* ptr;
	int size;
	int begin, end;
	puts("x^3 - 4 * x^2 + 2");
	printf("¬ведите размер массива >");
	scanf("%d", &size);
	put_elements(full_elements(array, size), size);
	printf("\n");
	put_elements(calc_elements(array, size), size);
	puts("¬ведите начало диапазона дл€ суммировани€ членов массива ");
	scanf("%d", &begin);
	puts("¬ведите конец диапазона дл€ суммировани€ членов массива ");
	scanf("%d\n", &end);
	printf("%lf", sum_elements(array, begin, end));
}
float func(float x)
{
	float y;
	y = pow(x, 3) - 4 * pow(x, 2) + 2;
	return y;
}
double* full_elements(double* ptr_array, int n)
{
	for (int i = 0; i < n; i++)
	{
		ptr_array[i] = func(i);
	}
	return ptr_array;
}
int put_elements(double* ptr_array, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%lf\n", ptr_array[i]);
	}
}
double* calc_elements(double* ptr_array, int n)
{
	for (int i = 0; i < n; i++)
	{
		ptr_array[i] = -func(i);
	}
	return ptr_array;
}
double sum_elements(double* ptr_array, int begin, int end)
{
	double sum = 0;
	for (; begin<end; begin++) 
	{
		
		sum = sum + ptr_array[begin];
		
	}
	return sum;

}