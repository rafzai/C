// ���᫥��� �������襣� ��饣� ����⥫�
// ���� 楫�� �ᥫ (������ �������)
#include <stdio.h>
#include <conio.h>
void main()
{
     int n1,n2;   //  �᫠, ��� ������ ���� ���᫨��
     int nod;     // �������訩 ��騩 ����⥫�
     int r;       // ���⮪ �� ������� n1 �� n2

     printf("\n���᫥��� �������襣� ��饣� ����⥫� ");
     printf("��� ���� 楫�� �ᥫ.\n");
     printf("������ � ����� ��ப� ��� �᫠ ");
     printf("� ������ <Enter>");
     printf("-> ");
     scanf("%i%i", &n1, &n2);
     printf("��� ࠢ�ᥫ %i � %i - �� ", n1, n2);
     while (n1 % n2)
     {
       r = n1 % n2; // ���⮪ �� �������
       n1 = n2;
       n2 = r;
     }
     nod = n2;
     printf("%i\n", nod);

    printf("\n��� �����襭�� ������ <Enter>");
    getch();
}

