// ������ �㭪樨
#include <stdio.h>
#include <conio.h>

#define  LB -2.0  // ������ �࠭�� ��������� ��������� ��㬥��
#define  HB  2.0 // ������ �࠭�� ��������� ��������� ��㬥��
#define  DX  0.5 // ���饭�� ��㬥��

void main()
{
    float x,y;  // ��㬥�� � ���祭�� �㭪樨
    int n;      // ���-�� �祪
    int i;      // ���稪 横���

    n = (HB - LB)/DX +1;
    x = LB;
    printf("------------------\n");
    printf("   x    |   y\n");
    printf("------------------\n");
    for (i = 1; i<=n; i++)
    {
       y = -2.4*x*x+5*x-3;
       printf("%6.2f  | %6.2f\n" ,x ,y);
       x += DX;
    }
    printf("------------------\n");

    printf("\n��� �����襭�� ������ <Enter>");
    getch();
}

