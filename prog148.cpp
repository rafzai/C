// Определение максимального числа
// в последовательности положительных чисел
#include <stdio.h>
#include <conio.h>
void main()
{
    int a; // очередное число
    int m; // максимальное число

    puts("\nОпределение максимального числа");
    puts("последовательности положительных чисел.");
    puts("Вводите числа. Для завершения введите ноль.");
    m = 0;
    do {
       printf("-> ");
       scanf("%i", &a);
       if  (a > m)  m  =  a;
    } while (a > 0);
    printf("Максимальное число: %i", m);

    printf("\nДля завершения нажмите <Enter>");
    getch();
}
