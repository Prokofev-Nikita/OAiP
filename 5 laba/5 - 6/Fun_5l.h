#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

// 1 TASK 

void printEX1() {
	printf("1. Fill in two arrays with the keyboard.\nFrom the first, delete all the numbers that occur in the second.\n");
}

void fillMasWithHands1(int* mas, int n) {
	for (int i = 0; i < n; i++) {
		printf("Please input %i number:", i + 1);
		while (scanf_s("%i", mas + i) != 1 || getchar() != '\n') {
			printf("Please input valid data");
			rewind(stdin);

		}
	}
}

void fillMassWithRand1(int* mas, int n) {
	srand(static_cast<unsigned int>(time(0)));

	for (int i = 0; i < n; i++) {
		*(mas + i) = (rand() % 200) - 100;
	}

}

void printMas1(int* mas, int n) {
	printf("First array:\n");
	for (int i = 0; i < n; i++) {
		printf("%i ", mas[i]);
	}
}

void fillArrWithHands1(int* arr, int a) {
	for (int i = 0; i < a; i++) {
		printf("Please input %i number:", i + 1);
		while (scanf_s("%i", arr + i) != 1 || getchar() != '\n') {
			printf("Please input valid data");
			rewind(stdin);

		}
	}


}

void printArr1(int* arr, int a) {
	printf("Second array:\n");
	for (int i = 0; i < a; i++) {
		printf("%i ", arr[i]);
	}
}

void fillArrWithRand1(int* arr, int a) {
	srand(static_cast<unsigned int>(time(0)));

	for (int i = 0; i < a; i++) {
		*(arr + i) = (rand() % 200) - 100;
	}

}

void sizeMas1(float& n) {

	printf("Please input size of 1'st array:");

	while (scanf_s("%f", &n) != 1 || getchar() != '\n' || n != (int)n || n < 0) {
		printf("Please input valid data");
		rewind(stdin);
	}
}

void sizeArr1(float& a) {
	printf("Please input size of 2'nd array:");
	while (scanf_s("%f", &a) != 1 || getchar() != '\n' || a != (int)a || a < 0) {
		printf("Please input valid data");
		rewind(stdin);
	}
}

void fillMas1(int* mas, float n) {
	float r;
	printf("Do you want to enter random?\nIf yes - push 1\nIf no - push 0\n");
	while (scanf_s("%f", &r) != 1 || getchar() != '\n' || ((int)r != 1 && (int)r != 0) || r != (int)r) {
		printf("Incorret number of massiv\n");
		printf("Please, enter again\n");
		rewind(stdin);
	}

	if (r == 1)
		fillMassWithRand1(mas, n);
	else
		fillMasWithHands1(mas, n);

}

void fillArr1(int* arr, float a) {
	float r;
	printf("Do you want to enter random?\nIf yes - push 1\nIf no - push 0\n");
	while (scanf_s("%f", &r) != 1 || getchar() != '\n' || ((int)r != 1 && (int)r != 0) || r != (int)r) {
		printf("Incorret number of massiv\n");
		printf("Please, enter again\n");
		rewind(stdin);
	}

	if (r == 1)
		fillArrWithRand1(arr, a);
	else
		fillArrWithHands1(arr, a);
}

void compareMass1(int* mas, int* arr, float& n, int a) {
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i] == mas[j]) {
				for (int k = j; k < n - 1; k++) {
					mas[k] = mas[k + 1];
				}
				n--;
			}
		}
	}
}

// 1 TASK

// 1 TASK RUS

void printEX1_RUS() {
	printf("1.Заполнить с клавиатуры два массива.\n Из первого удалить все числа, встречающиеся во втором.\n");
}

void fillMasWithHands1_RUS(int* mas, int n) {
	for (int i = 0; i < n; i++) {
		printf("Пожалуйста введите %i число:", i + 1);
		while (scanf_s("%i", mas + i) != 1 || getchar() != '\n') {
			printf("Пожалуйста, введите корректные данные!");
			rewind(stdin);

		}
	}
}

void fillMassWithRand1_RUS(int* mas, int n) {
	srand(static_cast<unsigned int>(time(0)));

	for (int i = 0; i < n; i++) {
		*(mas + i) = (rand() % 200) - 100;
	}

}

void printMas1_RUS(int* mas, int n) {
	printf("Первый массив:\n");
	for (int i = 0; i < n; i++) {
		printf("%i ", mas[i]);
	}
}

