// ��� - ������ �⮨����� ���� �⮣�䨩 � ��⮬
// ࠧ��� � ��������� ᪨���
#include "stdio.h"
#include "conio.h"
void main()

{
  int format; // �ଠ�: 1 - 9�12; 2 - 10�15
  int kol;    // ������⢮

  float cena; // 業� �� ����
  float sum;  // �㬬�

  float discount = 0; // ᪨���
  float total;    // � �����

  printf("\n����\n");

  printf("��ଠ� (1 - 9x12; 2 - 10x15) -> ");
  scanf("%i",&format);

  printf("������⢮, ��. -> ");
  scanf("%i",&kol);


  if ( format == 1 )
    cena = 2.50;
  else
    cena = 3.20;

  sum = cena * kol;

  if ( kol > 10 )
  {
    discount = sum * 0.05;
    total = sum - discount;
  }

  
  printf("\n-------------------------");
  printf("\n����: %3.2f ��.", cena);
  printf("\n������⢮: %i", kol);
  printf("\n�㬬�: %3.2f ��.", sum);

  if ( discount != 0)
  {
    printf("\n������: %3.2f ��.", discount);
    printf("\n� �����: %3.2f ��.", total);
  }


  printf("\n\n��� �����襭�� ������ <Enter>");
  getch();
}

