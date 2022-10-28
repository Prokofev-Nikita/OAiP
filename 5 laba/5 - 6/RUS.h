#pragma once
#include <stdio.h>
#include <locale.h>
#include "Task_1_RUS.h"
#include "Task_2_RUS.h"
#include "Task_3_RUS.h"

void provRUS(float& y) {
	while (scanf_s("%f", &y) != 1 || getchar() != '\n' || y < 0 || y > 1 || y != (int)y) {
		printf("Пожалуйста, введите корректные данные!\n");
		rewind(stdin);
	}
}

void RUS() {
	setlocale(LC_ALL, "RUS");
	float y;
	do {
		float a;
		printf("Пожалйста, введите номер задания!\n");
		printf("Задание 1 -- 1\n");
		printf("Задание 2 -- 2\n");
		printf("Задание 3 -- 3\n");
		while (scanf_s("%f", &a) != 1 || getchar() != '\n' || a != (int)a || a < 0 && a > 4)
		{
			printf("Пожалуйста, введите корректные данные!\n");
			rewind(stdin);
		}

		switch ((int)a)
		{

		case 1:
		{
			Task_1_RUS();
		}
		break;
		case 2:
		{
			Task_2_RUS();

		}
		break;
		case 3:
		{
			Task_3_RUS();
		}
		break;
		}
		printf("\nЕсли желаете продолжить, нажмите -- 1, если хотите выйти, нажмите -- 0\n");
		provRUS(y);
	} while (y == 1);

	
}