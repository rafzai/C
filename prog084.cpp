// Перевод времени из минут и секунд в секунды
#include <stdio.h>
#include <conio.h>
void main()
{
   float t;     // время в минутах и секундах, например 1.25
   int ts;      // время в секундах
   int min;     // число минут
   int sek;     // число секунд

   printf("Введите время (минут.секунд) -> ");
   scanf("%f", &t);
   min = t;  // t типа float, поэтому кол-во секунд "усекается"
   sek = (t - min) * 100;
   if (sek > 60)
    {
      printf("Ошибка!");
      printf("Число секунд не может быть больше 60");
    } 
   else
    {
      ts = min * 60 + sek;
      printf("%i мин %i сек = %i сек", min, sek, ts);
    }
   printf("\nДля завершения нажмите <Enter>");
   getch();
}

