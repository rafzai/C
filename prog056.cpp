// ���᫥��� ��ꥬ� 樫����
#include <stdio.h>
#include <conio.h>
void main()
{
   float r,h,v; // ࠤ��� �᭮�����, ���� � ��ꥬ 樫����

   printf("���᫥��� ��ꥬ� 樫����\n");
   printf("������ ��室�� �����:\n");
   printf("������ �᭮����� (�) -> ");
   scanf("%f", &r);
   printf("���� 樫���� (�) -> ");
   scanf("%f", &h);
   v = 2*3.1415926*r*r*h;
   printf("\n��ꥬ 樫���� %6.2f ��.�\n", v);

   printf("\n��� �����襭�� ������ <Enter>");
   getch();
}

