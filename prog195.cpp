// Преобразует шестнадцатеричное число в десятичное
// разобраться с переполнением!
#include <stdio.h>
#include <conio.h>
#include "string.h"
void main()
{
    char st[5];      // шестнадцатеричное число
    unsigned int dec;// десятичное число, соответствующее
    int v;           // вес разряда шестнадцатеричного числа
    int err = 0;     // err == 1 - в строке недопустимый символ
    int i;

    printf("Введите шестнадцатеричное ");
    printf("(не более 4-х знаков) число\n");
    printf("-> ");
    scanf("%s",&st);

    // преобразуем введенную строку к верхнему регистру
    strupr(st);

    dec = 0;
    v = 1;    // вес младшего разряда шестнадцатеричного числа
    for ( i = strlen(st) -1; i >= 0; i--)
    {
      //printf("\n%d\n",v);
      if (st[i] >= '0' && st[i] <= '9')
     dec += v * (st[i]- 48); // (int)'0'=48, (int)'1'=49 и т.д.
      else
     if (st[i] >= 'A' && st[i] <= 'F')
        // (int)'A'=65, (int)'B'=66 и т.д.
        // A обозначае 10, B - 11 и т.д.
        dec += v * (st[i]- 55);
     else // недопустимый символ
       { err = 1;
         break; }
      v *= 16;     // вес следующего разряда
   }
   if ( !err ) {
       printf("Шестнадцатеричному числу %s ", st);
       printf("соответствуе десятичное %u\n", dec);
   }
   else {
       printf("Cтрока %s не является ", st);
       printf("шеснадцатеричным числом\n");
   }

    printf("\nДля завершения нажмите <Enter>");
    getch();
}

