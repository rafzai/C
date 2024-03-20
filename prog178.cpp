// Проверяет, является ли матрица "магическим" квадратом
#include <stdio.h>
#include <conio.h>
#define  SZ 5      // максимальный размер матрицы
void main()
{
    int a[SZ][SZ];  // матрица
    int n;          // размер проверяемой матрицы
    int ok;         // матрица - "магический" квадрат"
    int i,j;        // индексы массива
    int sum;        //  сумма эл-тов главной диагонали
    int temp;       // сумма элементов текущей строки, столбца
                    // или второй диагонали матрицы

    printf("*** МАГИЧЕСКИЙ КВАДРАТ ***\n");
    printf("\nВведите размер матрицы (3..%i) -> ", SZ);
    scanf("%i", &n);
    printf("Введите строки матрицы\n");
    printf("После ввода строки, %i целых чисел, ", n);
    printf("нажимайте <Enter>\n");
    for (i = 0; i < n; i++)
    {
        printf("->");
        for (j = 0; j < n; j++)
            scanf("%i", &a[i][j]);
    }

    ok = 1;  // пусть матрица - "магический" квадрат
    // вычислим сумму элементов главной диагонали
    sum = 0;
    for (i = 0; i < n; i++)
        sum += a[i][i];

    // вычисляем суммы по строкам
    i = 0;
    do {
        temp = 0; // сумма эл-тов текущей строки
        for (j = 0; j < n; j++)
            temp += a[i][j];
        if (temp != sum)  ok = 0;
        i++;
    } while (ok && i < n);

    if ( ok )
    { 
        // здесь сумма элементов каждой строки
        // равна сумме элементов главной диагонали
    
        // вычисляем суммы по столбцам
        j = 0;
        do {
            temp = 0; // сумма эл-тов текущего столбца
            for (i = 0; i < n; i++)
                temp += a[i][j];
            if (temp != sum)  ok = 0;
            j++;
        } while (ok && i < n);
    }

    if ( ok ) {
         // здесь сумма элементов каждой строки
         // равна сумме элементов каждого столбца и
         // сумме элементов главной диагонали.
         // вычислим сумму элементов второй
         // главной диагонали
         temp = 0;
         i = n - 1;
         for (j = 0; j < n; j++)
            temp += a[i--][j];
         if (temp != sum)  ok = 0;
    }
    printf("Введенная матрица ");
    if ( !ok )
        printf("не ");
    printf("является магическим квадратом.\n");

    printf("\nДля завершения нажмите <Enter>");
    getch();
}