void fillArrWithHands1_RUS(int* arr, int a) {
	for (int i = 0; i < a; i++) {
		printf("Пожалуйста введите %i число:", i + 1);
		while (scanf_s("%i", arr + i) != 1 || getchar() != '\n') {
			printf("Пожалуйста, введите корректные данные!");
			rewind(stdin);

		}
	}


}

void printArr1_RUS(int* arr, int a) {
	printf("Второй массив:\n");
	for (int i = 0; i < a; i++) {
		printf("%i ", arr[i]);
	}
}

void fillArrWithRand1_RUS(int* arr, int a) {
	srand(static_cast<unsigned int>(time(0)));

	for (int i = 0; i < a; i++) {
		*(arr + i) = (rand() % 200) - 100;
	}

}

void sizeMas1_RUS(float& n) {

	printf("Пожалуйста, введите размер первого массива:");

	while (scanf_s("%f", &n) != 1 || getchar() != '\n' || n != (int)n || n < 0) {
		printf("Пожалуйста, введите корректные данные!");
		rewind(stdin);
	}
}

void sizeArr1_RUS(float& a) {
	printf("Пожалуйста, ввиде размер второго массива:");
	while (scanf_s("%f", &a) != 1 || getchar() != '\n' || a != (int)a || a < 0) {
		printf("Пожалуйста, введите корректные данные!");
		rewind(stdin);
	}
}

void fillMas1_RUS(int* mas, float n) {
	float r;
	printf("Желаете ли вы рандомное заполнение массива?\nЕсли да - нажмите 1\nЕсли нет - нажмите 0\n");
	while (scanf_s("%f", &r) != 1 || getchar() != '\n' || ((int)r != 1 && (int)r != 0) || r != (int)r) {
		printf("Пожалуйста, введите корректные данные!\n");
		rewind(stdin);
	}

	if (r == 1)
		fillMassWithRand1_RUS(mas, n);
	else
		fillMasWithHands1_RUS(mas, n);

}

void fillArr1_RUS(int* arr, float a) {
	float r;
	printf("Желаете ли вы рандомное заполнение массива?\nЕсли да - нажмите 1\nЕсли нет - нажмите 0\n");
	while (scanf_s("%f", &r) != 1 || getchar() != '\n' || ((int)r != 1 && (int)r != 0) || r != (int)r) {
		printf("Пожалуйста, введите корректные данные!\n");
		rewind(stdin);
	}

	if (r == 1)
		fillArrWithRand1_RUS(arr, a);
	else
		fillArrWithHands1_RUS(arr, a);
}

void compareMass1_RUS(int* mas, int* arr, float& n, int a) {
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i] == mas[j]) {
				for (int k = j; k < n - 1; k++) {
					mas[k] = mas[k + 1];
				}
				n--;
			}
		}
	}
}

// 1 TASK RUS

// 2 TASK

void printEX2() {
	printf("2.In a two - dimensional matrix of size NxM, delete all columns containing more than 2 zeros in a row\n");

}

void sizeArr2(float& n, float& m) {
	printf("Please input number of rows\n"); // строки
	while (scanf_s("%f", &n) != 1 || getchar() != '\n' || n != (int)n || n < 0) {
		printf("Please input valid data");
		rewind(stdin);
	}
	printf("Please input number of colums\n");
	while (scanf_s("%f", &m) != 1 || getchar() != '\n' || m != (int)m || m < 0) {
		printf("Please input valid data");
		rewind(stdin);
	}
	printf("\n");
}

void fillArrWithRand2(int** arr, int n, int m) {
	srand(static_cast<unsigned int>(time(0)));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr[i][j] = (rand() % 200) - 100;
		}
	}

}

void fillArrWithHands2(int** arr, int n, int m) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("Please input %i number:", i + 1);
			int temp;
			while (scanf_s("%i", &temp) != 1 || getchar() != '\n') {
				printf("Please input valid data");
				rewind(stdin);
			}
			arr[i][j] = temp;
		}
	}


}

void fillArr2(int** arr, float n, float m) {
	float r;
	printf("Do you want to enter random?\nIf yes - push 1\nIf no - push 0\n");
	while (scanf_s("%f", &r) != 1 || getchar() != '\n' || ((int)r != 1 && (int)r != 0) || r != (int)r) {
		printf("Incorret number of massiv\n");
		printf("Please, enter again\n");
		rewind(stdin);
	}

	if (r == 1)
		fillArrWithRand2(arr, n, m);
	else
		fillArrWithHands2(arr, n, m);
}

