#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funcsion.h"



int main() {
	int n, r, flag = 0, bgf = 0, element = 0;
	printf("Do you want to enter media numbers or random?\nIf yes - push 1\nIf no - push 0\n");
	while (scanf_s("%i", &r) != 1 || getchar() != '\n' || (r != 1 && r != 0)) {
		printf("Incorret number of massiv\n");
		printf("Please, enter size again\n");
		rewind(stdin);
	}

	rewind(stdin);

	//размер массива

	int  array[100] = {};


	printf("Enter size of array: ");
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

	//нахождение самого часто повторяющегося элемента

    for (int i = 0; i < n; i++)     
	{
		for (int j = i; j < n; j++)
		{
			if (array[i] == array[j] && array[i] % 2 == 1 )
			{
				flag++;       // flag текущее кол-во повторений
			}
		}
		if (flag > bgf)      // bgf наибольшее число повторений
		{
			bgf = flag;
			element = array[i]; 
		}
		flag = 0;
	}

	printf("\nElement: %i\n", element);

	return 0;


}