// �஢����, ���� �� ����� "�����᪨�" �����⮬
#include <stdio.h>
#include <conio.h>
#define  SZ 5      // ���ᨬ���� ࠧ��� ������
void main()
{
    int a[SZ][SZ];  // �����
    int n;          // ࠧ��� �஢��塞�� ������
    int ok;         // ����� - "�����᪨�" ������"
    int i,j;        // ������� ���ᨢ�
    int sum;        //  �㬬� ��-⮢ ������� ���������
    int temp;       // �㬬� ������⮢ ⥪�饩 ��ப�, �⮫��
                    // ��� ��ன ��������� ������

    printf("*** ���������� ������� ***\n");
    printf("\n������ ࠧ��� ������ (3..%i) -> ", SZ);
    scanf("%i", &n);
    printf("������ ��ப� ������\n");
    printf("��᫥ ����� ��ப�, %i 楫�� �ᥫ, ", n);
    printf("�������� <Enter>\n");
    for (i = 0; i < n; i++)
    {
        printf("->");
        for (j = 0; j < n; j++)
            scanf("%i", &a[i][j]);
    }

    ok = 1;  // ����� ����� - "�����᪨�" ������
    // ���᫨� �㬬� ������⮢ ������� ���������
    sum = 0;
    for (i = 0; i < n; i++)
        sum += a[i][i];

    // ����塞 �㬬� �� ��ப��
    i = 0;
    do {
        temp = 0; // �㬬� ��-⮢ ⥪�饩 ��ப�
        for (j = 0; j < n; j++)
            temp += a[i][j];
        if (temp != sum)  ok = 0;
        i++;
    } while (ok && i < n);

    if ( ok )
    { 
        // ����� �㬬� ������⮢ ������ ��ப�
        // ࠢ�� �㬬� ������⮢ ������� ���������
    
        // ����塞 �㬬� �� �⮫�栬
        j = 0;
        do {
            temp = 0; // �㬬� ��-⮢ ⥪�饣� �⮫��
            for (i = 0; i < n; i++)
                temp += a[i][j];
            if (temp != sum)  ok = 0;
            j++;
        } while (ok && i < n);
    }

    if ( ok ) {
         // ����� �㬬� ������⮢ ������ ��ப�
         // ࠢ�� �㬬� ������⮢ ������� �⮫�� �
         // �㬬� ������⮢ ������� ���������.
         // ���᫨� �㬬� ������⮢ ��ன
         // ������� ���������
         temp = 0;
         i = n - 1;
         for (j = 0; j < n; j++)
            temp += a[i--][j];
         if (temp != sum)  ok = 0;
    }
    printf("��������� ����� ");
    if ( !ok )
        printf("�� ");
    printf("���� �����᪨� �����⮬.\n");

    printf("\n��� �����襭�� ������ <Enter>");
    getch();
}
