// Проверяет, сколько раз число встречается в массиве
#include <stdio.h>
#include <conio.h>
#define HB 5 // размер массива
void main()
{
    int a[HB]; // массив
    int obr;   // искомое число (образец)
    int n;     // кол-во элементов массива,
               // значение которых равно образцу
    int i;     // индекс

    printf("Введите массив (%i ", HB);
    printf("целых чисел в одной строке)\n");
    printf("->");
    for (i = 0; i < HB; i++)
        scanf("%i",&a[i]);
    printf("Введите образец для сравнения ->");
    scanf("%i", &obr);
    n = 0;
    for (i = 0; i < HB; i++)
        if (a[i] == obr)  n++;

    if ( n )
       printf("Число %i встречается в массиве %i раз", obr, n);
    else printf("Ни один элемент массива не равен образцу");

    printf("\nДля завершения работы нажмите <Enter>");
    getch();
}

