// ��।������ �⮨���� ����㣮த����
// ⥫�䮭���� ࠧ�����
#include <stdio.h>
#include <conio.h>
void main()
{
    int kod;     // ��� ��த�
    float cena;  // 業� ������
    int dlit;    // ���⥫쭮��� ࠧ�����
    float summ;  // �⮨����� ࠧ�����

    printf("\n���᫥��� �⮨���� ࠧ����� �� ⥫�䮭�.\n");
    printf("������ ��室�� �����:\n");
    printf("���⥫쭮��� ࠧ����� (楫�� ���-�� �����) ->");
    scanf("%i", &dlit);
    puts("��� ��த�");
    puts("��������⮪\t432");
    puts("��᪢�\t\t495");
    puts("��ଠ��\t815");
    puts("�����\t\t846");
    printf("->");
    scanf("%i", &kod);

    printf("��த: ");
    switch (kod)
    {
      case 432: puts("��������⮪");
                cena = 2.2;
                break;
      case 495:  puts("��᪢�");
                cena = 1;
                break;
      case 815: puts("��ଠ��");
                cena = 1.2;
                break;
      case 846: puts("�����");
                cena = 1.4;
                break;
      default:  printf("����୮ ������ ���.");
                cena = 0;
    }
    if (cena != 0) {
       summ = cena * dlit;
       printf("���� ������: %i ��.\n", cena);
       printf("�⮨����� ࠧ�����: %3.2f ��.\n", summ);
    }
    printf("\n��� �����襭�� ������ <Enter>");
    getch();
}

