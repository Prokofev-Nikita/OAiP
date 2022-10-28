#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include "functions.h"


void Task_2() {
    setlocale(LC_ALL, "Rus");
    int array[100][100];
    float str, stlb;
    printf("Проверить, все ли строки матрицы содержат хотя бы один отрицательный элемент\n Если да, то изменить знаки всех элементов матрицы на обратные.\n\n");

    zapolArray(array, str, stlb);
    system("cls");
    printArray(array, str, stlb);
    printf("\n");
    countOtr(array, str, stlb);
    printArray(array, str, stlb);
    printf("\n");
}