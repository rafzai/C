// �뢮��� �������� ��� ������
#include <stdio.h>
#include <conio.h>
void main()
{
   int nd; // ����� ��� ������

   puts("\n������ ����� ��� ������ (1..7");
   printf("->");
   scanf("%i", &nd);
   switch (nd)
   {
     case 1:  puts("�������쭨�"); break;
     case 2:  puts("��୨�");     break;
     case 3:  puts("�।�");       break;
     case 4:  puts("��⢥�");     break;
     case 5:  puts("��⭨�");     break;
     case 6:  puts("�㡡��");     break;
     case 7:  puts("����ᥭ�"); break;
     
        default: puts("��᫮ ������ ���� � ��������� 1..7");
   }
   getch();
}

