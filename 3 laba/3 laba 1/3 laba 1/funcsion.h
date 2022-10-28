#pragma once

// Сортировка пузырьком

void sort(int a, int* mass) {
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a - i - 1; j++) {
			if (mass[j] > mass[j + 1]) {

				int q = mass[j];
				mass[j] = mass[j + 1];
				mass[j + 1] = q;
			}
		}
	}
}

//Проверка на ввод

//Возведение в степень
    int pow(int a, int n) {
        int ans = 1;

        while (n > 0) {
            ans *= a;
            n--;
        }

        return ans;
    }
// определяет длинну строки
    int strlen(char* str) {
        int i = 0;

        while (str[i] != '\0') {
            i++;
        }

        return i;
    }
// Проверят является ли символ цифрой
    bool isDigit(char c) {
        static const char digits[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

        for (int i = 0; i < 10; i++) {
            if (c == digits[i]) {
                return true;
            }
        }

        return false;
    }
// проверка на ввод
    bool proverka(char* str) {
        int size = strlen(str);
        for (int i = 0; i < size; i++) {
            if (!isDigit(str[i])) {
                if (i == 0 && (str[i] == '-' || str[i] == '+') && size != 1) {
                    continue;
                }

                return false;
            }
        }

        return true;
    }
// Преобразовывает символ в цифру
    int toDigit(char c) {
        static const char digits[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

        for (int i = 0; i < 10; i++) {
            if (digits[i] == c) {
                return i;
            }
        }
    }
// Преобразовывает строку в цифру
    int toInt(char* str) {
        int size = strlen(str), ans = 0, sign = 1;

        for (int i = 0; i < size; i++) {
            if (i == 0) {
                if (str[0] == '-') {
                    sign = -1;
                    continue;
                }
                else if (str[0] == '+') {
                    continue;
                }
            }
            ans += toDigit(str[i]) * pow(10, size - i - 1);
        }

        return sign * ans;
    }

// нахождения минимума функции

void min( int* mass, int n, int min) {
	 min = mass[0];
	for (int i = 1; i < n; i++) {
		if (min > mass[i]) {
			min = mass[i];
		}
	}
}
 
// нахождение махсимума функции

void max(int* mass, int n, int max, int max_index = 0) {
	   
	for (int i = 0; i < n; i++) {
		if (max < mass[i]) {
			max = mass[i];
			max_index = i;

		}
	}

}


