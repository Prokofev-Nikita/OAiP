#include <stdio.h>
#include <locale.h>
#include "Task_1.h"
#include "Task_2.h"
#include "Task_3.h"
#include "functions.h"
#define _CRT_SECURE_NO_WARNINGS

int main() {
    setlocale(LC_ALL, "Rus");
    float y;
    do {
        float a;
        printf("Введите номер задания:");
        while (scanf_s("%f", &a) != 1 || getchar() != '\n' || a != (int)a || (int)a <= 0 || (int)a > 3) {
            printf("\nНеверное число!\nВведите число ещё раз:");
            rewind(stdin);
        }
        rewind(stdin);

        system("cls");

        switch ((int)a)
        {
        case 1: {
            Task_1();
        }
              break;
        case 2: {
            Task_2();
        }
              break;
        case 3: {
            Task_3();
        }
              break;
        }
        printf("Если вы желаете продолжить проверку задание - нажмите 1\nЕсли закончить - нажмите 0\n");
        prov(y);
        }
    while (y == 1);
    return 0;
}