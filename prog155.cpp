// ���᫥��� �᫠ "��"
#include <stdio.h>
#include <conio.h>
void main()
{
     float p;   // ����塞�� ���祭�� ��
     float t;   // �筮��� ���᫥���
     int n;     // ����� 童�� �鸞
     float el;  // ���祭�� 童�� �鸞

     p = 0;
     n = 1;
     el = 1; // ��砫쭮� ���祭��
     printf("\n������ �筮��� ���᫥��� �� -> ");
     scanf("%f", &t);
     printf("���᫥��� �� � �筮���� %f\n",t);
     while (el >= t )
     {
      el = (float) 1 / (2*n -1);
      if ((n % 2) == 0)
        p -= el;
      else p += el;
      n++;
     }
     p = p*4;
     printf("\n���祭�� �� � �筮���� %f ࠢ�� %f\n", t, p);
     printf("���㬬�஢��� %i 童��� �鸞.\n", n);

     printf("\n��� �����襭�� ������ <Enter>");
     getch();
}

