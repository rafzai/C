// ���᫥��� ���頤� ����� 
#include <stdio.h>
#include <conio.h>
void main()
{
     float r1,r2; // ࠤ��� ����� � �⢥����
     float s;     // ���頤� �����

     printf("\n������ ��室�� �����:\n");
     printf("ࠤ��� ����� (�) -> ");
     scanf("%f",&r1);
     printf("ࠤ��� �⢥���� (�) -> ");
     scanf("%f",&r2);
     if (r1 > r2)
      {
        s = 2 * 3.14 * (r1 - r2);
        printf("\n���頤� ����� %6.2f ��.�\n", s);
      }
     else
      {
        printf("\n�訡��! ������ �⢥���� �� ����� ����");
        printf("����� ࠤ��� �����.\n");
      }
     printf("\n��� �����襭�� ������ <Enter>");
     getch();
}

