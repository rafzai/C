// ������ �⥯���� ������ 
#include <stdio.h>
#include <conio.h>
void main()
{
    int n;  // ������⥫� �⥯���
    int x;  // ���祭�� 2 � �⥯��� n

    printf("\n������ �⥯���� ������\n");
    x = 1;
    for (n = 0; n <= 10; n++)
    {
       printf("%3i%5i\n", n, x);
       x *= 2;
    }

    printf("\n��� �����襭�� ������ <Enter>");
    getch();
}