void printArr2(int** arr, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%i\t", arr[i][j]);
		}
		printf("\n");
	}
}

void searchDel2(int** arr, int n, int& m) {
	for (int i = 0; i < m; i++) {
		int flag = 0;
		if (arr[0][i] == 0) {
			for (int j = 0; j < n - 1; j++) {
				if (arr[j][i] == 0 && arr[j + 1][i] == 0) flag++;
			}
		}
		if (flag > 1) {
			for (int j = 0; j < n; j++) {
				for (int k = i; k < m - 1; k++) {
					arr[j][k] = arr[j][k + 1];
				}
			}
			m--;
		}
	}
}

void freeArr2(int** arr, float n) {
	for (int i = 0; i < n; i++) free(arr[i]);
	free(arr);
}

// 2 TASK

// 2 TAK RUS

void printEX2_RUS() {
	printf("2.В двумерной матрице размером NxM удалить все столбцы содержащие более 2х нулей подряд.\n");

}

void sizeArr2_RUS(float& n, float& m) {
	printf("Пожалуйста, введите количество строк:\n"); // строки
	while (scanf_s("%f", &n) != 1 || getchar() != '\n' || n != (int)n || n < 0) {
		printf("Пожалуйста, введите корректные данные!");
		rewind(stdin);
	}
	printf("Пожалуйста, введите количество столбцов:\n");
	while (scanf_s("%f", &m) != 1 || getchar() != '\n' || m != (int)m || m < 0) {
		printf("Пожалуйста, введите корректные данные!");
		rewind(stdin);
	}
	printf("\n");
}

void fillArrWithRand2_RUS(int** arr, int n, int m) {
	srand(static_cast<unsigned int>(time(0)));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr[i][j] = (rand() % 200) - 100;
		}
	}

}

void fillArrWithHands2_RUS(int** arr, int n, int m) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("Пожалуйста, введите %i число", i + 1);
			int temp;
			while (scanf_s("%i", &temp) != 1 || getchar() != '\n') {
				printf("Пожалуйста, введите корректные данные!");
				rewind(stdin);
			}
			arr[i][j] = temp;
		}
	}


}

void fillArr2_RUS(int** arr, float n, float m) {
	setlocale(LC_ALL, "RUS");
	float r;
	printf("Желаете ли вы рандомное заполнение массива?\nЕсли да - нажмите 1\nЕсли нет - нажмите 0\n");
	while (scanf_s("%f", &r) != 1 || getchar() != '\n' || ((int)r != 1 && (int)r != 0) || r != (int)r) {
		printf("Пожалуйста, введите корректные данные!\n");
		rewind(stdin);
	}

	if (r == 1)
		fillArrWithRand2_RUS(arr, n, m);
	else
		fillArrWithHands2_RUS(arr, n, m);
}

void printArr2_RUS(int** arr, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%i\t", arr[i][j]);
		}
		printf("\n");
	}
}

void searchDel2_RUS(int** arr, int n, int& m) {
	for (int i = 0; i < m; i++) {
		int flag = 0;
		if (arr[0][i] == 0) {
			for (int j = 0; j < n - 1; j++) {
				if (arr[j][i] == 0 && arr[j + 1][i] == 0) flag++;
			}
		}
		if (flag > 1) {
			for (int j = 0; j < n; j++) {
				for (int k = i; k < m - 1; k++) {
					arr[j][k] = arr[j][k + 1];
				}
			}
			m--;
		}
	}
}

void freeArr2_RUS(int** arr, float n) {
	for (int i = 0; i < n; i++) free(arr[i]);
	free(arr);
}

// 2 TASK RUS

// 3 TASK

void printEX3() {
	printf("3.In a two-dimensional array of natural numbers,\ndelete all repetitions of numbers, except for the first one.\nThe number of numbers in a row can be different, the last number is 0.\n");

}

void fillArrWithRand3(int** arr, int* mas, int n) {
	srand(static_cast<unsigned int>(time(0)));
	for (int i = 0; i < n; i++) {
		arr[i] = (int*)malloc(sizeof(int) * (mas[i] + 1));
		for (int j = 0; j < mas[i]; j++) {
			arr[i][j] = rand() % 100;
		}
		arr[i][mas[i]] = 0;
	}
}

