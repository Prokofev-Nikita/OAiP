#include <stdio.h>


int main()
{
    int N;
    printf("Input num N:");
    while (scanf_s("%d", &N) != 1) {
        printf("Incorrect num\n");
        printf("Input again:\n");
        rewind(stdin);
    }
         int f1 = 1, f2 = 1, f = 0, k = 2;
          while (f < N) {
            k++;
            f = f2 + f1;
            f2 = f1;
            f1 = f;
        }
        printf("Num k:%d\n", k);
    return 0;
}