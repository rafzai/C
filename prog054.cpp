// ���᫥��� ���頤� �����孮�� ��ࠫ����������
#include <stdio.h>
#include <conio.h>
void main()
{
  float l,w,h; // �����, �ਭ� � ���� ��ࠫ����������
  float s;     // ���頤� �����孮�� ��ࠫ����������

  printf("\n���᫥��� ���頤� �����孮�� ��ࠫ����������\n");
  printf("������ ��室�� �����:\n");
  printf("����� (�)  -> ");
  scanf("%f", &l);
  printf("��ਭ� (�) -> ");
  scanf("%f", &w);
  printf("���� (�) -> ");
  scanf("%f", &w);
  s = (l*w + l*h + w*h)*2;
  printf("���頤� �����孮��: %6.2f ��.�\n",s);
  printf("\n\n��� �����襭�� ������ <Enter>");
  getch(); 
}

