#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>
#define N  1000
int func(int x);
int* full_elements(int* ptr_array, int n); 
int put_elements(int* ptr_array, int n); 
int* calc_elements(int* ptr_array, int n); 
int sum_elements(int* ptr_array, int begin, int end);
int type(int v);
int oneplus(int* ptr_array, int size);
int lastplus(int* ptr_array, int size);
int oneminus(int* ptr_array, int size);
int lastminus(int* ptr_array, int size);
int type(int v, int oneplus, int lastplus, int oneminus, int lastminus);
void main()
{
	setlocale(LC_ALL, "rus");
	int array[N];
	int* ptr;
	int;
	int begin, end;
	int size;
	int v;
	int a, b, c, d;
	
	puts("x^3 - 4 * x^2 + 2");
	printf("Введите число элементов массива >");
	scanf("%d", &size);
	put_elements(full_elements(array, size), size);
	printf("\n");
	put_elements(calc_elements(array, size), size);
	puts("Введите начало диапазона суммирования ");
	scanf("%d", &begin);
	puts("Введите конец диапазона суммирования ");
	scanf("%d", &end);
	if (end > size)
	{
		printf("Ошибка");
	}
	else printf("%i\n", sum_elements(array, begin, end));
	printf("Выберите между какой интервал вы будете рассматривать:\n1)Поиск  индекса элемента находящегося в середине интервала между первым и последним положительным элементом\n2)Поиск элемента находящегося в середине интервала между первым отрицательным и последним отрицательным элементом\n");
	scanf("%i", &v);
	a = oneplus(array, size);
	b = lastplus(array, size);
	c = oneminus(array, size);
	d = lastminus(array, size);
	printf("%i", type(v, a, b, c, d));
}
int func(int x)
{
	int y;
	y = pow(x, 3) - 4 * pow(x, 2) + 2;
	return y;
}
int* full_elements(int* ptr_array, int n)
{
	int oneplus;
	for (int i = 0; i < n; i++)
	{
		ptr_array[i] = func(i);
	}
	return ptr_array;
}
int put_elements(int* ptr_array, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%i\n", ptr_array[i]);
	}

}
int* calc_elements(int* ptr_array, int n)
{
	for (int i = 0; i < n; i++)
	{
		ptr_array[i] = -func(i);
	}
	return ptr_array;
}
int sum_elements(int* ptr_array, int begin, int end)
{
	int sum = 0;
	for (; begin < end+1; begin++)
	{
		
		sum = sum + ptr_array[begin];

	}
	return sum;

}
int oneplus(int* ptr_array,int size)
{
	int a;
	for (int i = 0; i < size; i++)
	{
		if (ptr_array[i] > 0)
		{
			a = i;
			return a;
		}
		
	}
}
int lastplus(int* ptr_array, int size)
{
	int b;
	for (int i = 0; i < size; i++)
	{
		if (ptr_array[i] > 0)
		{
			b = i;
		}
	}
	return b;

}
int oneminus(int* ptr_array, int size)
{
	int a;
	for (int i = 0; i < size; i++)
	{
		if (ptr_array[i] < 0)
		{
			a = i;
			return a;
		}

	}
}
int lastminus(int* ptr_array, int size)
{
	int b;
	for (int i = 0; i < size; i++)
	{
		if (ptr_array[i] < 0)
		{
			b = i;
		}
	}
	return b;
}
int type(int v,int oneplus,int lastplus,int oneminus, int lastminus)
{
	int c=0;
	if (v == 1)
	{
		c = ((lastplus-oneplus)/2) +1;
	}
	if (v == 2)
	{
		c = ((lastminus - oneplus) / 2)+1;
	}
	return c;
}
