// ����஫� ���
#include <stdio.h>
#include <conio.h>
void main()
{
     float w;   // ���
     float h;   // ���
     float opt; // ��⨬���� ���
     float d;   // �⪫������ �� ��⨬��쭮�� ���

     printf("\������ � ����� ��ப�, �१ �஡��,\n");
     printf("��� (�) � ��� (��), ��⥬ ������ <Enter>");
     printf("->");
     scanf("%f%f", &h, &w);
     opt = h - 100;
     if (w == opt)
       printf("��� ��� ��⨬����!");
     else
      if (w < opt)
       {
         d = opt - w;
         printf("��� ���� ���ࠢ����� �� %2.2f ��.\n", d);
       }
      else
       {
         d = w - opt;
         printf("��� ���� ���㤥�� �� %2.2f ��.\n", d);
       }

     printf("\n��� �����襭�� ������ <Enter>");
     getch();
}

