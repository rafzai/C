// �ਡ�������� ���᫥��� ��⥣ࠫ�
// ��⮤�� ��אַ㣮�쭨��� (横� for)
#include <stdio.h>
#include <conio.h>
void main()
{
   float a,b;   // �࠭��� ��१��
   float dx;    // ���饭�� ��㬥��
   float s;     // �ਡ�������� ���祭�� ��⥣ࠫ�
   int n;       // ������⢮ ���ࢠ���
   float x;     // ��㬥��
   float y;     // ���祭�� �㭪樨 � ��砫� ���ࢠ��
   int i;

   printf("\�ਡ�������� ���᫥��� ��⥣ࠫ�\n");
   printf("������ �࠭�� ���ࢠ�� -> ");
   scanf("%f", &a);
   printf("������ �࠭�� ���ࢠ�� -> ");
   scanf("%f", &b);
   printf("���饭�� ��㬥�� -> ");
   scanf("%f", &dx);
   n = (b - a) / dx + 1;
   x = a;
   s = 0;
   for (i = 1; i<=n; i++)
   {
      y = x*x + 2;  // ���祭�� �㭪樨 � ��砫� ���ࢠ��
      s += y*dx;
      x += dx;
   }
   printf("���祭�� ��⥣ࠫ�: %6.3f", s);

   printf("\n��� �����襭�� ������ <Enter>");
   getch();
}

