// ������ ��䠣�� - ⠡��� 㬭������
#include <stdio.h>
#include <conio.h>
void main()
{
    int i,j; // ����� ��ப� � �⮫�� ⠡����

    printf("    ");          // ����� ������ ���⪠ ⠡����
    for (j = 1; j <=10; j++) // ��ࢠ� ��ப� - ����� �⮫�殢
    printf("%4i",j);
    printf("\n");

    for (i = 1; i <=10; i++)
    {
       printf("%4i",i);             // ����� ��ப�
       for (j = 1; j <= 10; j++)   // ��ப� ⠡����
           printf("%4i",i*j);
       printf("\n");
    }

    printf("\n��� �����襭�� ������ <Enter>");
    getch(); 
}

