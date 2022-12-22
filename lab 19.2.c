#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

typedef struct {
	int numberreys[20];
	int infly[20];
	int outfly[20];
	char direction[20];
	char mark[5];
	int distance[20];
	int flytime[20];
} reys;

int writefile(char* fname, reys* reys, int size);

int main() {
	reys** Reys;
	Reys

	for (int i = 0; i < 20; i++) {
		Reys.numberreys[i] = rand() % 601;
		int x = 0;
		x = rand() % 2;
		if (x == 0) Reys.direction[i] = "Прилетает";
		else Reys.direction[i] = "Улетает";
	}
	for (int i = 0; i < 5; i++) {
		if (i == 0) Reys.mark[i] = "Opel";
		else if (i == 1) Reys.mark[i] = "Pegasus";
		else if (i == 2) Reys.mark[i] = "Red Bird";
		else if (i == 3) Reys.mark[i] = "Flying Bell";
		else if (i == 4) Reys.mark[i] = "Gold Lotus";
	}
	for (int i = 0; i < 20; i++){
		Reys.infly[i] = (rand() % 23) + 1;
		Reys.outfly[i] = (rand() % 23) + 1;
		Reys.distance[i] = (rand() % 1300) + 100;
		Reys.flytime[i] = (rand() % 23) + 1;
	}

	writefile("reys.txt", Reys, 20);
}

int writefile(char* fname, reys* reys, int size) {
	FILE *out;
	if ((out = fopen(fname, "wt")) == NULL) {
		printf("Ошибка при открытии файла");
		return 0;
	}

	for (int i = 0; i < size; i++) {
		fprintf(out, "Номер рейса: %20s; Время вылета: %20d:00; Время прилета: %20d:00; Направление:; Марка самолета: %5s; Дистанция полета в км: %20d; Время полета в часах: %20d;", reys[i].numberreys, reys[i].infly, reys[i].outfly, reys[i].direction, reys[i].mark, reys[i].distance, reys[i].flytime);
		fclose(out);
		return 1;
	}
}
