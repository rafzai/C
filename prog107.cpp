// ������ - ������ �⮨����� ���ࠢ�� ��⮬�����

#include "stdio.h"
#include "conio.h"
void main()
{
  int m; // ��ઠ �������: 1 - 92; 2 - 95; 3 - 98; 4 - DT
  float cena; // 業� �� 1 ����

  float litr; // ���஢
  float sum;  // �㬬�

  printf("\n������\n");

  printf("��ઠ �������:\n");
  printf("1 - 92\n");
  printf("2 - 95\n");
  printf("3 - 98\n");
  printf("3 - DT\n");
  printf("��� �롮� ->");

  scanf("%i",&m);
  switch ( m )
  {
    case 1: cena = 17.50; break;
    case 2: cena = 20.30; break;
    case 3: cena = 25.40; break;
    case 4: cena = 18.50; break;

    default: cena = 0; break;
  }

  printf("���஢ -> ");
  scanf("%f",&litr);

  if ( cena != 0 )
  {
    sum = litr * cena;
    printf("\n���� �� ����: %3.2f ��.", cena);
    printf("\n���஢: %3.2f", litr);
    printf("\n� �����: %3.2f ��.", sum);
  }
  else
    printf("\n���ࠢ��쭮 㪠��� ��� ⮯����");

  printf("\n\n��� �����襭�� ������ <Enter>");
  getch();
}

