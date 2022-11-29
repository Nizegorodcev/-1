#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include<locale.h>
#include<time.h>
typedef struct stroka
{
	char name[20], surname[20],reason[100];
	struct tm* mytime;
	
}ITEM;
ITEM A[1000];
int n;
void Print(void)//Печать таблицы
{
	for (int i = 0; i < n; i++)
	{
		printf("Номер строки Фамилия Имя Дата время причина");
		printf("%i %s %s %i.%i.%i %i:%i\ %s", i + 1, A[i].surname,A[i].name,A[i].mytime->tm_mday, A[i].mytime->tm_mon, A[i].mytime->tm_year, A[i].mytime->tm_hour, A[i].mytime->tm_min, A[i].reason);
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
	scanf("%s",A[n].surname);
	printf("Введите имя:");
	scanf("%s", A[n].name);
	printf("Введите День:");
	scanf("%i*", A[n].mytime->tm_mday);
	printf("Введите месяц:");
	scanf("%i*", A[n].mytime->tm_mon);
	printf("Введите год:");
	scanf("%i", A[n].mytime->tm_year);
	printf("Введите часы:");
	scanf("%i", A[n].mytime->tm_hour);
	printf("Введите минуты:");
	scanf("%i", A[n].mytime->tm_min);
	printf("Введите причину:");
	scanf("%s", A[n].reason);
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
		fprintf(stderr, "строка с номером %i не существует\n", i);
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
	printf("Поиск по заданным критериям\n");
	printf("Введите фамилию:");
	scanf("%s\n", A[n].surname);
	printf("Введите имя:");
	scanf("%s\n", A[n].name);
	printf("Введите часы:");
	scanf("%i\n", A[n].mytime->tm_hour);
	printf("Введите минуты:");
	scanf("%i\n", A[n].mytime->tm_min);
}
void main()
{
	setlocale(LC_ALL, "rus");
	int v=100;
	while (v != 0)
	{
		printf("Выберите действие:\n1)Добавление новой строки.\n2)Поиск по заданным критериям.\n3)Печать массива.\n0)Выйти из программы.");
		scanf("%i", &v);
		switch (v)
		{
		case 1:
			includes();
			break;
		}
	}
}

