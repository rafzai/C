// �ணࠬ�� �஢���� ������ ⠡���� 㬭������
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>  // ��� ����㯠 � srand � rand
#include <time.h>

void main()
{
   int numb1,numb2; // ᮬ����⥫�
   int res;         // �ந��������
   int otv;         // �⢥� ����㥬���
   int kol = 0;     // ������⢮ �ࠢ����� �⢥⮢
   int i;           // ���稪 横��� 
   time_t t;        // ⥪�饥 �६� - ��� ���樠����樨
                    // ������� ��砩��� �ᥫ

   printf("\*** �஢�ઠ ������ ⠡���� 㬭������ ***\n");
   printf(" ��᫥ �ਬ�� ������ �⢥� � ������ <Enter>");

   srand((unsigned) time(&t));; // ���樠������ �������
                                // ��砩��� �ᥫ

   for (i = 1; i <= 10; i++)  // 10 �ਬ�஢
   {
      numb1 = rand()%7 + 2 ;  // �᫮ �� 2 �� 9
      numb2 = rand()%7 + 2 ;
      res = numb1 * numb2;
      printf("%i�%i=", numb1, numb2);
      scanf("%i",&otv);
      if (otv == res)
         kol++;
      else printf("�� �訡����! %ix%i=%i\n�த�����...\n",
                    numb1, numb2, res);
   }
   printf("\n�ࠢ����� �⢥⮢: %i\n", kol);
   printf("��� �業��: ");
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

