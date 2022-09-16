#include <stdio.h>

int main() 
{
	int m, n;
	float  C;
	printf("Input m:");
	while (scanf_s("%d", &m) != 1) {
		printf("Incorrect numbers\n");
		printf("Please ener again:\n");
		rewind(stdin);
	}
	printf("Input n:");
	while (scanf_s("%d", &n) != 1) {
		printf("Incorrect numbers\n");
		printf("Please ener again:\n");
		rewind(stdin);
	}
	while (m > n) {
		printf("Please enter numbers again (m should be more then n):\n");
		printf("Input m:");
		while (scanf_s("%d", &m) != 2) {
			printf("Incorrect numbers\n");
			printf("Please ener again:\n");
			rewind(stdin);
		}
		printf("Input n:");
		while (scanf_s("%d", &n) != 1) {
			printf("Incorrect numbers\n");
			printf("Please ener again:\n");
			rewind(stdin);
		}
	}

		for (int i = 0; i <= n; i++)
		{
		C = 1.0 / m + i;
		C = C + (1.0 / m + i);
	}
	printf("%.3f\n", C);


	return 0;
}