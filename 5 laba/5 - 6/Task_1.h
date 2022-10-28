#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Fun_5l.h"

void Task_1() {
	system("cls");
	int* mas = NULL;
	int* arr = NULL;
	int flag = 0;
	float n = 0, a = 0;

	printEX1();

	sizeMas1(n);
	printf("\n");
	mas = (int*)malloc(sizeof(int) * (int)n);

	fillMas1(mas, n);
	printMas1(mas, n);
	printf("\n");

	sizeArr1(a);
	printf("\n");

	arr = (int*)malloc(sizeof(int) * (int)a);

	fillArr1(arr, a);
	printArr1(arr, a);
	printf("\n");
	compareMass1(mas, arr, n, a);
	printf("\n");

	mas = (int*)realloc(mas, sizeof(int) * (int)n);

	printMas1(mas, n);

	free(mas);
	free(arr);
}