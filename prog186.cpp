// ASCII ⠡��� ����஢�� ᨬ�����
#include <stdio.h>
#include <conio.h>

#define  SM 128  //  0  - ᨬ���� � ������ 0 - 127
                 // 128 - ᨬ���� � ������ 128 - 256
void main()
{
    // �᫨ ch ����� ��� char, � �㪢�� ���᪮��
    // ��䠢�� ���� ᮮ⢥��⢮���� ����⥫�� �᫠
    unsigned char ch;     // ᨬ���

    int i,j;

    printf("\nASCII ⠡��� ����஢�� ᨬ�����\n");
    for (i = 0; i <= 16; i++) // ��⭠���� ��ப
    {    ch = i + SM;
       for (j = 1; j <= 8; j++) // ��ᥬ� �������
       {
          if (( ch <7 || ch >= 14) && ch !=26)
               printf("%3c -%4i", ch, ch);
          else // ᨬ���� CR,LF,TAB �� �⮡ࠦ�����
               printf("%3c -     ", ch, ch);
          ch += 16;
       }
       printf("\n");
    }

    printf("\n��� �����襭�� ������ <Enter>");
    getch();
}

