// �ࠢ����� ���� 楫�� �ᥫ 
#include <stdio.h>
#include <conio.h>
void main()
{
   int a,b; // �ࠢ������� �᫠

   printf("\n������ � ����� ��ப� ��� 楫�� ");
   printf("�᫠ � ������ <Enter>");
   printf("->");
   scanf("%i%i", &a, &b);
   if (a == b)
       printf("��᫠ ࠢ��");
   else if (a < b)
          printf("%i ����� %i\n", a, b);
    else  printf("%i ����� %i\n", a, b);

    printf("\n��� �����襭�� ������ <Enter>");
    getch();
}

