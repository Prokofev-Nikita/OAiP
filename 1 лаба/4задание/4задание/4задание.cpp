#include<stdio.h>
#include<string.h>
int main()
{
    printf("Input country (Russia, Belarus, Germany, Poland, France, China, USA, Mexico, Canada, Brazil, Argentina, Colombia, Egypt, Australia):\n");
    const char* mass[15][2] = {
      { "Russia", "Eurasia" },
      { "Belarus", "Eurasia" },
      { "Germany", "Eurasia" },
      { "Poland", "Eurasia" },
      { "France", "Eurasia "},
      {"China", "Eurasia" },
      {"USA", "North America" },
      {"Mexico", "North America" },
      {"Canada", "North America" },
      {"Brazil", "South America" },
      {"Argentina", "South America"},
      {"Colombia", "South America"},
      {"Egypt", "Africa"},
      {"Niger", "Africa"},
      {"Australia", "Australia"}
    };
    char str[15];
    scanf_s("%s", str, 15);
    // функция strcmp сравнивает длины строк и возвращает 0, если длины равны
    // фунуция strncmp сравнивает строки до заданного элемента, и возвращает 0, если они равны
    // функция strlen возвращает длину строки
    for (int i = 0; i < 15; i++) {
        if (strcmp(mass[i][0], str) == 0 && strncmp(mass[i][0], str, strlen(str)) == 0) {
            printf("Continet is:%s\n", mass[i][1]);
            return 0;

        }
    }

    printf("Incorrect country.\nPlease restart programm!");

    return 0;
}
