// ���᫥��� �⮨���� ���㯪� � ��⮬ ᪨��� 
#include <stdio.h>
#include <conio.h>
void main()
{
  float summ; // �㬬� ���㯪�

  printf("\n���᫥��� �⮨���� ���㯪� � ��⮬ ᪨���\n");
  printf("������ �㬬� ���㯪� � ������ <Enter>");
  printf("-> ");
  scanf("%f", &summ);
  if (summ < 500)
      printf("������ �� �।��⠢�����.\n");
  else {
      printf("��� �।��⠢����� ᪨��� ");
      if (summ > 1000) {
      printf("5%\n");
      summ = 0.97 * summ;
      }
      else {
      printf("3%\n");
      summ = 0.97 * summ;
      };
      printf("�㬬� � ��⮬ ᪨���: %3.2f ��.\n", summ);
  }

  printf("\n��� �����襭�� ������ <Enter>");
  getch();
}

