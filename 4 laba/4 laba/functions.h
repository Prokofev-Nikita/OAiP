#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

void zapolWithHands(int array[100][100], float str, float stlb) {
    for (int i = 0; i < str; i++) {
        for (int j = 0; j < stlb; j++) {
            printf("Input number %i rows, %i colums:", i + 1, j + 1);
            float a;
            while (scanf_s("%f", &a) != 1 || getchar() != ('\n') || a != (int)a) {
                printf("Incorrect number\n");
                printf("Please input number again:");
                rewind(stdin);
            }
            array[i][j] = (int)a;
        }
    }
}

void zapolWithRandom(int array[100][100], int str, int stlb) {
    srand(static_cast<unsigned int>(time(0)));

    for (int i = 0; i < str; i++) {
        for (int j = 0; j < stlb; j++) {
            array[i][j] = (rand() % 200) - 100;
        }
    }
}

void zapolArray(int array[100][100], float& str, float& stlb)
{
    printf("Enter size of matrix\n");
    printf("Number of rows:");
    while (scanf_s("%f", &str) != 1 || getchar() != '\n' || str <= 0 || str != (int)str || str > 100) {
        printf("Incorrect size of matrix!\n");
        printf("Plese enter again:");
        rewind(stdin);
    }
    rewind(stdin);
    printf("Number of columns:");
    while (scanf_s("%f", &stlb) != 1 || getchar() != '\n' || stlb <= 0 || stlb != (int)stlb || stlb > 100) {
        printf("Incorrect size of matrix!\n");
        printf("Plese enter again:");
        rewind(stdin);
    }
    rewind(stdin);
    float r;
    printf("Do you want to enter random?\nIf yes - push 1\nIf no - push 0\n");
    while (scanf_s("%f", &r) != 1 || getchar() != '\n' || ((int)r != 1 && (int)r != 0) || r != (int)r) {
        printf("Incorret number of massiv\n");
        printf("Please, enter again\n");
        rewind(stdin);
    }

    if (r == 1)
        zapolWithRandom(array, str, stlb);
    else
        zapolWithHands(array, str, stlb);
}

void zapolArray3(int array[100][100], float& str, float& stlb)
{
    printf("Enter size of Square matrix:");
    while (scanf_s("%f", &str) != 1 || getchar() != '\n' || str <= 0 || str != (int)str || str > 100) {
        printf("Incorrect size of matrix!\n");
        printf("Plese enter again:");
        rewind(stdin);
    }
    rewind(stdin);
    stlb = str;
    int r;
    printf("Do you want to enter random?\nIf yes - push 1\nIf no - push 0\n");
    while (scanf_s("%i", &r) != 1 || getchar() != '\n' || (r != 1 && r != 0)) {
        printf("Incorret number of massiv\n");
        printf("Please, enter again\n");
        rewind(stdin);
    }

    if (r == 1)
        zapolWithRandom(array, str, stlb);
    else
        zapolWithHands(array, str, stlb);
}

void countXar(int array[100][100], int mass[100], int str, int stlb) {
    int k = 0;
    for (int i = 0; i < str; i++) {
        int xar = 0;
        for (int j = 0; j < stlb; j++) {
            if (array[i][j] * (-1) >= 0 && (array[i][j] * (-1)) % 2 == 0) {
                xar = xar + array[i][j];
            }
        }
        mass[k] = xar;
        k++;
    }
}

void printArray(int array[100][100], int str, int stlb) {
    for (int i = 0; i < str; i++) {
        for (int j = 0; j < stlb; j++) {
            printf("%i\t", array[i][j]);
        }
        printf("\n");
    }
}

void printMass(int mass[100], int str) {
    for (int i = 0; i < str; i++) {
        printf("%i ", mass[i]);
    }
    printf("\n");
}

void countSum(int array[100][100], int str, int stlb, int& sum) {

    int str1, stlb1;
    str1 = str / 2;
    stlb1 = stlb / 2 + stlb % 2;
    for (int i = str1; i < str; i++) {
        for (int j = 0; j < stlb1; j++) {
            sum = sum + array[i][j];
        }
    }
    printf("Sum:%i\n", sum);
}

void countSumDig(int array[100][100], int str, int stlb, int& sumDig) {
   
        if (str % 2)
        {
            for (int j = 0; j < str; j++)
            {
                if (j <= str / 2)
                {
                    for (int i = str - 1; i >= str - 1 - j; i--)
                    {
                        sumDig += array[i][j];
                    }
                }
                else
                {
                    for (int i = str - 1; i >= j; i--)
                    {
                        sumDig += array[i][j];
                    }
                }
 
            }
        }
        else
        {
            for (int j = 0; j < str; j++)
            {
                if (j <= (str / 2) - 1)
                {
                    for (int i = str - 1; i >= str - 1 - j; i--)
                    {
                        sumDig += array[i][j];
                    }
                }
                else
                {
                    for (int i = str - 1; i >= j; i--)
                    {
                        sumDig += array[i][j];
                    }
                }

            }
        }
        printf("\nSumma po Diagonali: %d\n", sumDig);
}
  
void countOtr(int array[100][100], int str, int stlb) {
    int flag = 0;
    for (int i = 0; i < str; i++) {
        for (int j = 0; j < stlb; j++) {
            if (array[i][j] <= 0)
            {
                flag++;
            }
        }
    }
    if (flag > 0) {
        for (int i = 0; i < str; i++) {
            for (int j = 0; j < stlb; j++) {
                array[i][j] = array[i][j] * (-1);
            }
        }
    }
}

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapStrings(int array[100][100], int str, int stlb) {
    for (int i = 0; i < stlb; i++) {
        swap(array[str][i], array[str + 1][i]);
    }
}

void sortArray(int array[100][100], int mass[100], int str, int stlb) {
    for (int i = 0; i < str - 1; i++) {
        for (int j = 0; j < str - i - 1; j++) {
            if (mass[j] < mass[j + 1]) {
                swap(mass[j], mass[j + 1]);
                swapStrings(array, j, stlb);
            }
        }
    }
}

void prov(float& y) {
    while (scanf_s("%f", &y) != 1 || getchar() != '\n' || y < 0 || y > 1 || y != (int)y) {
        printf("Неверное число!\n");
        printf("Ввидете число ещё раз:");
        rewind(stdin);
    }
}
