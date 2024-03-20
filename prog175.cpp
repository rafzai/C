// Обработка результатов экзамена
#include <stdio.h>
#include <conio.h>
void main()
{
    int n[6];   // количество двоек, ... пятерок
    int s = 0;  // всего оценок
    float p[6]; // процент каждой оценки

    char *mes[6] ={"\0", "\0", "двоек\0","троек\0",
                   "четверок\0","пятерок\0"};
    int i;

    puts("Обработка результатов экзамена");
    puts("Введите исходные данные:");
    for (i = 5; i >= 2; i--)
    {
        printf("%s ->", mes[i]);
        scanf("%i", &n[i]);
        s += n[i];
    }
    // вычислим процент каждой оценки
    for (i = 2; i < 6; i++)
        p[i] = (float)n[i]/s*100;

    puts("Результаты экзамена");
    puts("-----------------------------");
    for (i = 5; i >= 2; i--)
        printf("%8s  %2i    %2.0f%\n",mes[i], n[i], p[i]);
    puts("-----------------------------");

    puts("Для завершения программы нажмите <Enter>");
    getch();
}



