// Проверяет, является строка целым числом
#include <stdio.h>
#include <conio.h>
void main()
{
    char st[40];   // строка
    int i;         // номер проверяемого символа

    printf("Введите целое число и нажмите <Enter>");
    printf("->");
    scanf("%s",&st);
    i = 0;
    while (st[i] >= '0' && st[i] <= '9')
       i++;

    // здесь st[i] '\0', если введены только цифры
    printf("Введенная строка ");
    if (st[i])
      printf("не ");
    printf("является целым числом.\n");

    printf("\nДля завершения нажмите <Enter>");
    getch();
}

