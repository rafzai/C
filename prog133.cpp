// ������ �㭪樨 y=|x| 
#include <stdio.h>
#include <conio.h>
#include "math.h"

#define  LB -4 // ������ �࠭�� ��������� ��������� ��㬥��
#define  HB  4 // ������ �࠭�� ��������� ��������� ��㬥��
#define  DX  0.5  // ���饭�� ��㬥��

void main()
{
    float x,y;  // ��㬥�� � ���祭�� �㭪樨
    int n;      // ���-�� �祪
    int i;      // ���稪 横���

    printf("\n������ ���祭�� �㭪樨 y=|x| \n");
    n = (HB - LB)/DX + 1;
    x = LB;
    for (i = 1; i <= n; i++)
    {
       y = fabs(x);
       printf("%4.2f   %3.2f\n", x, y);
       x += DX;
    }

    printf("\n��� �����襭�� ������ <Enter>");
    getch();
}

