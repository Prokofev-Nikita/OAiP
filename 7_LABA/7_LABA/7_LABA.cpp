#include <stdio.h>
#include <stdlib.h>
#include "TASKs1.h"
#include "TASKs2.h"

int main() {

	float a;
	void(*task[2])() = { task1, task2 };

	do
	{
		float k;
		printf("Please choose number of task!\n\t1\n\t2\n");
		while (scanf_s("%f", &k) != 1 || getchar() != '\n' || k > 2 || k < 1)
		{
			rewind(stdin);
			printf("Incorrect numbers!\nPlease input again!");
		}
		system("cls");

		task[(int)k - 1]();
		system("cls");
		cheksAns(a);

	} while (trueOrflase(a));



	return 0;
}