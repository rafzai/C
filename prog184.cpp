// ��ᨬ����� �뢮� ᮮ�饭�� 
#include <stdio.h>
#include <conio.h>
#include "dos.h" // ��� ����㯠 � �㭪樨 delay
void main()
{
    char msg[] = "\n\r�ਢ������ �������� �ணࠬ����!\0";
    int i;       // ����� ᨬ����

    i = 0;
    while(msg[i])
    {
       putch(msg[i++]);
       delay(150);
    }

    printf("\n\n��� �����襭�� ������ <Enter>");
    getch();
}

