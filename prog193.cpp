// Проверяет, является ли строка
//  дробным числом без знака

#include <stdio.h>
#include <conio.h>
void main()
{
   char st[20];   // строка
   int i;         // номер проверяемого символа
   int ok = 0;    // пусть строка не дробное число

   printf("Введите дробное число и нажмите <Enter>");
   printf("->");
   scanf("%s", &st);

   i = 0;
   if  (st[i] >= '1' && st[i] <='9') // первый символ цифра
   {
       // за цифрой могут быть еще цифры
       while ( st[i] >= '1' && st[i] <='9' )
       i++;
       // за цифрами должна быть точка
       if (st[i] == '.')
       {
         i++;
         // за точкой должна быть хотя бы одна цифра
         if  (st[i] >='1' && st[i] <='9')
         {
          // и еще цифры
          while ( st[i] >= '1' && st[i] <='9' )
             i++;
          ok = 1; // похоже, строка - дробное число
          }
       }
    }
    printf("Cтрока %s ",st);
    if ( st[i] || !ok )
       printf("не ");
    printf("является дробным числом без знака.\n");

    printf("\nДля завершения нажмите <Enter>");
    getch(); 
}

( st[i] || !ok )
       printf("­¥ ");
    printf("ï¢«ï¥âáï ¤à®¡­ë¬ ç¨á«®¬ ¡¥§ §­ ª .\n");

    printf("\n„«ï § ¢¥àè¥­¨ï ­ ¦¬¨â¥ <Enter>");
    getch(); 
}

