//   �८�ࠧ������ �����筮�� �᫠ � ����筮�
#include <stdio.h>
#include <conio.h>
void main()
{
   int dec;     // �����筮� �᫮
   int v;       // ��� �ନ�㥬��� ࠧ�鸞
   int i;       // ����� �ନ�㥬��� ࠧ�鸞

   printf("\n�८�ࠧ������ �����筮�� �᫠ � ����筮�\n");
   printf("������ 楫�� �᫮ �� 0 �� 255 � ������ <Enter>");
   printf("-> ");
   scanf("%i", &dec);
   printf("�����筮�� ��� %i ᮮ⢥����� ����筮� ", dec);
   v = 128;  // ��� ���襣� (���쬮��) ࠧ�鸞
   for (i = 1; i <= 8; i++)
   {
      if (dec >= v)
      {
        printf("1");
        dec -= v;
      }
      else printf("0");
      v = v / 2; // ��� ᫥���饣� ࠧ�鸞 � ��� ࠧ� �����
   }
   printf("\n\n��� �����襭�� ������ <Enter>");
   getch();
}

