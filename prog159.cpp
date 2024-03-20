// Поиск минимального элемента массива
#include <stdio.h>
#include <conio.h>
#define HB  5    // размер массива
void main()
{
    int a[HB];  // массив
    int min;    // номер минимального элемента
    int i;      // индекс массива

    printf("\nПоиск минимального элемента массива\n");
    printf("Введите в одной строке ");
    printf("%i целых чисел, и нажмите <Enter>\n", HB);
    printf("-> ");
    for (i = 0; i < HB; i++)
        scanf("%i",&a[i]);

    min = 0; // предположим, что первый эл-т минимальный
    // сравним оставшиеся эл-ты массива с минимальным
    for (i = 1; i < HB; i++)
        if (a[i] < a[min])  min  =  i;

    printf("Минимальный элемент массива: a[%i]=%i ",
            min+1, a[min]);
    
    printf("\nДля завершения работы программы нажмите <Enter>");
    getch();
}
