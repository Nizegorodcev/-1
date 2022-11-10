#define _CRT_SECURE_NO_DEPRECATE 
#include <stdio.h> 
#include <time.h> 
#include <math.h> 
#include <locale.h> 
struct tm* mytime;
time_t t;
void main() {
    setlocale(0, "rus");
    t = time(NULL);
    mytime = localtime(&t);
    printf("***********************************************************************************************************************\n");
    printf("*************************************************Время по Московскому времени %02d:%02d:%02d***************************\n", mytime->tm_hour, mytime->tm_min, mytime->tm_sec);
    printf("*********************************************сегодня %d день %d года***************************************************\n", (mytime->tm_yday), mytime->tm_year+1900);
    printf("***********************************************************************************************************************");
}
#include<locale.h> 
#include<math.h> 
#include<stdlib.h> 
#define N 1000 
#define start 2 
#define end 4 
 
double* full_elements(double* ptr_array, int n) { 
 float x = start; 
 for (int i = 0; i < n; i++) { 
  float st, en; 
  en = end; 
  st = start; 
  x = x + (en - st) / n; 
  ptr_array[i] = pow(2, x) - 2 * pow(x, 2) - 1; 
 } 
 return ptr_array; 
} 
void put_elements(double* ptr_array, int n) { 
 for (int i = 0; i < (n); i++) { 
  printf("%f \n", ptr_array[i]); 
 } 
} 
double* calc_elements(double* ptr_array, int n) { 
 double temp, sred; 
  for (int i = 0; i < n; i++) { 
   if (i < n - 1) { 
    temp = ptr_array[i + 1]; 
    sred = (temp + ptr_array[i]) / 2; 
    ptr_array[i] = sred; 
   } 
   else { 
    temp = ptr_array[i-1]; 
    sred = (temp + ptr_array[i]) / 2; 
    ptr_array[i] = sred; 
 
   } 
 } 
 return ptr_array; 
} 
double sum_elements(double* ptr_array, int begin, int en) { 
 double sum=0; 
 for (int i = 0; i < sizeof(ptr_array); i++) { 
  if (i >= begin && i <= en) { 
   sum = sum + ptr_array[i]; 
  } 
  } 
 return sum; 
} 
int find_element(double* ptr_array, int n, double element) { 
 for (int i = 0; i < n; i++){ 
  if (ptr_array[i]+0.1 > element|| ptr_array[i]-0.1 < element) { 
   return i; 
  } 
 } 
 return -1; 
} 
double max_elem(double* ptr_array, int k, int m, int size) { 
 double max=-200; 
 for (int i = 0; i < size; i++) { 
  if (i >= k && i<=m && ptr_array[i]>max) { 
   max = ptr_array[i]; 
  } 
 } 
 return max; 
} 
void main() { 
 int size, begin, en; 
 double element; 
 printf("Введите размер массива > "); 
 scanf("%d", &size); 
 double array[N]; 
 full_elements(array, size); 
 put_elements(array, size); 
 calc_elements(array, size); 
 printf("\n"); 
 put_elements(array, size); 
 printf("\n"); 
 puts("Введите начало и конец отрезка суммирования"); 
 scanf("%d %d", &begin, &en); 
 printf("Сумма всех элементов на отрезке (%d;%d) равна%f\n",begin, en, sum_elements(array, begin, en)); 
 puts("Введите элемент индекс котрого необходимо найти"); 
 scanf("%lf", &element); 
 printf("Элементу %f принадлежит индекс %d\n",element, find_element(array, size, element)); 
 puts("Введите промежуток на котором нужно найти самое большое число"); 
 scanf("%d %d", &begin, &en); 
 printf("В промежутке (%d;%d) самым большим является число %f\n", begin, en, max_elem(array, begin, en, size)); 
}
