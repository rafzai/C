// �뢮��� ⠡���� �����⮢ ������ �ᥫ
#include <stdio.h>
#include <conio.h>
void main()
{
    int x = 1;  // �᫮
    int y;      // ������ �᫠
    int i;      // ���稪 横���

    printf("������ �����⮢\n");
    printf("-----------------\n");
    printf("��᫮\t������\n");
    printf("-----------------\n");
    for (i = 1; i <= 10; i++)
    {
       y = x*x;
       printf("%3i\t%4i\n", x, y);
       x += 2;
    }
    printf("-----------------\n");

    printf("\n��� �����襭�� ������ <Enter>");
    getch();
}

