// ���᫥��� ���頤� �����孮�� 樫���� 
#include <stdio.h>
#include <conio.h>
#include "math.h"  // ����⠭� M_PI - �᫮ "��"
void main()
{
    float r; // ࠤ��� �᭮����� 樫����
    float h; // ���� 樫����
    float s; // ���頤� �����孮�� 樫����

    printf("\n���᫥��� ���頤� �����孮�� 樫����\n");
    printf("������ ��室�� �����:\n");
    printf("ࠤ��� �᭮����� 樫���� (�) ->");
    scanf("%f", &r);
    printf("���� 樫���� (�) ->");
    scanf("%f", &h);
    s = 2*M_PI*r*r +2*M_PI*r*h;
    printf("���頤� �����孮�� 樫���� %6.2f ��.�\n", s);

    printf("\n��� �����襭�� ������ <Enter>");
    getch();
}

