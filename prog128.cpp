// �।��� ��䬥��᪮� �஡��� �ᥫ, �������� � ����������
#include <stdio.h>
#include <conio.h>

#define L 5 // ������⢮ �ᥫ ��᫥����⥫쭮��

void main()
{
    float a;     // �᫮
    int n;       // ���-�� ��������� �ᥫ
    float sum;   // �㬬� ��������� �ᥫ
    float sred;  // �।��� ��䬥��᪮� ��������� �ᥫ

    printf("\n��ࠡ�⪠ ��᫥����⥫쭮�� �஡��� �ᥫ\n");
    printf("��᫥ ����� ������� �᫠ �������� <Enter>");
    sum = 0;
    for (n = 1; n <= L; n++)
    {
      printf("-> ");
      scanf("%f", &a);
      sum += a;
      printf("������� �ᥫ: %i ", n);
      printf("�㬬�: %6.2f\n", sum);
    }

    sred = sum / L;
    printf("�।.��䬥��᪮�: %6.2f\n", sred);
    printf("\n��� �����襭�� ������ <Enter>");
    getch();
}

