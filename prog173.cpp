// ���᫥��� �㬬� ����⮢ ���ᨢ� (�� �⮫�栬)
#include <stdio.h>
#include <conio.h>
#define  ROW 3    // ���-�� ��ப
#define  COL 5    // ���-�� �⮫�殢

void main()
{
    int a[ROW][COL]; // ���ᨢ
    int s[COL];      // �㬬� ����⮢
    int i,j;

    printf("\n������ ���ᨢ\n");
    printf("��᫥ ����� ����⮢ ������ ��ப�,");
    printf("\n%i 楫�� �ᥫ, �������� <Enter>\n", COL);
    for (i = 0; i < ROW; i++) // ROW ��ப
    {
        printf("->");
        for (j = 0; j < COL; j++)
            scanf("%i", &a[i][j]);
     }

    printf("\n�������� ���ᨢ\n");
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
            printf("%i " , a[i][j]);
        printf("\n");
    }

    // "���⨬" ���ᨢ s
    for (i = 0; i < COL; i++)
        s[i] = 0;

    // ��ࠡ�⪠
    for (j = 0; j < COL; j++)     // ��� ������� �⮫��
        for (i = 0; i < ROW; i++) // �㬬��㥬 �-��
            s[j] += a[i][j];

    printf("------------------------------\n");
    for (i = 0; i < COL; i++)
        printf("%i ", s[i]);

    printf("\n��� �����襭�� ������ <Enter>");
    getch();
}

