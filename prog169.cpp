// ����஢�� ���ᨢ� ��⮤�� "����쪠"
#include <stdio.h>
#include <conio.h>
#define SZ 5
void main()
{
    int a[SZ];
    int i;     // ���稪 横���
    int k;     // ⥪�騩 ������ ����� ���ᨢ�
    int buf;

    printf("\n����஢�� ���ᨢ� ��⮤�� \"����쪠\"\n");
    printf("������ ���ᨢ (� ����� ��ப� %i ", SZ);
    printf("楫�� �ᥫ) � ������ <Enter>\n");
    for (k = 0; k < SZ; k++)
        scanf("%i", &a[k]);

    printf("����஢��...\n");
    for (i = 0; i < SZ-1; i++)
    {
        for (k = 0; k < SZ-1; k++)
        {
            if (a[k] > a[k+1])
            {
                // �����塞 k-� � (k+1)-� ������
                buf = a[k];
                a[k] = a[k+1];
                a[k+1] = buf;
             }
        }
        // �⫠��筠� ����� - ���ﭨ�
        //  ���ᨢ� ��᫥ ��।���� 横�� ���஢��
        for (k = 0; k < SZ; k++)
            printf("%i ",a[k]);
        printf("\n");
    }

    printf("���ᨢ �����஢��\n");
    for (k = 0; k < SZ; k++)
            printf("%i ",a[k]);

    printf("\n\n��� �����襭�� ࠡ��� ������ <Enter>");
    getch();
}

