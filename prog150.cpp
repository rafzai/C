// �஢����, ���� �� �᫮ �����
#include <stdio.h>
#include <conio.h>
void main()
{
     int n;  // �᫮
     int d;  // ����⥫�
     int r;  // ���⮪ �� ������� n �� d

     printf("������ 楫�� �᫮-> ");
     scanf("%i", &n);
     d = 2;        // ᭠砫� �㤥� ������ �� ���
     do {
        r = n % d;
        if (r != 0) d++;
     }
     while ( r != 0 ); // ���� n �� ࠧ������� �� d
     if (d == n)
       printf("%i - ���⮥ �᫮" ,n);
     else  printf("%i - �� ���⮥ �᫮" ,n);

    printf("\n\n��� �����襭�� ������ <Enter>");
    getch();
}

