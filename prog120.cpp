// ������ �㬬� ����� n 楫�� ������⥫��� �ᥫ 
#include <stdio.h>
#include <conio.h>
void main()
{
    int n;     // ���-�� �㬬��㥬�� �ᥫ
    int summ;  // �㬬�
    int i;     // ���稪 横���

    printf("���᫥��� �㬬� ������⥫��� �ᥫ\n");
    printf("������ ������⢮ �㬬��㥬�� �ᥫ -> ");
    scanf("%i", &n);
    summ = 0;
    for (i = 1; i <= n; i++)
    	summ = summ+i;
    printf("�㬬� ����� %i 楫�� ������⥫��� �ᥫ ",n);
    printf("ࠢ�� %i", summ);

    printf("\n\n��� �����襭�� ������ <Enter>");
    getch();
}

