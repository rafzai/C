// ����, �뢮� � ��ࠡ�⪠ ���ᨢ�
#include <stdio.h>
#include <conio.h>
void main()
{
int a[7]; // ���ᨢ
   int sum;  // �㬬� ����⮢ ���ᨢ�
   float m;  // �।��� ��䬥��᪮�	

   int j;

   printf("\n���� ���ᨢ� 楫�� �ᥫ");
   printf("��᫥ ����� ������� �᫠ ������ <Enter>\n");

   // ���� ���ᨢ�
   for ( j = 0; j < 7; j++)
   {
           printf("na[%i] -> ", j);
           scanf("%i",&a[j]);  	                        
   }

   // �뢮� ���ᨢ�
   printf("\n���ᨢ: \n");
   for ( j = 0; j < 7; j++)
   {
           printf("%i   ", a[j]);                      
   }

   sum = 0;
   // ���᫨�� �㬬� ����⮢
   for ( j = 0; j < 7; j++)
   {
            sum = sum + a[j]; 
   }
   
   m = sum / 7;
   
   printf("�।��� ��䬥��᪮�: %f", m);

   printf("\n��� �����襭�� ������ <Enter>");
   getch();
}


