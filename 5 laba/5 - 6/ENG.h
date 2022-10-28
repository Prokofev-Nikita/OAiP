#pragma once
#include <stdio.h>
#include "Task_1.h"
#include "Task_2.h"
#include "Task_3.h"

void provENG(float& y) {
	while (scanf_s("%f", &y) != 1 || getchar() != '\n' || y < 0 || y > 1 || y != (int)y) {
		printf("Please input valid data\n");
		rewind(stdin);
	}
}

void ENG() {
	float y;
	do {
		float a;
		printf("Select number of task!\n");
		printf("Task 1 -- 1\n");
		printf("Task 2 -- 2\n");
		printf("Task 3 -- 3\n");
		while (scanf_s("%f", &a) != 1 || getchar() != '\n' || a != (int)a || a < 0 && a > 4)
		{
			printf("Please input valid data\n");
			rewind(stdin);
		}

		switch ((int)a)
		{

		case 1:
		{
			Task_1();
		}
		break;
		case 2:
		{
			Task_2();

		}
		break;
		case 3:
		{
			Task_3();

		}
		break;
		}
		printf("\nIf you want to continue, press -- 1, if not -- 0\n");
		provENG(y);
	} while (y == 1);

}