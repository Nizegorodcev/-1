#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include<locale.h>
#include<time.h>
#include<stdlib.h>
typedef struct stroka
{
	char name[20], surname[20], reason[100];
	int day, mon, year, hour, min;

}ITEM;
ITEM A[1000];
int n=0;
void Print(void);//Печать таблицы
void includes(void);//Добавление строки
void del(void);//Удаление строки
void load(void);//Загрузка данных из файла
void search(void);//Поиск элемента
void main()
{
	system("chcp 1251 ");
	setlocale(LC_ALL, "rus");
	int v = 100;
	while (v != 0)
	{
		printf("Выберите действие:\n1)Добавление новой строки.\n2)Поиск по заданным критериям.\n3)Печать массива.\n0)Выйти из программы.\n");
		scanf("%i", &v);
		switch (v)
		{
		case 1:
			includes();
			break;
		case  2:
			search();
			break;
		case 3:
			Print();
			break;
		
		case 0:
			v = 0;
			break;
		}
	}
}
void Print(void)//Печать таблицы
{
	for (int i = 0; i < n; i++)
	{
		printf("|Номер строки|Фамилия            |Имя                 | Дата   | |время|причина\n");
		printf("|%i          |%-20s|%-20s|%i.%i.%i| |%i:%i|%-20s|\n", i + 1, A[i].surname, A[i].name, A[i].day, A[i].mon, A[i].year, A[i].hour, A[i].min, A[i].reason);
	}
}
void includes(void)
{
	if (n == 999)
	{
		printf("Превышен размер массива");
		return 0;
	}
	printf("Введите фамилию:");
	scanf("%s", &A[n].surname);
	printf("Введите имя:");
	scanf("%s", &A[n].name);
	printf("Введите День:");
	scanf("%i*", &A[n].day);
	printf("Введите месяц:");
	scanf("%i*", &A[n].mon);
	printf("Введите год:");
	scanf("%i", &A[n].year);
	printf("Введите часы:");
	scanf("%i", &A[n].hour);
	printf("Введите минуты:");
	scanf("%i", &A[n].min);
	printf("Введите причину:");
	scanf("%s", &A[n].reason);
	n++;
}
void del(void)
{
	int i;
	Print();
	printf("Выберите строку которую хотите удалить:");
	scanf("%i", &i);
	if (i < 1 || i > n)
	{
		printf("строка с номером %i не существует\n", i);
		return;
	}
	for (i--; i < n - 1; i++)
		A[i] = A[i + 1];

	n--;
}
void load(void)
{

}
void search(void)
{
	ITEM name, surname;
	ITEM hour, min;
	ITEM* a, * b, * c, * d;

	printf("Поиск по заданным критериям\n");
	printf("Введите фамилию:");
	scanf("%s", &surname);
	printf("Введите имя:");
	scanf("%s", &name);
	printf("Введите часы:");
	scanf("%i", &hour);
	printf("Введите минуты:");
	scanf("%i", &min);
	a = &name;
	b = &surname;
	c = &hour;
	d = &min;
	ITEM* x;
	ITEM* y;
	ITEM* z;
	ITEM* e;
	for (int i = 0; i < n; i += 7)
	{


		e = &A[i];
		x = &A[i + 1];
		y = &A[i + 5];
		z = &A[i + 6];
		if (memcmp(b, e, 1000) == 0 && memcmp(a, x, 1000) == 0 && memcmp(y, c, 1000) == 0 && memcmp(z, d, 1000) == 0)
		{
			printf("|%i|%-20s|%-20s|%i.%i.%i|%i:%i|%-20s|\n", i + 1, A[i].surname, A[i].name, A[i].day, A[i].mon, A[i].year, A[i].hour, A[i].min, A[i].reason);
		}
	}
}
