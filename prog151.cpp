// ���᫥��� ��⥣ࠫ� ��⮤�� ��אַ㣮�쭨���
#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
  
   float x1,x2; // �࠭��� ��१��
   float e;     // �筮��� ���᫥���

   float dx;    // ���饭�� ��㬥��
   int n;       // ������⢮ ���ࢠ���
   float x;     // ��㬥��
   float y;     // ���祭�� �㭪樨 � ��砫� ���ࢠ��

   float st;    // ���祭�� ��⥣ࠫ� �� ⥪�饬 蠣�
   float sp;    // ���祭�� ��⥣ࠫ� �� ⥪�饬 蠣�

   int i;

   printf("\�ਡ�������� ���᫥��� ��⥣ࠫ�\n");
   printf("������ �࠭�� ���ࢠ�� -> ");
   scanf("%f", &x1);
   printf("������ �࠭�� ���ࢠ�� -> ");
   scanf("%f", &x2);

   printf("�ॡ㥬�� �筮��� ���᫥��� -> ");
   scanf("%f", &e);

   dx = 0.5;
   st = 0; 

   do 
   {
      sp = st;
      dx = dx / 2;
      n = (x2 - x1) / dx;
      x = x1;
      st = 0;
      for (i = 0; i <= n; i++)
      { 
        y = x + 2; // ���祭�� �㭪樨 � ��砫� ���ࢠ��
	 
        st = st + (y * dx);
        x += dx;
      }
      printf("���祭�� ��⥣ࠫ�: %6.3f\n", st);
   }
   while ( abs(sp - st) > e); 

   printf("\n��� �����襭�� ������ <Enter>");
   getch();
}


