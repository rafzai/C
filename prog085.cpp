// �஢����, ���� �� ��� ��᮪���
#include <stdio.h>
#include <conio.h>
void main()
{
   int year;
   int r;    // ���⮪ �� ������� year �� 4

   printf("������ ���, ���ਬ�� 2001, � ������ <Enter>");
   printf("->");
   scanf("%i", &year);
   r = year % 4;
   if ( r )
    printf("%i ��� - �� ��᮪���\n", year);
   else
    printf("%i ��� - ��᮪���\n", year);

   printf("\n��� �����襭�� ������ <Enter>");
   getch();
}

