// Вычисление даты следующего дня
#include <stdio.h>
#include <conio.h>
void main()
{
    int day;
    int month;
    int year;
    int last;   // 1, если текущий день последний день месяца
    int r;      // если год високосный, то остаток от
                // деления year на 4 равен нулю

    printf("Введите в одной строке (цифрами) ");
    printf("сегодняшнюю дату\n");
    printf("(число месяц год) -> ");
    scanf("%i%i%i", &day, &month, &year);
    last = 0;
    if (month == 2) {
         if ((year % 4) != 0 && day == 28) last = 1;
         if ((year % 4) == 0 && day == 29) last = 1;
    }
    else if ((month == 4 || month == 6 ||
              month == 9 || month == 11)
                  && (day == 31))
         last = 1;
      else if (day == 31)
            last = 1;

    if (last == 1) {
      printf("Последний день месяца!\n");
      day = 1;
      if (month == 12) {
         month = 1;
         year++;
         printf("С наступающим Новым годом!\n");
      }
      else month++;
     }
     else day++;
     printf("Завтра %i %i %i",day,month,year);

     printf("\nДля завершения нажмите <Enter>");
     getch();
}

