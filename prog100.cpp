// ��।������ �६��� ���� �� ������ ����� 
#include <stdio.h>
#include <conio.h>
void main()
{
   int month; // ����� �����

   puts("\n������ ����� ����� (�᫮ �� 1 �� 12)");
   printf("-> ");
   scanf("%i", &month);
   if (month < 1 && month > 12) 
       printf("��᫮ ������ ���� �� 1 �� 12");
   else if (month >= 3 && month <= 5)
        printf("��᭠");
    else if (month >= 6 && month <= 8)
         printf("���");
         else if (month >= 9  && month <= 11)
              printf("�ᥭ�");
          else printf("����");

    printf("\n\n��� �����襭�� ������ <Enter>");
    getch();
}

