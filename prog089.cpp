// �஢�ઠ ������ ���ਨ 
#include <stdio.h>
#include <conio.h>
void main()
{
  int year;   // �⢥� ����㥬���

  printf("\n� ����� ���� �� �᭮��� �����-������?\n");
  printf("������ �᫮ � ������ <Enter>");
  printf("-> ");
  scanf("%i", &year);
  if (year == 1703)
      printf("�ࠢ��쭮.");
  else {
      printf("�� �訡����, ");
      printf("�����-������ �� �᭮��� � 1703 ����.\n");
  }

  printf("\n��� �����襭�� ������ <Enter>");
  getch();
}

