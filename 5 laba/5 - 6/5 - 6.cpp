#include <stdio.h>
#include <locale.h>
#include "ENG.h"
#include "RUS.h"
#include "Fun_5l.h"

int main()
{
	setlocale(LC_ALL, "RUS");
		float a;
		printf("Please selects the language\nПожалуйста, выберите язык\n");
		printf("Input 1 if english\nНажмите 0, если русский\n");
		while (scanf_s("%f", &a) != 1 || getchar() != '\n' || a < 0 && a > 2) {
			printf("Please input valid data\nПожалуйста, введите верные данные!\n");
			rewind(stdin);
		}
		switch ((int)a)
		{
		case 1:
		{
			ENG();
		}
		break;
		case 0:
		{
			RUS();
		}
		break;
		}

	return 0;
}