// ��室
#include "stdio.h"
#include "conio.h"

void main()
{

  float sum;     // �㬬�
  int period;    // �ப

  float percent; // ��ਮ�
  float profit;  // ��室

  float total;   // �㬬� � ���� �ப� ������

  printf("\n�����\n");


  printf("�㬬�, ��. -> ");
  scanf("%f",&sum);

  printf("�ப, ���. -> ");
  scanf("%i",&period);

  if ( sum < 5000)
    percent = 9;
  else
    if ( sum < 10000)
      percent = 11;
    else
      percent = 13;

  profit = sum * percent/100/12 * period;

  total = sum + profit;

  printf("\n---------------------------"); 
  printf("\n�㬬�: %3.2f ��.", sum);
  printf("\n�ப: %i", period);
  printf("\n��業�: %3.2f", percent);
  printf("\n��室: %3.2f ��.", profit);
  printf("\n�㬬� � ���� �ப� ������: %3.2f ��.", total);

  printf("\n\n��� �����襭�� ������ <Enter>");
  getch();
}

