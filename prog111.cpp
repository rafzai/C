// �� ��� ��।���� ���� ������
#include <stdio.h>
#include <conio.h>
void main()
{
    int day,month,year; // ����, �����, ���

    int c,y;            // �⮫�⨥ � ��� � �⮫�⨨
    int m;              // ����� �� �ॢ��ਬ᪮�� ���������
    int d;              // ���� ������


    puts("\n��।������ ��� ������ �� ���");
    puts("������ ����: ���� ����� ���.");
    puts("���ਬ��, 5 12 2001");
    printf("->");
    scanf("%i %i %i", &day, &month, &year);

    if (month == 1 || month == 2)
         year--;     // ﭢ��� � 䥢ࠫ� �⭮�����
                     // � �।��饬� ����

    m = month - 2;       // ��� ��稭����� � ����
    if (m <= 0) m += 12; // ��� ﭢ��� � 䥢ࠫ�
    // ����� m - ����� ����� �� ਬ᪮�� ���������
    c = year / 100;
    y = year - c*100;

    d = (day+(13*m-1)/5+y+y/4+c/4-2*c+777)%7;

    switch (d)
    {
      case 1: puts("�������쭨�"); break;
      case 2: puts("��୨�");     break;
      case 3: puts("�।�");       break;
      case 4: puts("��⢥�");     break;
      case 5: puts("��⭨�");     break;
      case 6: puts("�㡡��");     break;
      case 0: puts("����ᥭ�");
    }
    printf("\n��� �����襭�� ������ <Enter>\n");

    getch();
}

