#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funcsion.h"



int main() {
	int n, min, min_index = 0, r;
	printf("Do you want to enter media numbers or random?\nIf yes - push 1\nIf no - push 0\n");
	while (scanf_s("%i", &r) != 1 || getchar() != '\n' || (r != 1 && r != 0)) {
		printf("Incorret number of massiv\n");
		printf("Please, enter size again\n");
		rewind(stdin);
	}

	rewind(stdin);

	//размер массива

	int  array[100] = {};


	printf("Enter size of array(max 100): ");
	while (scanf_s("%d", &n) != 1 || getchar() != '\n' || n < 0) {
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

	// вывод заполненного массива

	for (int i = 0; i < n; i++) {
		printf("%d  ", array[i]);
	}

	// нахожддение минимума

	min = array[0];

    // нахождение минимума

	mins(array, n, min, min_index);


	printf("min: %d\n", min);
	printf("index: %i\n", min_index);

		// удаление значений 

	while (min_index > 0) {
		for (int i = min_index; i < n; i++) {
			array[i - 1] = array[i];
		}

		min_index--;
		n--;
	}

	printf("Deleted array\n");

	for (int i = 0; i < n; i++) {
		printf("%d  ", array[i]);
	}

	return 0;

}
