// Среднее арифметическое дробных чисел, вводимых с клавиатуры
#include <stdio.h>
#include <conio.h>

#define L 5 // количество чисел последовательности

void main()
{
    float a;     // число
    int n;       // кол-во введенных чисел
    float sum;   // сумма введенных чисел
    float sred;  // среднее арифметическое введенных чисел

    printf("\nОбработка последовательности дробных чисел\n");
    printf("После ввода каждого числа нажимайте <Enter>");
    sum = 0;
    for (n = 1; n <= L; n++)
    {
      printf("-> ");
      scanf("%f", &a);
      sum += a;
      printf("Введено чисел: %i ", n);
      printf("Сумма: %6.2f\n", sum);
    }

    sred = sum / L;
    printf("Сред.арифметическое: %6.2f\n", sred);
    printf("\nДля завершения нажмите <Enter>");
    getch();
}

