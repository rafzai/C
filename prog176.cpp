#include <stdio.h>
#include <conio.h>
void main()
{
int a[3][5]; // массив 3x5 - 3 строки по 5 элементов
   int r;       // номер строки
   int c;       // номер столбца
   
   int sum;     // сумма элементов строки
   float m;     // среднее арифметическое    

   int k;

   printf("\nВвод по строкам\n");
   printf("Введите элементы строки (5 чисел) и нажмите <Enter>\n");

   // ввод массива
   k =1;
   for ( r = 0; r < 3; r++)
   {
       printf("Строка %i -> ", k);
       for ( c = 0; c < 5; c ++)
       {
              scanf("%i",&a[r][c]);
       }
       k++;
   }
      
   printf("\n--------------------------\n"); 
   // вывод массива
   printf("\nМассив\n");
   for ( r = 0; r < 3; r++)
   {
       for ( c = 0; c < 5; c ++)
       {
              printf("%5i",a[r][c]);
           }
       printf("\n");
   }
   
   // обработка массива
   printf("Среднее арифметическое:\n");
   k = 1;
   for ( r = 0; r < 3; r++)
   {
       // вычислить среднее арифметическое
       // элементов строки
       sum = 0;
       for ( c = 0; c < 5; c ++)
       {
              sum = sum + a[r][c];
       }
       m = (float) sum / 5;
       printf("Строка %i: %5.2f\n", k, m);
       k++;
   }
 
   printf("\nДля завершения нажмите <Enter>");
   getch();
}


