#include <stdio.h>
#include <conio.h>
void main()
{
int a[3][5]; // ���ᨢ 3x5 - 3 ��ப� �� 5 ����⮢
   int r;       // ����� ��ப�
   int c;       // ����� �⮫��
   
   int sum;     // �㬬� ����⮢ ��ப�
   float m;     // �।��� ��䬥��᪮�    

   int k;

   printf("\n���� �� ��ப��\n");
   printf("������ ������ ��ப� (5 �ᥫ) � ������ <Enter>\n");

   // ���� ���ᨢ�
   k =1;
   for ( r = 0; r < 3; r++)
   {
       printf("��ப� %i -> ", k);
       for ( c = 0; c < 5; c ++)
       {
              scanf("%i",&a[r][c]);
       }
       k++;
   }
      
   printf("\n--------------------------\n"); 
   // �뢮� ���ᨢ�
   printf("\n���ᨢ\n");
   for ( r = 0; r < 3; r++)
   {
       for ( c = 0; c < 5; c ++)
       {
              printf("%5i",a[r][c]);
           }
       printf("\n");
   }
   
   // ��ࠡ�⪠ ���ᨢ�
   printf("�।��� ��䬥��᪮�:\n");
   k = 1;
   for ( r = 0; r < 3; r++)
   {
       // ���᫨�� �।��� ��䬥��᪮�
       // ����⮢ ��ப�
       sum = 0;
       for ( c = 0; c < 5; c ++)
       {
              sum = sum + a[r][c];
       }
       m = (float) sum / 5;
       printf("��ப� %i: %5.2f\n", k, m);
       k++;
   }
 
   printf("\n��� �����襭�� ������ <Enter>");
   getch();
}


