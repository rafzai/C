// ���᫥��� �।���� ��䬥��᪮��
// ��᫥����⥫쭮�� ������⥫��� �ᥫ
#include <stdio.h>
#include <conio.h>
void main()
{
    int a;    // �᫮, ��������� � ����������
    int n;    // ������⢮ �ᥫ
    int s;    // �㬬� �ᥫ
    float m;  // �।��� ��䬥��᪮�

    s = 0;
    n = 0;
    printf("\���᫥��� �।���� ��䬥��᪮��");
    printf("��᫥����⥫쭮�� ������⥫��� �ᥫ.\n");
    printf("������ �᫠. ��� �����襭�� ������ ����.\n");
    do {
       printf("-> ");
       scanf("%i", &a);
       if (a > 0)
       {
          s += a;
          n++;
       }
    } while (a > 0);
    printf("������� �ᥫ: %i\n", n);
    printf("�㬬� �ᥫ: %i\n", s);
    m  =  (float) s / n;
    printf("�।��� ��䬥��᪮�: %3.2f", m);

    printf("\n\n��� �����襭�� ������ <Enter>");
    getch();
}

