// ���⥦� �� �।���
#include "stdio.h"
#include "conio.h"

void main()
{
    float value; // �㬬� �।��
    int period;  // �ப
    float rate;  // ��業⭠� �⠢��

    float debt; // ����, �� ��砫� ⥪�饣� �����
    float interest; // ���� �� �।�� (��業�� �� ����)
    float paying;   // �㬬� ���⥦�
    float suminterest; // ���� ���� �� �।��

    printf("�㬬�, ��.,-> ");
    scanf("%f",&value);

    printf("�ப, ���.,-> ");
    scanf("%i",&period);

    printf("��業⭠� �⠢��, �������-> ");
    scanf("%f",&rate);

    debt = value;
    suminterest = 0;
    printf("-----------------------\n");
    printf("   ���� ��業� ���⥦\n");
    printf("-----------------------\n");
    for ( int i = 1; i <= period; i++)
    {
        interest = debt * (rate/12/100);
        suminterest += interest;
        paying = value/period + interest;
        printf("%2i  %9.2f  %9.2f  %9.2f\n",
                i,debt,interest, paying);
        debt = debt - value/period;
    }
    printf("-----------------------\n");
    printf("\n�ᥣ� ��業⮢: %3.2f",suminterest);
    printf("\n ��� �����襭�� ������ <Enter>");
    getch();

}

