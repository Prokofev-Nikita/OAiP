#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "functions.h"

void Task_3() {
    setlocale(LC_ALL, "Rus");
    int array[100][100];
    float str, stlb;
    float z;
    int sum = 0, sumDig = 0;

    printf("В квадратной матрице размером NxN найти сумму элементов в левом нижнем квадрате области\n\n");

    zapolArray3(array, str, stlb);
    system("cls");
    printArray(array, str, stlb);
    printf("\n");
    
    printf("Вы желате найти сумму в левом нижнем квадрате или в нижнем треугольнике матрицы?\nЕсли в левом нижнем квадрате - нажмите 1\nЕсли в нижнем треугольнике - нажмите 0\n");
    while (scanf_s("%f", &z) != 1 || getchar() != '\n' ||  z < 0 || z > 1 || z != (int)z){
        printf("Неверное число!\nВведите число ещё раз!\n");
        rewind(stdin);
    }
    if (z == 1) {
        countSum(array, str, stlb, sum);
        printf("\n");
    }
    else
    countSumDig(array, str, stlb, sumDig);

}