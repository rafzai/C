// ������ ������ �㬬� �鸞: 1,3,6,9 ...
#include <stdio.h>
#include <conio.h>
void main()
{
    int e;        // 童� �鸞
    int n;        // ���-�� �㬬��㥬�� 童���
    int summ = 0; // ���筠� �㬬� �鸞
    int i;        // ���稪 横���

    printf("���᫥��� ���筮� �㬬� �鸞: 1,3,6,9, ...\n");
    printf("������ ������⢮ �㬬��㥬�� 童��� -> ");
    scanf("%i", &n);
    e = 1;
    for (i = 1; i <= n; i++)
    {
        summ += e;
        e += 2;
    }
    printf("�㬬� ����� %i 童��� �鸞 ࠢ�� %i", n, summ);

    printf("\n��� �����襭�� ������ <Enter>");
    getch();
}

