// ���᫥��� �⮨���� ⥫�䮭���� ࠧ����� � ��⮬
//  ᪨���, �।��⠢�塞�� �� �㡡�⠬ � ����ᥭ��
#include <stdio.h>
#include <conio.h>
void main()
{
     int time;     // ���⥫쭮��� ࠧ�����
     int day;      // ���� ������
     float summa;  // �⮨����� ࠧ�����

     printf("\n���᫥��� �⮨���� ࠧ����� �� ⥫�䮭�\n");
     printf("������ ��室�� �����:\n");
     printf("���⥫쭮��� ࠧ����� ");
     printf("(楫�� ���-�� �����) ->");
     scanf("%i", &time);
     printf("���� ������");
     printf(" (1-�������쭨�,..,7-����ᥭ�) ->");
     scanf("%i", &day);
     summa = 2.3 * time;       // 業� ������ 2.3 ��.
     if (day == 6 || day == 7)
      {
        printf("�।��⠢����� ᪨��� 20%\n");
        summa = summa * 0.8;
       };
     printf("�⮨����� ࠧ�����: %3.2f ��.\n",summa);

    printf("\n��� �����襭�� ������ <Enter>");
    getch();
}

