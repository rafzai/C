// ���᫥��� �⮨���� ������� �� ��⮬�����
#include <stdio.h>
#include <conio.h>
void main()
{
    float rast;  // ����ﭨ�
    float potr;  // ���ॡ����� ������� �� 100 ��. ���
    float cena;  // 業� ������ ���� �������
    float summ;  // �⮨����� �������

    printf("\n���᫥��� �⮨���� ������� �� ��⮬�����\n");
    printf("�����ﭨ� (��) -> ");
    scanf("%f",&rast);
    printf("���室 ������� (���஢ �� 100 ��.) -> ");
    scanf("%f",&potr);
    printf("���� ���� ������� (��.) -> ");
    scanf("%f",&cena);
    summ = 2 * potr/100 * rast * cena;
    printf("������� ��������� � %6.2f ��.",summ);

    printf("\n\n��� �����襭�� ������ <Enter>");
    getch();
}

