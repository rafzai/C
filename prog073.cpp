// ���᫥��� ��室� �� ������ 
#include <stdio.h>
#include <conio.h>
void main()
{
  float summ;    // �㬬� ������
  int srok;      // �ப ������
  float stavka;  // ��業⭠� �⠢��
  float dohod;   // ��室 �� ������

  printf("\n���᫥��� ��室� �� ������\n");
  printf("������ ��室�� �����:\n");
  printf("�㬬� ������ (��.) -> ");
  scanf("%f", &summ);
  printf("�ப ������ (����) -> ");
  scanf("%i", &srok);
  printf("��業⭠� �⠢�� (�������) -> ");
  scanf("%f", &stavka);
  dohod = summ * stavka/365/100 * srok; // 365 - ���-�� ���� � ����
  summ = summ + dohod;

  printf("----------------------------------\n");
  printf("��室: %9.2f ��.\n", dohod);
  printf("�㬬� �� ����砭�� �ப� ������: %9.2f ��.\n",summ);

  printf("\n��� �����襭�� ������ <Enter>");
  getch();
}

