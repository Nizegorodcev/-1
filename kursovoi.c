#define _CRT_SECURE_NO_DEPRECATE 
#include <stdio.h> 
#include <string.h> 
#include <malloc.h> 
#include <windows.h> 
#include <stdlib.h> 
 
typedef struct { 
 int data[3]; 
 int hour; 
 int min; 
 char name[100], reason[100]; 
}ITEM; 
 
 
int init(ITEM* point, int size, int n); //функция ввода данных для записи 
ITEM* read(char* filename, int* size);//чтение 
void put(ITEM* point, int size);//ввод 
int write(ITEM* point, char* filename, int size);//функция записи в файл 
int searchUser(ITEM* point, char* name, int size); 
int searchData(ITEM* point, int* hour, int size); 
void del(ITEM* point, char* filename, int* size, int n); 
 
void main() 
{ 
 system("chcp 1251"); 
 ITEM* point = NULL; // объявление БД 
 int size, number, n, v, hour, min; 
 char filename[120], name[100], reason[100]; 
 while (1) 
 { 
  printf("Выберите действие:\n1)Ввод данных пользователя для записи.\n2)Запись нового пользователя.\n3)Поиск по пользователю.\n4)Чтение.\n5)Поиск по времени.\n6)Удаление записи.\n0)Выйти из программы.\n"); 
  scanf("%d", &v); 
  switch (v) 
  { 
  case 1: 
   system("cls"); 
   printf("Введите кол-во записей: "); 
   scanf("%d", &size); 
   point = (ITEM*)malloc(size * sizeof(ITEM)); 
   n = 0; 
   init(point, size, n); 
   break; 
  case 2: 
   system("cls"); 
   if (point == NULL) { 
    printf("База данных не найдена\n"); 
    break; 
   } 
   printf("Введите имя файла для записи: "); 
   scanf("%s", &filename); 
   write(point, filename, size); 
   break; 
  case 3: 
   system("cls"); 
   if (point == NULL) { // проверяется наличие БД 
    printf("База данных не найдена.\n"); 
    break; 
   } 
   printf("Укажите имя пользователя: "); 
   scanf("%s", &name); 
   printf("***************************************************************\n"); 
   int a = searchUser(point, name, size); 
   if (a >= 0) { 
    printf("Дата: %d.%d.%d\n", point[a].data[0], point[a].data[1], point[a].data[2]); 
    printf("Время: %d:%d\n", point[a].hour, point[a].min); 
    printf("Причина: %s\n", &point[a].reason); 
    printf("Имя пользователя: %s\n", &point[a].name); 
   } 
   else { 
    printf("Абонент не найден.\n"); 
    printf("***************************************************************\n"); 
   } 
   break; 
  case 4: 
   printf("Введите имя файла, который необходимо прочитать: "); 
   scanf("%s", &filename); 
   point = read(filename, &size); 
   put(point, size); 
   break; 
  case 5: 
   system("cls"); 
   if (point == NULL) { // проверяется наличие БД 
    printf("База данных не найдена.\n"); 
    break; 
   } 
   printf("Укажите время(час:минуты): "); 
   scanf("%s %s", &hour, &min); 
   printf("***************************************************************\n"); 
   int b = searchData(point, hour, size); 
   if (b >= 0) { 
    printf("Дата: %d.%d.%d\n", point[b].data[0], point[b].data[1], point[b].data[2]); 
    printf("Время: %d:%d\n", point[b].hour, point[b].min); 
    printf("Причина: %s\n", &point[b].reason); 
    printf("имя пользователя: %s\n", &point[b].name); 
   } 
   else { 
    printf("Абонент не найден.\n"); 
    printf("***************************************************************\n"); 
   } 
   break; 
  case 6: 
   del(point, filename, &size, &n); 
  case 0: 
   v = 0; 
   break; 
  } 
 } 
} 
 