void fillArrWithHands3(int** arr, int* mas, int n) {
	for (int i = 0; i < n; i++) {
			arr[i] = (int*)malloc(sizeof(int) * (mas[i] + 1));
			for (int j = 0; j < mas[i]; j++) {
				int temp;
				printf("Please input %i number:", j + 1);
				while (scanf_s("%i", &temp) != 1 || getchar() != '\n' || temp < 0) {
					printf("Please input valid data:");
					rewind(stdin);
				}
				arr[i][j] = temp;
			}
		arr[i][mas[i]] = 0;

	}

}

void fillArrWithHands4(int** arr, int* mas_size, int n) {
	int a;


	for (int i = 0; i < n; i++) {
		arr[i] = (int*)malloc(sizeof(int));
		int j = 0;
		do
		{
			printf("Input element %i rows\n", i + 1);
			while (scanf_s("%i", &a) != 1 || a < 0 || getchar() != '\n') {
				printf("Please input valid data!\n");
			}
			if (a == 0)
			{
				mas_size[i] = j;
				break;
			}
			arr[i][j] = a;
			j++;
			arr[i] = (int*)realloc(arr[i], sizeof(int) + sizeof(int) * j);
		} while (true);
	}

}

void fillArr3(int** arr, int* mas,int* mas_size, float n) {
	float r;
	printf("Do you want to enter random?\nIf yes - push 1\nIf no - push 0\nIf in a cool way, then 2 ");
	while (scanf_s("%f", &r) != 1 || getchar() != '\n' || ((int)r != 1 && (int)r != 0 && (int)r != 2 ) || r != (int)r) {
		printf("Incorret number of massiv\n");
		printf("Please, enter again\n");
		rewind(stdin);
	}

	if (r == 1)
		fillArrWithRand3(arr, mas, n);
	else if (r == 0)
		fillArrWithHands3(arr, mas, n);
	else
		fillArrWithHands4(arr, mas_size, n);
}

void sizeArr3(float& n) {
	printf("Please input number of rows\n");
	while (scanf_s("%f", &n) != 1 || getchar() != '\n' || n != (int)n || n < 0) {
		printf("Please input valid data");
		rewind(stdin);
	}
}

void masRows3(int* mas, int n) { // ХЗ ПОЧЕМУ, НО ПОСЛЕ ВЫХОДА ПАМЯТЬ ОЧИЩАЕТСЯ
	float a = 0;

	for (int i = 0; i < n; i++) {
		printf("Please input number of elements in %i rows:", i + 1);
		while (scanf_s("%f", &a) != 1 || getchar() != '\n' || a != (int)a || a < 0) {
			printf("Please input valid data");
			rewind(stdin);
		}
		mas[i] = (int)a;
	}
}

void freeArr3(int** arr, float n) {
	for (int i = 0; i < n; i++) free(arr[i]);
	free(arr);
}

// 3 TASK

// 3 TASK RUS

void printEX3_RUS() {
	printf("3.В двумерном массиве натуральных чисел\nудалить все повторы чисел, кроме первого.\nКоличество чисел в строке может быть различным, последнее число - 0.\n");

}

void fillArrWithRand3_RUS(int** arr, int* mas, int n) {
	srand(static_cast<unsigned int>(time(0)));
	for (int i = 0; i < n; i++) {
		arr[i] = (int*)malloc(sizeof(int) * (mas[i] + 1));
		for (int j = 0; j < mas[i]; j++) {
			arr[i][j] = rand() % 100;
		}
		arr[i][mas[i]] = 0;
	}
}

void fillArrWithHands3_RUS(int** arr, int* mas, int n) {
	for (int i = 0; i < n; i++) {
		arr[i] = (int*)malloc(sizeof(int) * (mas[i] + 1));
		for (int j = 0; j < mas[i]; j++) {
			printf("Пожалуйста, введите %i число:", j + 1);
			int temp;
			while (scanf_s("%i", &temp) != 1 || getchar() != '\n' || temp < 0) {
				printf("Пожалуйста, введите корректные данные!");
				rewind(stdin);
			}
			arr[i][j] = temp;
		}
		arr[i][mas[i]] = 0;
	}

}

