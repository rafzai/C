// ��� � �����᪮� 楯� 
#include <stdio.h>
#include <conio.h>
void main()
{
    float P,U,I; // ��魮���, ����殮���, ⮪

    printf("\n��� � �����᪮� 楯�\n");
    
    printf("��魮���, �� -> ");
    scanf("%f", &P);
    printf("����殮���, � -> ");
    scanf("%f", &U);

    if (U != 0)
    {
       I = P / U;
       printf("��� � 楯�: %5.2f �, I);
    }
    else
       printf("�訡��! ����殮��� �� ������ ���� ࠢ�� ���!\n");

    printf("\n��� �����襭�� ������ <Enter>");
    getch();
}

