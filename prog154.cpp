// �뢮��� ⠡���� �㭪樨
#include <stdio.h>
#include <conio.h>
void main()
{
    float x,dx;      // ��㬥�� � ��� ���饭�����
    float x1,x2;     // �������� ��������� ��㬥��
    float y;         // ���祭�� �㭪樨

    x1 = -4;
    x2 = 4;
    dx = 0.5;
    x = x1;
    printf("--------------\n");
    printf("   x  |   y\n");
    printf("--------------\n");
    while (x < x2)
    {
       y = x*x + 2;
       printf("%3.2f  | %3.2f\n", x, y);
       x += dx;
    }
    printf("--------------\n");

    printf("\n��� �����襭�� ������ <Enter>");
    getch(); 
}

