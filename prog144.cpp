// �����஭�� ���
#include <stdio.h>
#include <conio.h>
#include "dos.h"    // ��� ����㯠 � delay
void main()
{
    int min,sec; // ������, ᥪ㭤�
    clrscr();      // ������ �࠭
    _setcursortype(_NOCURSOR);  // ���� �����
    printf("�⮡� ��⠭����� ⠩���, ������ ���� �������");
    for (min = 0; min <= 2; min++)
   {
      for (sec = 0; sec <= 59; sec++)
      {
        delay(1000);     // ����প� 1000 ms
        gotoxy(1,3);     // ����� � 1-�� ������� 1-�� ��ப�
        printf("%i:%2i", min, sec);
        if (kbhit()) break;
      }
      if (kbhit()) break;
    }
    _setcursortype(_NORMALCURSOR);
    getch(); // ������, ��⠭������ ���
    printf("\n��� �����襭�� ������ <Enter>");
    getch();
}

