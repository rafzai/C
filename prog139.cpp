// �ਡ�������� ���᫥��� ��⥣ࠫ� ��⮤�� �࠯�権
#include <stdio.h>
#include <conio.h>
void main()
{
   float a,b;   // �࠭��� ��१��
   float dx;    // ���饭�� ��㬥��
   float s;     // �ਡ�������� ���祭�� ��⥣ࠫ�
   int n;       // ������⢮ ���ࢠ���
   float x;     // ��㬥��
   float y1,y2; // ���祭�� �㭪樨 � ��砫� � � ����
   int i;

   printf("\n�ਡ�������� ���᫥��� ��⥣ࠫ�\n");
   printf("��⮤�� �࠯�権\n");
   printf("������ �࠭�� ��१�� -> ");
   scanf("%f", &a);
   printf("������ �࠭�� ��१�� -> ");
   scanf("%f", &b);
   printf("���饭�� ��㬥�� -> ");
   scanf("%f", &dx);
   n = (b - a) / dx;
   x = a;
   s = 0;
   for (i = 1; i <=n; i++)
   {
      y1 = x*x + 2;   // ���祭�� �㭪樨 � ��砫� ���ࢠ��
      x += dx;
      y2 = x*x + 2;   // ���祭�� �㭪樨 � ���� ���ࢠ��
      s += (y1 + y2)*dx/2;
   }
   printf("���祭�� ��⥣ࠫ�: %6.3f", s);

   printf("\n��� �����襭�� ������ <Enter>");
   getch(); 
}

