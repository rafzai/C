// Проверяет, является ли введенная строка
//  шестнадцатеричным числом
#include <stdio.h>
#include <conio.h>
#include "string.h"
void main()
{
    char st[20];  // строка
    int i;        // номер проверяемого символа

    printf("\nВведите шестнадцатеричное число ->");
    scanf("%s", &st);

    strupr(st); // преобразуем к верхнему регистру

    i = 0;
    while ((st[i] >= '0' && st[i] <= '9') ||
       (st[i] >= 'A' && st[i] <= 'F'))
      i++;

    printf("Cтрока ");
    // если st[i] != '\0',
    // то i - номер первого ошибочного символа
    if ( st[i] )
      printf("не ");
    printf("является шестнадцатеричным числом.\n");

    printf("\nДля завершения нажмите <Enter>");
    getch();
}
