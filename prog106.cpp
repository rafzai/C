// ��� - ������ 業� ������ ���� �⮣�䨩

#include "stdio.h"
#include "conio.h"
void main()
{
  int k; // ������⢮ �⮣�䨩
  int f; // �ଠ�: 1 - 9�12; 2 - 12�15; 3 - 18�24

  float cena;     // 業� �� 1 ��
  float sum;      // �㬬�
  float discount; // ᪨���
  float itog;

  printf("\n����\n");

  printf("��ଠ�:\n");
  printf("1 - 9�12\n");
  printf("2 - 12�15\n");
  printf("3 - 18�24\n");
  printf("��� �롮� ->");

  scanf("%i",&f);
  switch ( f )
  {
    case 1: cena = 3.50; break;
    case 2: cena = 5.00; break;
    case 3: cena = 8.50; break;

    default: cena = 0; break;
  }


  printf("������⢮ (��.) -> ");
  scanf("%i",&k);



  if ( cena != 0 )
  {
    sum = k * cena;
    printf("\n���� �� ��.: %3.2f ��.", cena);
    printf("\n������⢮: %i ��.", k);
    if ( k > 10 )
    {
      discount = sum * 0.1;
      itog = sum - discount;
      printf("\n�㬬�: %3.2f ��",sum);
      printf("\n������: %3.2f ��", discount);
      printf("\n� �����: %3.2f ��",itog);

    }
    else
      printf("\n� �����: %3.2f ��.", sum);
  }
  else
    printf("\n���ࠢ��쭮 㪠��� ��� ���ਠ��");

  printf("\n\n��� �����襭�� ������ <Enter>");
  getch();
}

