// ��ꥤ������ ���� 㯮�冷祭��� ���ᨢ�� � ����
#include <stdio.h>
#include <conio.h>
#define SZ 5  // ࠧ��� ��室��� ���ᨢ��
void main()
{
    int a[SZ], b[SZ];  // ��室�� ���ᨢ�
    int c[SZ*2];       // ���ᨢ - १����
    int k,i,m;         // ������� ���ᨢ�� a,b � �

    printf("��ꥤ������ ����㯮�冷祭��� ");
    printf("�� �����⠭�� ���ᨢ��\n");
    printf("������ ���� ���ᨢ ");
    printf("(%i 楫�� �ᥫ) -> ", SZ);
    for (k = 0; k < SZ; k++)
        scanf("%i", &a[k]);

    printf("������ ��ன ���ᨢ ");
    printf("(%i 楫�� �ᥫ) -> ", SZ);
    for (i = 0; i < SZ; i++)
        scanf("%i", &b[i]);

    k = i = m = 0;
    do {
        if (a[k] < b[i] )
            c[m++] = a[k++];
        else
            if (a[k] > b[i])
                c[m++] = b[i++];
            else {
                c[m++] = a[k++];
                c[m++] = b[i++];
            }
    } while ( k < SZ && i < SZ); // ���� �� ���� ��室���
    // ���ᨢ�� ��������� �� ��९�ᠭ � ���ᨢ �

    while (k < SZ) // ���� �-�� � �� ��९�ᠭ�� � �
        c[m++] = a[k++];

    while (i < SZ) // ���� �-�� B �� ��९�ᠭ�� � �
        c[m++] = b[i++];

    printf("���ᨢ - १����: \n");
    for (i = 0; i < 2 * SZ; i++)
        printf("%i ", c[i]);

    printf("��� �����襭�� ࠡ��� ������ <Enter>\n");
    getch();
}

