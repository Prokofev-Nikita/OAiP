
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "RUS");
    int a, b, c;
    printf("Enter num : ");
    int input = scanf_s("%d%d%d", &a, &b, &c);
    if (input == 3) {
        if (a == b && b == c) {
            printf("This triangle is equilateral!(равносторонний)");
        }
        else {
            if (a == b && b != c || a == c && c != b || b == c && c != a) {
                printf("This triangle is isosceles!(равнобедренный)");

            }
            else {
                if (a * a + b * b == c * c || a * a + c * c == b * b || c * c + b * b == a * a) {
                    printf(" This triangle is rectangular!(прямоугольный)");
                }
                else {
                    printf("This triangle is versatile!(разносторонний)");
                }
            }
        }
    }
    else {
        printf("Icorrect input data");
    }
        return 0;
}

