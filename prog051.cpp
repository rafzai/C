// ���᫥��� ���頤� ��אַ㣮�쭨��
#include <stdio.h>
#include <conio.h>
void main()
{
  float l,w; // ����� � �ਭ� ��אַ㣮�쭨��
  float s;   // ���頤� ��אַ㣮�쭨��

  printf("\n���᫥��� ���頤� ��אַ㣮�쭨��\n");
  printf("������ ��室�� ����:\n");
  printf("����� (�.)  -> ");
  scanf("%f", &l);
  printf("��ਭ� (�.) -> ");
  scanf("%f", &w);
  s = l * w;
  printf("���頤� ��ࠫ�����ࠬ��: %10.2f ��.�.\n", s);

  printf("\n\n��� �����襭�� ������ <Enter>");
  getch();
}

