// �஢�ઠ ������ ���ਨ ���⥪���� 
#include <stdio.h>
#include <conio.h>
void main()
{
   int otv; // ����� ��࠭���� ��ਠ�� �⢥�

   printf("���⥪�� �ᠠ����᪮�� ᮡ��:\n");
   printf("1. �������� �१���\n");
   printf("2. ����� �����࠭\n");
   printf("3. ��� ����\n");

  printf("������ ����� �ࠢ��쭮�� �⢥� � ������ <Enter>");
   printf("-> ");
   scanf("%i", &otv);
   if (otv == 2)
       printf("�ࠢ��쭮.");
   else {
       printf("�� �訡����.\n ���⥪�� �ᠠ����᪮�� ");
       printf("ᮡ�� ����� �����࠭\n");
   }
    printf("\n��� �����襭�� ������ <Enter>");
    getch();
}

