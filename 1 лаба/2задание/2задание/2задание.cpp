#include<stdio.h>
#include<math.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "RUS");
	int x1, x2, x3, y1, y2, y3;
	float A, B, C, P;
	printf("Enter x1 and y1:\n");
	while (scanf_s("%d%d", &x1, &y1) != 2) {
		printf("Incorrect numbers\n");
		printf("Please ener again:\n");
		rewind(stdin);
	}
	printf("Enter x2 and y2:\n");

	while (scanf_s("%d%d", &x2, &y2) != 2) {
		printf("Incorrect numbers\n");
		printf("Please ener again:\n");
		rewind(stdin);
	 }
	printf("Enter x3 and y3:\n");
	while (scanf_s("%d%d", &x3, &y3) != 2) {
		printf("Incorrect numbers\n");
		printf("Please ener again:\n");
		rewind(stdin);
	 }
		A = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
		B = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
		C = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
		P = A + B + C;
		printf("Perimeter:%.4f", P);
	 return 0;
	}


