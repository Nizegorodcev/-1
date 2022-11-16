#define _CRT_SECURE_NO_DEPRECATE 
#include <stdio.h> 
#include <time.h> 
#include <math.h> 
#include <locale.h> 
struct tm* mytime;
struct database
{
    char name, surname,reason;//им€, фамили€, причина
    struct tm* mytime;
    
};
void main() 
{
    setlocale(0, "rus");
    int v = 50;
    while (v != 0)
    {
        printf("¬ыберите действие:\n");
        printf("");
    }
}