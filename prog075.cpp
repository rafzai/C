// �८�ࠧ������ �᫠ � ������� �ଠ�
#include <stdio.h>
#include <conio.h>
void main()
{
    float f;    // �஡��� �᫮
    int r;      // 楫�� ���� �᫠ (�㡫�)
    int k;      // �஡��� ���� �᫠ (�������)

    printf("\n�८�ࠧ������ �᫠ � ������� �ଠ�\n");
    printf("������ �஡��� �᫮ -> ");
    scanf("%f",&f);

    r =  (int)f;
    k = f * 100 - r*100;
    printf("%6.2f ��. - �� %i ��. %i ���.\n", f, r, k);

    printf("\n��� �����襭�� ������ <Enter>");
    getch();
}

