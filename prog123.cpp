// ���᫥��� �㬬� �鸞 1+1/2+1/3+ ... 
#include <stdio.h>
#include <conio.h>
void main()
{
     int n;      // ���-�� �㬬��㥬�� 童��� �鸞
     float i;    // ����� ����� �鸞; �᫨ ����� ��� int,
                 // � �� ���᫥��� 1/i �㤥� �믮�����
                 // ��祭�� �஡��� ���

     float elem;      // ���祭�� ����� �鸞
     float summ = 0 ; // �㬬� ����⮢ �鸞

     printf("���᫥��� ���筮� �㬬� �鸞 1+1/2+1/3+...\n");
     printf("������ ���-�� �㬬��㥬�� 童��� �鸞\n");
     printf("-> ");
     scanf("%i",&n);
     summ = 0;
     for (i = 1; i <= n; i++) {
        elem = 1 / i;
        summ += elem;
     }
     printf("�㬬� ����� %i", n);
     printf(" 童��� �鸞 ࠢ�� %6.3f",summ);

     printf("\n��� �����襭�� ������ <Enter>");
     getch();
}

