// ���᫥��� �⮨���� ���㯪�
#include <stdio.h>
#include <conio.h>
void main()
{
   float kar,tetr; // 業� ��࠭��� � ��ࠤ�
   int nk,nt;      // ������⢮ ��ࠤ�� � ��࠭��襩
   float summ;     // �⮨����� ���㯪� }

   printf("\n���᫥��� �⮨���� ���㯪�\n");
   printf("������ ��室�� �����:\n");
   printf("���� ��ࠤ� (��.) -> ");
   scanf("%f", &tetr);
   printf("������⢮ ��ࠤ�� -> ");
   scanf("%i", &nt);
   printf("���� ��࠭��� (��.) -> ");
   scanf("%f", &kar);
   printf("������⢮ ��࠭��襩 -> ");
   scanf("%i", &nk);
   summ=tetr*nt + kar*nk;
   printf("\n�⮨����� ���㯪�: %6.2f ��.\n", summ);

   printf("\n��� �����襭�� ������ <Enter>");
   getch();
}

