// �����뢠�� ��᫥ �᫠ ᫮�� "�㡫�" � �ࠢ��쭮� �ଥ
#include <stdio.h>
#include <conio.h>
void main()
{
    int n; // �᫮
    int r; // ᭠砫� ���⮪ �� ������� n �� 100 (��᫥����
           // ��� ����), ��⥬ - �� 10 (��᫥���� ���)

    printf("\n������ 楫�� �᫮, �� ����� 999 -> ");
    scanf("%i", &n);
    printf("%i ", n);
    // �ࠢ��쭠� �ଠ ᫮�� ��।������ ��᫥����
    // ���ன, �� �᪫�祭��� �ᥫ �� 11 �� 14
    if (n > 100)
       r  =  n % 100;
    else r = n;

    // ����� r - ��᫥���� ��� ����
    if ( r >= 11 && r <= 14 )
       printf("�㡫��\n");
    else
    {
        r = r % 10;
        // ����� r - ��᫥���� ���
        if ( r >= 2 && r <= 4 )
            printf("�㡫�\n");
        else if (r == 1)
                 printf("�㡫�\n");
             else printf("�㡫��\n");
    }
    printf("\n��� �����襭�� ������ <Enter>");
    getch();
}

