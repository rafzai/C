// �஢����, �����஢�� �� ���ᨢ �� �����⠭��
#include <stdio.h>
#include <conio.h>
#define HB 5
void main()
{
    int a[HB];   // ���ᨢ
    int k;       // ������
    int ok;      // 1 - ��᫥����⥫쭮��� ���뢠���

    printf("�஢�ઠ, 㯮�冷祭 �� ���ᨢ\n");
    printf("�� �����⠭��\n");
    printf("������ ���ᨢ (%i 楫�� �ᥫ ", HB);
    printf("� ����� ��ப�) � ������ <Enter>\n");
    for (k = 0; k < HB; k++)
        scanf("%i", &a[k]);

    k = 0;
    ok = 1;
    do  {
        if (a[k] > a[k+1])
            ok = 0;
        k++;
    } while ( k < HB-1 && ok);

    printf("�������� ���ᨢ� ");
    if ( !ok )
        printf("�� ");
    printf("㯮�冷祭� �� �����⠭��\n");

    printf("\n��� �����襭�� ࠡ��� ������ <Enter>");
    getch();
}

