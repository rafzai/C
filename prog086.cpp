// ��襭�� �����⭮�� �ࠢ����� 
#include <stdio.h>
#include <conio.h>
#include "math.h"
void main()
{
   float a,b,c;    // �����樥��� �ࠢ�����
   float x1,x2;    // ��୨ �ࠢ�����
   float d;    // ���ਬ�����

   printf("\n��襭�� �����⭮�� �ࠢ�����\n");
   printf("������ � ����� ��ப� ���祭�� �����樥�⮢");
   printf(" � ������ <Enter>");
   printf("-> ");
   scanf("%f%f%f", &a, &b, &c); // ���� �����樥�⮢

   d = b*b - 4*a*c;             // ���ਬ�����
   if (d < 0)
      printf("�ࠢ����� �� ����� �襭��\n");
   else {
      x1 = (-b + sqrt(d))/(2*a);
      x2 = (-b - sqrt(d))/(2*a);
      printf("��୨ �ࠢ�����: x1=%3.2f x2=%3.2f\n", x1, x2);
   }

   printf("\n��� �����襭�� ������ <Enter>");
   getch();
}

