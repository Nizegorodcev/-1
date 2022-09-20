//вариант 5
//n=3 k=4 m=2
#include <stdio.h>
#include<locale.h>
void main(void)
{
	setlocale(LC_ALL, "RUS");
	int n = 3;
	int x = 333;

	printf("Дано:\n\t  %d \n\t %d \n\t____________\n Ответ:\n\t%4.2f",n,x,n/x);


}