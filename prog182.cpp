// �ਢ���⢨� (��ᨬ����� ���� ��ப�)
#include <stdio.h>
#include <conio.h>
void main()
{
    char name[40]; // ��� � ����⢮ ���짮��⥫�
    char ch;
    int i;

    printf("��� ��� �����?\n");
    printf("(������ ᢮� ���, ����⢮ � ������ <Enter>");
    printf("-> ");
    i = 0;
    while ((ch=getch()) != 13 && i < 40) // ���� �� <Enter>
    {  putch(ch);
       name[i++] = ch;
    }
    name[i] = '\0';
    printf("\n��ࠢ����, %s!\n", name);

    printf("\n��� �����襭�� ������ <Enter>");
    getch();
}

