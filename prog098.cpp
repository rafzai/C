// Вычисление стоимости телефонного разговора с учетом
//  скидки, предоставляемой по субботам и воскресеньям
#include <stdio.h>
#include <conio.h>
void main()
{
     int time;     // длительность разговора
     int day;      // день недели
     float summa;  // стоимость разговора

     printf("\nВычисление стоимости разговора по телефону\n");
     printf("Введите исходные данные:\n");
     printf("Длительность разговора ");
     printf("(целое кол-во минут) ->");
     scanf("%i", &time);
     printf("День недели");
     printf(" (1-понедельник,..,7-воскресенье) ->");
     scanf("%i", &day);
     summa = 2.3 * time;       // цена минуты 2.3 руб.
     if (day == 6 || day == 7)
      {
        printf("Предоставляется скидка 20%\n");
        summa = summa * 0.8;
       };
     printf("Стоимость разговора: %3.2f руб.\n",summa);

    printf("\nДля завершения нажмите <Enter>");
    getch();
}

