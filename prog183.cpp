// ������ ����� ��ப�
#include <stdio.h>
#include <conio.h>
void main()
{
   char st[80]; // ��������� ��ப�
   int i = 0;   // ����� ��ப�

   puts("\n������ ��ப� � ������ <Enter>");
   printf("->");
   gets(st);
   while( st[i++])
       ;

   printf("����� ��������� ��ப�: %i\n", i);
   printf("��� �����襭�� ࠡ��� ������ <Enter>");
   getch();
}

