// �஢����, ���� ��ப� 楫� �᫮�
#include <stdio.h>
#include <conio.h>
void main()
{
    char st[40];   // ��ப�
    int i;         // ����� �஢��塞��� ᨬ����

    printf("������ 楫�� �᫮ � ������ <Enter>");
    printf("->");
    scanf("%s",&st);
    i = 0;
    while (st[i] >= '0' && st[i] <= '9')
       i++;

    // ����� st[i] '\0', �᫨ ������� ⮫쪮 ����
    printf("��������� ��ப� ");
    if (st[i])
      printf("�� ");
    printf("���� 楫� �᫮�.\n");

    printf("\n��� �����襭�� ������ <Enter>");
    getch();
}

