// ��� "������ �᫮"
#include <conio.h> 
#include <stdlib.h>  // ��� ����㯠 � srand
#include <time.h>
void main()
{
   int comp;   // ���㬠���� �᫮
   int igrok;  // ��ਠ�� ��ப�
   int n;      // ������⢮ ����⮪
   time_t t;   // ⥪�饥 �६� - ��� ���樠����樨
               // ������� ��砩��� �ᥫ


   srand((unsigned) time(&t));
   comp = rand() % 10 +1 ;     // �᫮ �� 1 �� 10

   clrscr();
   cprintf("\n\r�������� \"���㬠�\" �᫮ �� 1 �� 10.\n\r");
   cprintf("�� ������ ��� 㣠���� �� ���� ����⮪");
   n = 0;
   do {
    cprintf("\n\r->");
    cscanf("%i",&igrok);
    n++;
   }  while ((igrok != comp)&&(n < 3));

   if (igrok == comp)
   {
      textcolor(RED+BLINK);
      cprintf("\n\r�� ��������!");
   }
   else
   {
      textcolor(GREEN);
      cprintf("\n\r�� �ந�ࠫ�.);
      cprintf("�������� ���㬠� �᫮ %d",comp);
   }
   textcolor(LIGHTGRAY);
   cprintf("\n\r��� �����襭�� ������ ���� �������...");
   getch();getch();
}

