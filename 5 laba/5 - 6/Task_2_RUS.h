#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include "Fun_5l.h"

void Task_2_RUS() {
	system("cls");
	int** arr = NULL;
	float n = 0, m = 0;

	printEX2_RUS();

	sizeArr2_RUS(n, m);
	arr = (int**)malloc(sizeof(int*) * n);
	for (int i = 0; i < n; i++)
		arr[i] = (int*)malloc(sizeof(int) * m);
	fillArr2_RUS(arr, n, m);
	printArr2_RUS(arr, n, m);
	printf("\n");

	int i_m = m;
	searchDel2_RUS(arr, n, i_m);

	printArr2_RUS(arr, n, i_m);

	freeArr2_RUS(arr, n);
}