// �뢮��� ��� ᨬ����
#include <stdio.h>
#include <conio.h>
void main()
{
    unsigned char ch;
    // �᫨ ch ����� ��� char, � �㪢�� ���᪮��
    // ��䠢�� ���� ᮮ⢥��⢮���� ����⥫�� �᫠

    printf("\n������ ᨬ����.\n");
    printf("��� �����襭�� ������ ���.\n");
    do {
      ch = getch();
      printf("������: %c ���: %i\n", ch, ch);
    } while ( ch != '.');

    printf("\n\n��� �����襭�� ������ <Enter>");
    getch();
}

