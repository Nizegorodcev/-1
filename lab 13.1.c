#define _CRT_SECURE_NO_DEPRECATE 
#include <stdio.h> 
#include<stdlib.h>
#include <math.h> 
#include <locale.h> 
#include <string.h>
#include<ctype.h>
#define N 100

void main()
{
	
	system("chcp 1251 ");
	setlocale(LC_ALL, "rus");
	char Snew[20+N] = "Привет ";
	char Name[N];
	printf("Введите имя пользователя:");
	scanf("%s", Name);
	for (int i = 0; i < strlen(Name); i++)
	{
		Name[i] = toupper(Name[i]);
	}
	for (int i = strlen(Name); i < 40; i++)
	{
		Name[i] = '!';
	}
	Name[40] = '\0';
	puts(strcat(Snew, Name));	
}
