// �஢����, ᪮�쪮 ࠧ �᫮ ����砥��� � ���ᨢ�
#include <stdio.h>
#include <conio.h>
#define HB 5 // ࠧ��� ���ᨢ�
void main()
{
    int a[HB]; // ���ᨢ
    int obr;   // �᪮��� �᫮ (��ࠧ��)
    int n;     // ���-�� ����⮢ ���ᨢ�,
               // ���祭�� ������ ࠢ�� ��ࠧ��
    int i;     // ������

    printf("������ ���ᨢ (%i ", HB);
    printf("楫�� �ᥫ � ����� ��ப�)\n");
    printf("->");
    for (i = 0; i < HB; i++)
        scanf("%i",&a[i]);
    printf("������ ��ࠧ�� ��� �ࠢ����� ->");
    scanf("%i", &obr);
    n = 0;
    for (i = 0; i < HB; i++)
        if (a[i] == obr)  n++;

    if ( n )
       printf("��᫮ %i ����砥��� � ���ᨢ� %i ࠧ", obr, n);
    else printf("�� ���� ����� ���ᨢ� �� ࠢ�� ��ࠧ��");

    printf("\n��� �����襭�� ࠡ��� ������ <Enter>");
    getch();
}

