#pragma once

// Сортировка пузырьком

void sort(int a, int* array) {
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a - i - 1; j++) {
			if (array[j] > array[j + 1]) {

				int q = array[j];
				array[j] = array[j + 1];
				array[j + 1] = q;
			}
		}
	}
}

//Возведение в степень

    int pow(int a, int n) {
        int ans = 1;

        while (n > 0) {
            ans *= a;
            n--;
        }

        return ans;
    }

// нахождения минимума функции

void mins( int* array, int n, int &min, int &min_index) {
	 min = array[0];
	for (int i = 1; i < n; i++) {
		if (min > array[i]) {
			min = array[i];
			min_index = i;
		}
	}
}
 
// нахождение махсимума функции

void max(int* array, int n, int max, int max_index = 0) {
	   
	for (int i = 0; i < n; i++) {
		if (max < array[i]) {
			max = array[i];
			max_index = i;

		}
	}

}


