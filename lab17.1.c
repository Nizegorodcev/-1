#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sort_buble(int*ptrarr, int n);
//void sort_shaker(int*ptrarr, int n);
//void sort_select(int*ptrarr, int n);
void sort_insert(int*ptrarr, int n);
void Creat(int*ptrarr, int n);

int main() {
    int stime;
    long ltime;
    ltime = time(NULL);
    stime = (unsigned) ltime/2;
    srand(stime);
    
    int n;
    printf("Введите размер массива: ");
    scanf("%d", &n);
    int ptrarr[n];
    Creat(ptrarr, n);
    for (int i=0;i<n;i++){
        printf("%i ",ptrarr[i]);
    }
    printf("\nСортировка пузырьком\n");
    
    sort_buble(ptrarr, n);
    for (int i=0;i<n;i++){
        printf("%i ",ptrarr[i]);
    }
    printf("\nСортировка вставками\n");
    
    sort_insert(ptrarr, n);
    for (int i=0;i<n;i++){
        printf("%i ",ptrarr[i]);
    }
    printf("\n");

}

void Creat(int*ptrarr, int n){
    for(int i = 0 ; i < n; i++) {
        ptrarr[i]=(rand() % 9) + 1;
    }
}

void sort_insert(int*a, int n){
    int temp;
    int j;
    for (int i = 1; i<n-1;i++){
        temp=a[i];
        j=i;
        if (a[j-1]>temp && j>0){
            a[j]=a[j-1];
            j--;
        }else{
            a[j]=temp;
        }
    }
}
    
void sort_buble(int*a, int n){
    int i, j;
    for(i = 0 ; i < n - 1; i++) {
        for(j = 0 ; j < n - i - 1 ; j++) {
            if(a[j] > a[j+1]) {
                int tmp = a[j];
                a[j] = a[j+1] ;
                a[j+1] = tmp;
            }
        }
    }
}
