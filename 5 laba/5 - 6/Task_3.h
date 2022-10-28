#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Fun_5l.h"

void Task_3() {
	system("cls");
	int** arr = NULL;
	int* mas = NULL;
	int* true_mas = NULL;
	int* mas_size = NULL;
	float n = 0;

	printEX3();

	sizeArr3(n);

	mas = (int*)calloc(n, sizeof(int));
	mas_size = (int*)malloc(sizeof(int) * n);

	masRows3(mas, n);
	
	arr = (int**)malloc(sizeof(int*) * n);

	fillArr3(arr, mas,mas_size, n);
	printArr3(arr, mas,mas_size, n);
	printf("\n");

	Delete3(arr, mas,true_mas,mas_size, n);
	printArr3(arr, mas,mas_size, n);
	printf("\n");

	freeArr3(arr, n);
	free(mas);
	free(true_mas);
	free(mas_size);
}