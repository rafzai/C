// �஢�ઠ 㬥��� ᪫��뢠�� � ������ �᫠
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>  // ��� ����㯠 � srand � rand
#include <time.h>

#define LEVEL 97+2   // ����⢨� ��� �᫠�� �� 2 �� 99

void main()
{
   int numb1,numb2; // �᫠
   int op;          // ����⢨� ��� �᫠��:
                    // 0-᫮�����, 1-���⠭��
   char zop;        // ���� ����樨 - "����" ��� "�����"
   int res;         // १����
   int otv;         // �⢥� ����㥬���
   int kol = 0;     // ������⢮ �ࠢ����� �⢥⮢
   int buf;         // ���� ��� ������ numb1  � numb2,
                    // � ��砥 �᫨ numb1<numb2
   int i;           // ���稪 横���
   time_t t;        // ⥪�饥 �६� - ��� ���樠����樨
                    // ������� ��砩��� �ᥫ

   printf("\n�஢�ઠ 㬥��� ᪫��뢠�� � ������ �᫠\n");
   printf("��᫥ �ਬ�� ������ �⢥� � ������ <Enter>");
   kol = 0;
   srand((unsigned) time(&t));; // ���樠������ ������� ��砩��� �ᥫ

   for (i = 1; i <= 10; i++)
   {
      // ᣥ����㥬 �ਬ��
      numb1 = rand() % LEVEL;  // �᫮ �� 2 �� 99
      numb2 = rand() % LEVEL;
      op = rand()%2;        // ����⢨� ��� �᫠��
      if (op == 0)
      {  
         res = numb1 + numb2;
         zop = '+';
      }
      else
      { // ���⠭��
         zop = '-';
         if (numb1 < numb2)
         {
           // �����塞 numb1 � numb2
           buf = numb2;
           numb2 = numb1;
           numb1 = buf;
         }
         res = numb1 - numb2;
      }
      printf("%i%c%i=", numb1, zop, numb2); // �뢥�� �ਬ��
      scanf("%i", &otv);  // ������� �⢥� ����㥬���
      if (otv == res)
         kol++;
      else printf("�� �訡����. %i%c%i=%i\n",
                     numb1, zop, numb2, res);
   }
   printf("�ࠢ����� �⢥⮢: %i\n", kol);
   printf("��� �業��:\n");
   switch (kol)
   {
       case 10: puts("5"); break;
       case 9:  puts("4"); break;
       case 8:  puts("4"); break;
       case 7:  puts("3"); break;
       default: puts("2"); break;
   }
   printf("\n��� �����襭�� ������ <Enter>");
   getch();
}

