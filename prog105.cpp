// ��� - ������ 業� ��� 
// � ����ᨬ��� �� ࠧ��� � ���ਠ��

#include "stdio.h"
#include "conio.h"
void main()
{
  float w,h; // �ਭ�, ����
  int m;     // ���ਠ�:
             // 1 - ����⨪; 2 - ⥪�⨫�; 3 - �����;

  float cena; // 業� �� 1 ��.�.
  float s;    // ���頤�
  float sum;  // �㬬�

  printf("\n������\n");

  printf("\n��ਭ� (�.) -> ");
  scanf("%f",&w);

  printf("���� (�.) -> ");
  scanf("%f",&h);

  printf("���ਠ�:\n");
  printf("1 - ����⨪\n");
  printf("2 - ⥪�⨫�\n");
  printf("3 - �����\n");
  printf("��� �롮� ->");

  scanf("%i",&m);
  switch ( m )
  {
    case 1: cena = 200; break;
    case 2: cena = 250; break;
    case 3: cena = 350; break;

    default: cena = 0; break;
  }

  if ( cena != 0 )
  {
    s = (w * h) / 10000;
    sum = s * cena;
    printf("\n���� �� ��.�.: %3.2f ��.", cena);
    printf("\n���頤�: %3.2f ��.�.", s);
    printf("\n� �����: %3.2f ��.", sum);
  }
  else
    printf("\n�� �ࠢ��쭮 㪠��� ��� ���ਠ��");

  printf("\n\n��� �����襭�� ������ <Enter>");
  getch();
}

