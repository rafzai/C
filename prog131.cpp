// ���᫥��� �।���� ��䬥��᪮�� ��砩���
// ��᫥����⥫쭮�⥩
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>  // ��� ����㯠 � srand � rand
#include <time.h>

#define L 10  // ����� ��᫥����⥫쭮��
#define N 3   // ������⢮ ��᫥����⥫쭮�⥩

void main()
{
    int r;        // ��砩��� �᫮
    int sum;      // summa �ᥫ ��᫥����⥫쭮��
    float sred;   // �।��� ��䬥��᪮�
    int i,j;      // ���稪� 横���
    time_t t;     // ⥪�饥 �६� - ��� ���樠����樨
                  // ������� ��砩��� �ᥫ

    srand((unsigned) time(&t));; // ���樠������ �������
                                 // ��砩��� �ᥫ
    for (i = 1; i <= N; i++)
    {
       // ������㥬 ��᫥����⥫쭮���
       printf("\n���砩�� �᫠: ");
       sum = 0;  // �� ������ ���㫨�� !
       for (j = 1; j <= L; j++)
       {
          r = rand() % 10 +1 ;
          printf("%i ", r);
          sum += r;
       }
       sred = (float)sum / L;  // �⮡� �� �뫮 ��祭��
       printf("\n�।.���.: %3.2f\n", sred);
    }

    printf("\n��� �����襭�� ������ <Enter>");
    getch();
}

