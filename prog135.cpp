// �뢮��� ⠡���� 㬭������ �� 7 
#include <stdio.h>
#include <conio.h>
void main()
{
    int m;  // �᫮, ��� ���ண� ���� �뢥��
            // ⠡���� 㬭������ (��������)
    int n;  // �����⥫�
    int p;  // �ந��������

    m = 7;
    printf("\n������ 㬭������ �� %i\n", m);
    for (n = 1; n<=9; n++)
    {
       p = m * n;
       printf("%ix%i=%i\n", m, n, p);
    }

    printf("\n��� �����襭�� ������ <Enter>");
    getch(); 
}

