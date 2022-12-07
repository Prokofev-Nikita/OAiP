#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define NUM 32

int strLen(char* s)
{
    int i = 0;
    while (s[i] != '\0')
        i++;
    return i;
}


inline void taskСondition()
{
    printf("1.A string is given. Find the number of words consisting of an even number of letters\nДана строка. Найти количество слов, состоящих из четного количества букв \n");
    printf("\nInput string\n");
}

/*void getsStr(char*** s) {

    int i = 0, j = 0;
    char c;
    do
    {
        j = 0;
        (*s) = (char**)realloc((*s), (i + 1) * sizeof(char*));
        (*s)[i] = (char*)malloc(1 * sizeof(char));
        while ((c = getchar()) != EOF && c != '\n')
        {
            (*s)[i][j++] = c;
            (*s)[i] = (char*)realloc((*s)[i], (j + 1) * sizeof(char));

        }
        (*s)[i][j] = '\0';

    } while ((*s)[i][j - 1] != '|');

}*/

void getStr(char** s)
{
    int i = 0, c;

    while ((c = getchar()) != EOF && c != '\n')
    {

        (*s)[i++] = c;
        (*s) = (char*)realloc((*s), (i + 1) * sizeof(char));

    }
    (*s)[i] = '\0';
}

bool isLetter(const char s)
{
    if ((s >= 'a' && s <= 'z') || (s >= 'A' && s <= 'Z'))
        return true; // БУКВА
    return false; // НЕ БУКВА 
}

void shift(char** str, const int pos, const int size) {
    for (int i = pos; i < size - 1; i++) {
        (*str)[i] = (*str)[i + 1];
    }
}

void erase(char** str, const int pos, const int size) {
    shift(str, pos, size);
    *str = (char*)realloc(*str, (size - 1) * sizeof(char));
}

void processString(char** str) {
    int i = 0;
    int size = strLen(*str);
    while (i < size) {
        if (!isLetter((*str)[i])) {
            (*str)[i] = ' ';
        }
        i++;
    }

    i = 0;
    while ((*str)[i] == ' ') {
        erase(str, i, size);
        size--;
    }

    if (size > 0) {
        i = size - 1;
        while ((*str)[i] == ' ') {
            erase(str, i, size);
            i--;
            size--;
        }

        i = 0;
        while (i < size) {
            if ((*str)[i] == ' ') {
                i++;
                while ((*str)[i] == ' ') {
                    erase(str, i, size);
                    size--;
                }
            }
            i++;
        }
    }
    (*str)[size] = '\0';
}

void findEvenWord(char* s, int& k)
{
    int i = 0, o = 0;
    while (s[i] != '\0')
    {
        if (!isLetter(s[i])) {
            if (o % 2 == 0) {
                k++;
            }
            o = 0;
        }
        else {
            o++;
        }
        i++;
    }

    if (o % 2 == 0) {
        k++;
    }
}

bool trueOrflase(float a)
{
    if (a == 1)
        return true;
    return false;
}

void cheksAns(float& a)
{
    printf("If you want back to choose task Press -- 1\nIf you want break program  Press -- 0\n");
    while (scanf_s("%f", &a) != 1 || getchar() != '\n' || a > 1 || a < 0)
    {
        rewind(stdin);
        printf("Inocrrect number!\nPlease input again!\n");
    }
}

void chekAns(float& a)
{
    printf("\nIf you want resume this task Press -- 1\nIf you want break  Press -- 0\n");
    while (scanf_s("%f", &a) != 1 || getchar() != '\n' || a > 1 || a < 0)
    {
        rewind(stdin);
        printf("Inocrrect number!\nPlease input again!\n");
    }
}

void task1()
{
    float a = 0;
    do
    {
        system("cls");
        setlocale(LC_ALL, "RUS");
        char* str;
        int k = 0;
        str = (char*)calloc(1, 1);

        taskСondition();

        getStr(&str);
        processString(&str);
        findEvenWord(str, k);
        printf("%i", k);

        chekAns(a);

    } while (trueOrflase(a));
}