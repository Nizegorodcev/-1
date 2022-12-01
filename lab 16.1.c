#define _CRT_SECURE_NO_DEPRECATE
#include <locale.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double func(float x);
double put_elements(double* ptr_array, int n);
double* full_elements(double* ptr_array, int n);
double* calc_elements(double* ptr_array, double* calc_array, int n);
double sum_elements(double* ptr_array, int begin, int end);
void main(void)
{
	setlocale(LC_ALL, "rus");
	double* ptr_array;
	double* calc_array;
	int size,begin,end;
	puts("x^3 - 4 * x^2 + 2");
	printf("¬ведите размер массива > ");
	scanf("%d", &size);
	ptr_array = (double*)malloc(size* sizeof(double));
	calc_array = (double*)malloc(size * sizeof(double));
	if(ptr_array == NULL) {

		puts("error");
		return -1;
	}
	put_elements(full_elements(ptr_array, size), size);
	printf("\n");
	put_elements(calc_elements(ptr_array,calc_array, size), size);
	puts("¬ведите начало диапазона дл€ суммировани€ членов массива ");
	scanf("%d", &begin);
	puts("¬ведите конец диапазона дл€ суммировани€ членов массива ");
	scanf("%d", &end);
	printf("%lf", sum_elements(ptr_array, begin, end));
	free(ptr_array);
}
double func(float x)
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
double put_elements(double* ptr_array, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%lf\n", ptr_array[i]);
	}
}
double* calc_elements(double* ptr_array,double* calc_array, int n)
{
	for (int i = 0; i < n; i++)
	{
		calc_array[i] = -ptr_array[i];
	}
	return calc_array;
}
double sum_elements(double* ptr_array, int begin, int end)
{
	double sum = 0;
	printf(" begin:%lf\n", ptr_array[begin]);
	printf(" end:%lf\n", ptr_array[end]);
	for (; begin < end; begin++)
	{
		sum = sum + ptr_array[begin];
	}
	return sum;

}