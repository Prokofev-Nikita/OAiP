#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Fun_5l.h"

void Task_2() {
	system("cls");
	int** arr = NULL;
	float n = 0, m = 0;

	sizeArr2(n, m);
	arr = (int**)malloc(sizeof(int*) * n);
	for (int i = 0; i < n; i++)
		arr[i] = (int*)malloc(sizeof(int) * m);
	fillArr2(arr, n, m);
	printArr2(arr, n, m);
	printf("\n");

	int i_m = m;
	searchDel2(arr, n, i_m);

	printArr2(arr, n, i_m);

	freeArr2(arr, n);
}