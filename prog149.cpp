// ��।������ �������쭮�� �᫠
// � ��᫥����⥫쭮�� ������⥫��� �ᥫ
#include <stdio.h>
#include <conio.h>

void main()
{
    int a;    // ��।��� �᫮
    int min;  // �������쭮� �᫮

    printf("\n��।������ �������쭮�� �᫠\n");
    printf("� ��᫥����⥫쭮�� ������⥫��� �ᥫ.\n");
    printf("������ �᫠. ��� �����襭�� ������ ����.\n");
    printf("-> ");
    scanf("%i", &a);
    min = a;     // ����� ��ࢮ� �᫮ �������쭮�
    while ( a > 0)
    {
       if (a < min) min = a;
       printf("-> ");
       scanf("%i", &a);
    }
    printf("�������쭮� �᫮ ��᫥����⥫쭮��: %i\n", min);

    printf("\n��� �����襭�� ������ <Enter>");
    getch();
}

