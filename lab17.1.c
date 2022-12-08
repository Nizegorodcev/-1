#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<locale.h>
#define n 20
void sort_buble(int* ptrarr);
//void sort_shaker(int*ptrarr, int n);
void sort_select(int*ptrarr);
void sort_insert(int* ptrarr);
void put(int* ptrarr);

int main() {
    setlocale(LC_ALL, "RUS");
    int ptrarr[n];
    put(ptrarr, n);
    for (int i = 0; i < n; i++) {
        printf("%i\n", ptrarr[i]);
    }
    printf("\nСортировка пузырьком\n");

    sort_buble(ptrarr, n);
    for (int i = 0; i < n; i++) {
        printf("%i\n", ptrarr[i]);
    }
    printf("\nСортировка вставками\n");

    sort_insert(ptrarr);
    for (int i = 0; i < n; i++) {
        printf("%i\n", ptrarr[i]);
    }
    printf("\n");
    printf("\nСортировка простым выбором\n");
    sort_select(ptrarr);
    for (int i = 0; i < n; i++) {
        printf("%i\n", ptrarr[i]);
    }
}

void put(int* ptrarr) {
    for (int i = 0; i < n; i++) {
        ptrarr[i] = rand();
    }
}

void sort_insert(int* a) {
    int temp;
    int j;
    for (int i = 1; i < n - 1; i++) {
        temp = a[i];
        j = i;
        if (a[j - 1] > temp && j > 0) {
            a[j] = a[j - 1];
            j--;
        }
        else {
            a[j] = temp;
        }
    }
}

void sort_buble(int* a) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
}
void sort_select(int* ptrarr)
{
    int k = n;
    for (int j = 0; j < k ; j++)
    {
        int max = ptrarr[0], nom = 0;
        for (int i = 0; i < k; i++)
        {
            if (ptrarr[i] > max) 
            {
                max = ptrarr[i];
                nom = i;
            }
            int b = ptrarr[k - 1];
            ptrarr[k - 1] = ptrarr[nom];
            ptrarr[nom] = b;
            k--;
        }
    }
}
