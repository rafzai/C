// Фото - вычисляет цену заказа печати фотографий

#include "stdio.h"
#include "conio.h"
void main()
{
  int k; // количество фотографий
  int f; // формат: 1 - 9х12; 2 - 12х15; 3 - 18х24

  float cena;     // цена за 1 шт
  float sum;      // сумма
  float discount; // скидка
  float itog;

  printf("\nФОТО\n");

  printf("Формат:\n");
  printf("1 - 9х12\n");
  printf("2 - 12х15\n");
  printf("3 - 18х24\n");
  printf("Ваш выбор ->");

  scanf("%i",&f);
  switch ( f )
  {
    case 1: cena = 3.50; break;
    case 2: cena = 5.00; break;
    case 3: cena = 8.50; break;

    default: cena = 0; break;
  }

