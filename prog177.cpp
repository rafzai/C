// ��ப� � ���ᨬ��쭮� �㬬�� ����⮢
#include <stdio.h>
#include <conio.h>

#define N 3  // ࠧ��� �����⭮� ������

void main()
{
    int m[N][N+1]; // ��᫥���� �⮫��� �ᯮ��㥬
                   // ��� �࠭���� �㬬� �-⮢ ��ப�
    int max;       // ��ப�, � ���ᨬ��쭮� �㬬��
                   // ����⮢
    int i,j;       // �������

    puts("\n��।������ ��ப� � ���ᨬ��쭮�");
    puts("�㬬�� ����⮢");
    printf("������ ������ %ix%i\n", N, N);
    for (i = 0; i < N; i++)
    {
        printf("�������� %i-� ��ப� -> ", i+1);
        for (j = 0; j < N; j++)
            scanf("%i", &m[i][j]);
    }

    // ��� ������ ��ப� ���᫨� �㬬� �-⮢
    for (i = 0; i < N; i++)
    {
        m[i][N] = 0;
        for(j = 0; j < N; j++)
           m[i][N] += m[i][j];
    }

    // ������ ��ப� � ���ᨬ��쭮� �㬬��
    max = 0;
    for (i = 1; i < N; i++)
        if ( m[i][N] > m[max][N] )
           max = i;

    printf("\n� %i-� ��ப� �㬬� ����⮢", max+1);
    printf("���ᨬ��쭠 � ࠢ�� %i\n", m[max][N]);

    printf("\n��� �����襭�� ������ <Enter>\n");

    getch();
}