//функция заполнения бд 
int init(ITEM* point, int size, int n) { 
 for (int i = n; i < size; i++) { 
  printf("Введите дату: "); 
  scanf("%d.%d.%d", &point[i].data[0], &point[i].data[1], &point[i].data[2]); 
  printf("Введите время: "); 
  scanf("%d:%d", &point[i].hour, &point[i].min); 
  printf("Введите причину перезагрузки: "); 
  scanf("%s", &point[i].reason); 
  printf("Введите имя пользователя(Фамилия_Имя): "); 
  scanf("%s", &point[i].name); 
 } 
 return point; 
} 
 
 
ITEM* read(char* filename, int* size)//чтение 
{ 
 FILE* f; // объявляем переменную 
 int ind = 0;  // номер строки 
 ITEM* list = (ITEM*)malloc(500 * sizeof(ITEM*)); 
 char b[200]; // массив для хранения строки из файла 
 f = fopen(filename, "r"); 
 if (f != NULL) { 
  printf("\nФайл открыт.\n"); 
  while (!feof(f)) { 
   fgets(b, 200, f);
if (b[0] == '\n') 
    continue; 
   sscanf(b, "%d.%d.%d %d:%d %s %s", 
    &list[ind].data[0], 
    &list[ind].data[1], 
    &list[ind].data[2], 
    &list[ind].hour, 
    &list[ind].min, 
    list[ind].reason, 
    list[ind].name); 
   ind++; 
  } 
  *size = ind; // возвращаем число записей 
  return list; 
 } 
 else { 
  printf("\nОткрыть файл не удалось.\n"); 
  return NULL; 
 } 
 fclose(f); // закрытие файла 
 return NULL; 
} 
 
 
 
// функция вывода на экран 
void put(ITEM* point, int size) { 
 printf("\tНомер строки\t\tдата\t\tвремя\t\tпричина\t\tпользователь\n"); 
 for (int i = 0; i < size; i++) { 
  printf("\n\n%d. ", i + 1); 
  printf("\n\t%d.%d.%d\t", point[i].data[0], point[i].data[1], point[i].data[2]); //дата 
  printf("\t%d:%d\t", point[i].hour, point[i].min); //время 
  printf("\t%s\t", point[i].reason); //причина 
  printf("\t%s\t", point[i].name); //пользователь 
  printf("\n"); 
 } 
 printf("\t"); 
} 
 
 
int write(ITEM* point, char* filename, int size) //функция записи в файл 
{ 
 FILE* f; 
 if ((f = fopen(filename, "w")) == NULL) { 
  printf("Невозможно открыть файл для записи. \n"); 
  system("pause"); 
 } 
 else { 
  printf("Файл успешно открыт.\n"); 
  for (int i = 0; i < size; i++) { 
   fprintf(f, "%d.%d.%d ", point[i].data[0], point[i].data[1], point[i].data[2]); //дата 
   fprintf(f, "%d:%d ", point[i].hour, point[i].min); //время 
   fprintf(f, "%s ", point[i].reason); //причина 
   fprintf(f, "%s ", point[i].name); //пользователь 
   system("pause"); 
  } 
  fclose(f); 
  printf("\n Данные записаны в файл.\n"); 
 } 
 return 0; 
} 
 
int searchUser(ITEM* point, char* name, int size) { 
 int number = -1; 
 for (int i = 0; i < size; i++) { 
  if (strcmp(name, point[i].name) == 0) { // проверяем строки на соответствие введенным данным 
   return i; //возвращаем номер 
  } 
 } 
 return number; 
} 
 
int searchData(ITEM* point, int* hour, int size) { 
 int number = -1; 
 for (int i = 0; i < size; i++) { 
  if (strcmp(hour, point[i].hour) == 0)     //не работает 
   return i; //возвращаем номер 
 } 
 return number; 
} 
 
void del(ITEM* point, char* filename, int* size, int n) 
{ 
 int i; 
 point = read(filename, &size); 
 printf("Выберите строку которую хотите удалить:"); 
 scanf("%i", &i); 
 if (i < 0 || i > n) 
 { 
  printf("строка с номером %i не существует\n", i); 
  return; 
 } 
 for (i--; i < n - 1; i++) 
  point[i] = point[i + 1]; 
 n--; 
}
