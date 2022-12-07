#define _CRT_SECURE_NO_DEPRECATE
#include<locale.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define N 30
void main(void)
{
	char str[N];
	system("chcp 1251 ");
    setlocale(LC_ALL, "rus");
    char s[100];
    char s1[100];
        printf("¬ведите текст:\n");
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
        printf("%s\n", s1);
}
