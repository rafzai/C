// ������� �ॢ�������
#include "stdio.h"
#include "conio.h"
#include "string.h"

#define NC 5      //�᫮ ������ 

void main()
{
char *team[] = {
                 "������","��ଠ���","��ࢥ���",
                  "�����","����ﭤ��"
               };
      
   // ⠡��� १���⮢
   int result[NC+1][6];
   // result[i][0] - �������
   // result[i][1] - �ॡ�ﭭ��
   // result[i][2] - �஭�����
   // result[i][3] - �ᥣ�
   // result[i][4] - �窮�
   // result[i][5] - ����� �������
   // NC+1 -�� ��ப� �ᯮ������ ��� ����
   // �� ���஢�� ⠡����

   int i,j;
   int max;     // ����� ��ப� ⠡����, � ���ன
                // ������⢮ �窮� ���ᨬ��쭮
   
   printf("������ � ����� ��ப�");
   printf("������⢮ �������,\n");
   printf("�ॡ���� � �஭����� �������\n");

   // ���� ��室��� ������
   for (i = 0; i < NC; i++)
   {
      printf("%s ->", team[i]);
      scanf("%i%i%i", &result[i][0],   // �������
                      &result[i][1],   // �ॡ����
                      &result[i][2]);  // �஭�����
       result[i][5] = i; // ����� �������
   }

   // ���᫨� ��饥 ������⢮ ������� � �窮�
   for (i = 0; i < NC; i++)
   {
        result[i][3] =
             result[i][0]+result[i][1]+result[i][2];
        result[i][4] =
             result[i][0]*7+result[i][1]*6+
             result[i][2]*5;
   }
  // ���஢�� ��ப (��⮤�� ���⮣� �롮�) �
  // ᮮ⢥��⢨� � ������⢮� �窮�
  for (i = 0; i < NC+1; i++)
  {
      // � ��� ⠡���� ��稭�� � ��ப� i
      // ���� j-�� ��ப�, � ���ன �����
      // result[j][5] ���ᨬ����

      max = i; //  ����� �� ��ப� � ����஬ i
      for (j = i+1; j < NC; j++)
      {
            if (result[j][4] > result[max][4])
                  max = j;
      }
      // �����塞 ���⠬� i-�� ��ப� � ��ப��
      // � ����஬ max
      // � ����⢥ ���� �ᯮ��㥬 ��᫥����
      // ��ப� ⠡����
      for (j = 0; j < 6; j++)
           result[NC][j] = result[i][j];
      for (j = 0; j < 6; j++)
           result[i][j] = result[max][j];
      for (j = 0; j < 6; j++)
           result[max][j] = result[NC][j];
    }

    // ����� ⠡��� 㯮�冷祭�
    printf("%3s%12s%8s%8s%8s%8s%8s",
           "","�������",
           "�����","��ॡ�","�஭��",
           "�ᥣ�","�窮�");
    for (i = 0; i < NC; i++)
    {
        printf("\n%12s", team[ result[i][5]   ]);
        for (j = 0; j < 5; j++)
            printf("%8i", result[i][j]);
    }

    printf("\n��� �����襭�� ������ <Enter>");
    getch();
}

