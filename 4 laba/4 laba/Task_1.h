#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include "functions.h"

void Task_1() {
    setlocale(LC_ALL, "Rus");
    int array[100][100];
    float str, stlb;

    printf("Характеристикой строки целочисленной матрицы назовем сумму ее отрицательных четных элементов.\nПереставляя строки заданной матрицы, расположить их в соответствии с убыванием характеристик.\n\n");

    zapolArray(array, str, stlb);
    printArray(array, str, stlb);
    printf("\n");

    int mass[100];
    countXar(array, mass, str, stlb);
    printMass(mass, str);
    printf("\n");

    sortArray(array, mass, str, stlb);
    printMass(mass, str);
    printf("\n");
    printArray(array, str, stlb);
    printf("\n");
}