// �஢�ઠ 㬥��� 㬭����� �᫠ 
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>  // ��� ����㯠 � srand
#include <time.h>    // ��� ����㯠 � time
void main()
{
  int m1, m2, p; // ᮬ����⥫� � �ந��������
  int otv;       // �⢥� ����㥬���
  time_t t;      // ⥪�饥 �६� - ��� ���樠����樨
                 // ������� ��砩��� �ᥫ

  srand((unsigned) time(&t));; // ���樠������ �������
                               // ��砩��� �ᥫ

  m1 = rand() % 9 +1;  // ���⮪ �� ������� rand() �� 9 �����
                       // � ��������� �� 0 �� 8
  m2 = rand() % 9 +1;
  p = m1 * m2;
  printf("����쪮 �㤥� %ix%i ?\n", m1, m2);
  printf("������ �⢥� � ������ <Enter>");
  printf("-> ");
  scanf("%i", &otv);
  if (p == otv)
      printf("�ࠢ��쭮.");
  else
      printf("�� �訡����.\n%ix%i=%i", m1, m2, p);

  printf("\n��� �����襭�� ������ <Enter>");
  getch();
}