void fillArrWithHands4_RUS(int** arr,int* mas_size, int n){
	int a;
	

	for (int i = 0; i < n; i++) {
		arr[i] = (int*)malloc(sizeof(int));
		int j = 0;
		do
		{
			printf("Ввидите элемент %i строки\n", i + 1);
			while (scanf_s("%i", &a) != 1 || a < 0 || getchar() != '\n') {
				printf("Введите корректные данные!\n");
			}
			if (a == 0)
			{
				mas_size[i] = j;
				break;
			}
			arr[i][j] = a;
			j++;
			arr[i] = (int*)realloc(arr[i], sizeof(int) + sizeof(int) * j);
		} while (true);
	}

}

void fillArr3_RUS(int** arr, int* mas, int* mas_size, float n) {
	float r;
	printf("Желаете ли вы рандомное заполнение массива?\nЕсли да - нажмите 1\nЕсли нет - нажмите 0\nЕсли крутым способом, то 2\n");
	while (scanf_s("%f", &r) != 1 || getchar() != '\n' || ((int)r != 1 && (int)r != 0 && (int)r != 2) || r != (int)r) {
		printf("Пожалуйста, введите корректные данные!\n");
		rewind(stdin);
	}

	if (r == 1)
		fillArrWithRand3_RUS(arr, mas, n);
	else if (r == 0)
		fillArrWithHands3_RUS(arr, mas, n);
	else
		fillArrWithHands4_RUS(arr, mas_size, n);
}

void sizeArr3_RUS(float& n) {
	printf("Пожалуйста, введите количество строк:\n");
	while (scanf_s("%f", &n) != 1 || getchar() != '\n' || n != (int)n || n < 0) {
		printf("Пожалуйста, введите корректные данные!");
		rewind(stdin);
	}
}

void masRows3_RUS(int* mas, int n) { // ХЗ ПОЧЕМУ, НО ПОСЛЕ ВЫХОДА ПАМЯТЬ ОЧИЩАЕТСЯ
	float a = 0;

	for (int i = 0; i < n; i++) {
		printf("Пожлуйста, введите количество элементов в %i строке:", i + 1);
		while (scanf_s("%f", &a) != 1 || getchar() != '\n' || a != (int)a || a < 0) {
			printf("Пожалуйста, введите корректные данные!");
			rewind(stdin);
		}
		mas[i] = (int)a;
	}
}

void printArr3(int** arr, int* mas,int* mas_size, int n) {
	if (mas_size == NULL)
	{
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < mas[i] + 1; j++) {
				printf("%i ", arr[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < mas_size[i]; j++) {
				printf("%i ", arr[i][j]);
			}
			printf("\n");
		}
	}
}

void freeArr3_RUS(int** arr, float n) {
	for (int i = 0; i < n; i++) free(arr[i]);
	free(arr);
}

void Delete3(int** arr, int* mas, int* true_mas, int* mas_size, int n) 
{
	if (mas_size == NULL) {
		true_mas = (int*)calloc(n, sizeof(int));
		for (int i = 0; i < n; i++) {
			true_mas[i] = mas[i];
		}

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < true_mas[i]; j++) {
				for (int k = i; k < n; k++) {
					int l = (k == i ? j + 1 : 0);
					while (l < true_mas[k]) {
						if (arr[i][j] == arr[k][l] && arr[i][j] != 0) {
							for (int p = l; p < true_mas[k] - 1; p++) {
								arr[k][p] = arr[k][p + 1];
							}
							arr[k][true_mas[k] - 1] = 0;
							mas[k]--;
						}
						else {
							l++;
						}
					}
				}
			}
		}
	}
	else 
	{
		true_mas = (int*)calloc(n, sizeof(int));
		for (int i = 0; i < n; i++) {
			true_mas[i] = mas_size[i];
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < true_mas[i]; j++) {
				for (int k = i; k < n; k++) {
					int l = (k == i ? j + 1 : 0);
					while (l < true_mas[k]) {
						if (arr[i][j] == arr[k][l] && arr[i][j] != 0) {
							for (int p = l; p < true_mas[k] - 1; p++) {
								arr[k][p] = arr[k][p + 1];
							}
							arr[k][true_mas[k] - 1] = 0;
							mas_size[k]--;
						}
						else {
							l++;
						}
					}
				}
			}
		}
	}

}

//void mas_size(int* mas_size, int n)

// 3 TASK RUS
