#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include "Fun_5l.h"

void Task_3_RUS() {
	system("cls");
	setlocale(LC_ALL, "RUS");
	int** arr = NULL;
	int* mas = NULL;
	int* mas_size = NULL;
	int* true_mas = NULL;
	float n = 0;

	printEX3_RUS();

	sizeArr3_RUS(n);

	mas = (int*)calloc(n, sizeof(int));

	masRows3_RUS(mas, n);
	
	arr = (int**)malloc(sizeof(int*) * n);
	mas_size = (int*)malloc(sizeof(int) * n);

	fillArr3_RUS(arr, mas,mas_size, n);
	printArr3(arr, mas,mas_size, n);
	printf("\n");

	Delete3(arr, mas,true_mas,mas_size, n);
	printArr3(arr, mas,mas_size, n);
	printf("\n");

	freeArr3_RUS(arr, n);
	free(mas);
	free(true_mas);
	free(mas_size);
}