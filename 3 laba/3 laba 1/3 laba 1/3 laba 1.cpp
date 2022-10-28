#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	int n, A, B, r, num, flag = 0, max = 0, min;
	
	printf("Do you want to enter media numbers or random?\nIf yes - push 1\nIf no - push 0\n");
	while (scanf_s("%i", &r) != 1 || getchar() != '\n' || (r != 1 && r != 0)) {
		printf("Incorret number of massiv\n");
		printf("Please, enter size again\n");
		rewind(stdin);
	}

	rewind(stdin);

	//размер массива

	int  array[100] = {};


	printf("Enter size of array(max:100): ");
	while (scanf_s("%d", &n) != 1 || getchar() != '\n' || n < 0  || n >= 100) {
		printf("Incorret size of massiv\n");
		printf("Please, enter size again\n");
		rewind(stdin);
	}

	rewind(stdin);

	//рандом

	srand(static_cast<unsigned int>(time(0)));

	if (r == 1) {

		for (int i = 0; i < n; i++)
		{
			array[i] = rand() % 100;

		}
	}

	//заполнение массива

	else {
		for (int i = 0; i < n; i++)
		{
			int num;
			printf("Input %d number:", i + 1);
			while (scanf_s("%d", &num) != 1 || getchar() != ('\n')) {
				printf("Incorrect number\n");
				printf("Please input number again:");
				rewind(stdin);
			};
			array[i] = num;
		}
	}

	// вывод диапазона

	for (int i = 0; i < n; i++) {

		printf("%i ", array[i]);

	}

	//ввод диапазона массива
	 
	 
	//начальное значение диапазона

	printf("\nEnter diapazon\n");
	printf("Input beginning of the range:");
	while (scanf_s("%d", &A) != 1 || getchar() != '\n') { 
		printf("Incorrect number \n");
		printf("Please input number again:");
		rewind(stdin);
	}
	rewind(stdin);

	if (A >= n || A == 0 || A < 0) {                           
		do {
			printf("Incorrect diapazon, please input again:");
			while (scanf_s("%d", &A) != 1 || getchar() != '\n'){
				printf("Incorrect number\nPlease input number again:");
				rewind(stdin);
			}
			rewind(stdin);
		} while (A > n);
	}

	// конечное значение диапазона

	printf("Input end of the range:");
	while (scanf_s("%d", &B) != 1 || getchar() != '\n') {                   
		printf("Incorrect number \n");
		printf("Please input number again:");
		rewind(stdin);
	}
	rewind(stdin);
	while (B > n || B == 0 || B < 0 || B < A || B == A) {
		printf("Incorrect diapazon, please input again:");
		while (scanf_s("%d", &B) != 1 || getchar() != '\n') {
			printf("Incorrect number \n");
			printf("Please input number again:");
			rewind(stdin);
		}
		rewind(stdin);
	}

	// нахождение символов в диапазоне

	printf("Simvol in diapazon:%d\n", (B - A) - 1);

	//нахождение максимума

	int max_index = 0;
	for (int i = 0; i < n; i++) {
		if (max < array[i]) {
			max = array[i];
			max_index = i;

		}
	}

	// нахождение суммы после максимума

	for (int i = max_index + 1; i < n; i++) {

		flag += array[i];

	}


	printf("Sum:%i\n", flag);

	return 0;
}