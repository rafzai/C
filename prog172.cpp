// ������ ��� �祭����
#include <stdio.h>
#include <conio.h>
#define  SZ 30   //���ᨬ��쭮� ���-�� �祭����
void main()
{
    int r;        // ��� �祭���
    int rost[SZ]; // ��� ��� �祭����
    int n = 0;    // ���-�� �祭����, � ������
                  // ������� ᢥ�����
    float sred;   // �।��� ���
    int m = 0;    // ���-�� �祭����, � ������
                  // ��� ����� �।����
    int sum = 0;  // �㬬��� ���
    int i = 0;

    printf("*** ������ ��� �祭���� ***\n");
    printf("������ ��� (�) �祭����\n");
    printf("��� �����襭�� ������ 0 � ������ <Enter>\n");

    do {
        printf("-> ");
        scanf("%i", &r);
        if ( r )
        {
           rost[i++] = r;
           sum += r;
           n++;
         }
    } while (r && i < SZ);

    if ( n )
    {
        sred = (float) sum / n;
        m = 0;
        // �ࠢ��� ��� ������� � �।���
        for (i = 0; i < n; i++)
            if (rost[i] > sred) m++;

        printf("�।��� ���: %3.2f �\n", sred);
        printf("� %i �祭���� ��� �ॢ�蠥� �।���\n", m);
    }

    printf("\n��� �����襭�� ������ <Enter>");
    getch();
}

