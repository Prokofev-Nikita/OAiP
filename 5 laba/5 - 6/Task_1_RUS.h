#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include "Fun_5l.h"

void Task_1_RUS() {
	system("cls");
	setlocale(LC_ALL, "RUS");
	int* mas = NULL;
	int* arr = NULL;
	int flag = 0;
	float n = 0, a = 0;

	printEX1_RUS();

	sizeMas1_RUS(n);
	printf("\n");
	mas = (int*)malloc(sizeof(int) * (int)n);

	fillMas1_RUS(mas, n);
	printMas1_RUS(mas, n);
	printf("\n");

	sizeArr1_RUS(a);
	printf("\n");

	arr = (int*)malloc(sizeof(int) * (int)a);

	fillArr1_RUS(arr, a);
	printArr1_RUS(arr, a);
	printf("\n");
	compareMass1_RUS(mas, arr, n, a);
	printf("\n");

	mas = (int*)realloc(mas, sizeof(int) * (int)n);

	printMas1_RUS(mas, n);

	free(mas);
	free(arr);
}