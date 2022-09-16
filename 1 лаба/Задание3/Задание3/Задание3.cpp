#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL,"RUS");

	int a, b, c;

	float prg;
	printf("Enter mun a:\n");
	while (scanf_s ("%d", &a) != 1) {
        printf("Incorrect a\n");
		printf("Enter again:\n");
		rewind(stdin);	
	}
	printf("Enter num b:\n");
	while (scanf_s("%d", &b) != 1) {
		printf("Incorrect b\n");
		printf("Enter again:\n");
		rewind(stdin);
	}
	printf("Enter num c:\n");
	while (scanf_s("%d", &c) != 1) {
		printf("Incorrect c\n");
		printf("Enter again:\n");
		rewind(stdin);
	}
	if (b - a == c - b || c - a == b - c || a - b == c - a || c - b == a - c || a - c == b - a || b - c == a - b) {
		printf("Success!");
		}
	else {
		printf("Unsuccessful");
	}
	 
	return 0;
}