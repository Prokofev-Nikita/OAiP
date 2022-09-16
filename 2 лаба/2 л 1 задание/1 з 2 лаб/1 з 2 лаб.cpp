

#include <stdio.h> 

int main()
{
    int a, m, n; 

    for (m = 1; m < 10; m++) {
        
        for (n = 0; n < 10; n++) {

            if (((m * m) + (n * n) == 3 * m * n + 1) && ((m + n) * 7 + 6 == (10 * m + n))) {
                a = 10 * m + n;
                printf("Number is : %d", a);
                break;
            }
        }
    }

    return 0;
}

