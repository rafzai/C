// ������� ����
#include <stdio.h>
#include <conio.h>
void main()
{
   float s;   // ���⠭��
   float t;   // �६�
   float v;   // ᪮����
   int min;   // �����
   int sek;   // ᥪ㭤
   float  ts; // �६� � ᥪ㭤��

   printf("���᫥��� ᪮��� ����\n");
   printf("������ ����� ���⠭樨 (���஢) -> ");
   scanf("%f", &s);
   printf("������ �६� (�����.ᥪ㭤)-> ");
   scanf("%f", &t);

   min = t;
   sek = (t - min) * 100;
   ts = min * 60 + sek;

   v = (s /1000) / (ts / 3600);

   printf("���⠭��: %4.0f �\n", s);
   printf("�६�: %i ��� %i ᥪ = %4.0f ᥪ\n", min, sek, ts);
   printf("������� %2.2f ��/��\n", v);

   printf("\n��� �����襭�� ������ <Enter>");
   getch();
}

