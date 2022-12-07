#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define NUM 32

int strLen(const char* s)
{
    int i = 0;
    while (s[i] != '\0')
        i++;
    return i;
}


inline void taskСondition2()
{
    printf("2.The strings S and S0 are given. Find from which position the string S0 is contained in the string S. If it is not contained, then output -1\n  Даны строки S и S0. Найти, с какой позиции содержится строка S0 в строке S. Если не содержится, то вывести -1\n");
    printf("\nInput strings S and S0:\n");
}

char* getsStr()
{
    char* str = (char*)calloc(NUM, sizeof(char));
    char ch;
    int pos = 0;
    do
    {
        ch = getchar();
        if (ch == '\n')
        {
            str[pos] = '\0';
            str = (char*)realloc(str, (pos + 1) * sizeof(char));
            return str;
        }

        str[pos] = ch;
        pos++;
        if (pos == 32)
            str = (char*)realloc(str, (pos + 1) * sizeof(char));
    } while (ch != '\0');
}

void findSameString(const char* str, const char* str0, float a)
{
    int i = 0, k = 1;
    int* mas = (int*)malloc(k * sizeof(int));
    while (str[i] != '\0') {
        if (a == -1.0)
        {
            printf("-1");
            break;
        }

        if (str[i] == str0[0]) {
            int j = 0, f = 0;
            while (j < strLen(str0)) {
                if (str[i + j] != str0[j])
                    f = 1;
                j++;
            }

            if (!f) {
                mas = (int*)realloc(mas, (k + 1) * sizeof(int));
                mas[k] = i + 1;
                k++;
            }

        }
        i++;
    }
    if (k > 1)
    {
        for (i = 1; i < k; i++)
        {
            printf("%i ", mas[i]);
        }
    }
    else if (a == -1.0)
    {
        free(mas);
    }
    else
    {
        printf("-1");
    }
}

void size1(const char* str, const char* str0, float& a) {

    int k = 0, i = 0;

    while (str[i] != '\0')
    {
        k++;
        i++;
    }
    i = 0;
    while (str0[i] != '\0')
    {
        i++;
    }
    if (i > k) {
        a = -1.0;
    }
}

void task2()
{
    float a = 0;
    do
    {
        system("cls");
        setlocale(LC_ALL, "RUS");
        int k = 0;
        

        taskСondition2();
        char* str = getsStr();
        char* str0 = getsStr();

        size1(str, str0, a);
        findSameString(str, str0, a);
       
        chekAns(a);

    } while (trueOrflase(a));
}