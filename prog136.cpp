// Квадрат Пифагора - таблица умножения
#include <stdio.h>
#include <conio.h>
void main()
{
    int i,j; // номер строки и столбца таблицы

    printf("    ");          // левая верхняя клетка таблицы
    for (j = 1; j <=10; j++) // первая строка - номера столбцов
    printf("%4i",j);
    printf("\n");

    for (i = 1; i <=10; i++)
    {
       printf("%4i",i);             // номер строки
       for (j = 1; j <= 10; j++)   // строка таблицы
           printf("%4i",i*j);
       printf("\n");
    }

    printf("\nДля завершения нажмите <Enter>");
    getch(); 
}
