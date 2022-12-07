#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <assert.h>
#include <ctype.h>
#include <stdio.h>
#include<stdlib.h>

int main()
{

	char s[100];
	char s1[100];
	system("chcp 1251 ");
	setlocale(LC_ALL, "rus");
	printf("Введите текст:\n");
	fgets(s, 100, stdin);
	int cn = 0, i = 0, j = 0, max = 0;
	while (i != strlen(s)) {
		if (s[i] == ' ') {
			cn = 0;
		}
		else {
			cn++;
		}
		if (cn > max) {
			max = cn;
			j = i;
		}
		i++;
	}
	int k = j;
	for (j = 0; j < max; j++) {
		s1[j] = s[k - max + 1 + j];
	}
	s1[j + 2] = '\0';
	printf("%s\n", s1);
}
