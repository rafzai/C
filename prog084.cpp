// ��ॢ�� �६��� �� ����� � ᥪ㭤 � ᥪ㭤�
#include <stdio.h>
#include <conio.h>
void main()
{
   float t;     // �६� � ������ � ᥪ㭤��, ���ਬ�� 1.25
   int ts;      // �६� � ᥪ㭤��
   int min;     // �᫮ �����
   int sek;     // �᫮ ᥪ㭤

   printf("������ �६� (�����.ᥪ㭤) -> ");
   scanf("%f", &t);
   min = t;  // t ⨯� float, ���⮬� ���-�� ᥪ㭤 "�ᥪ�����"
   sek = (t - min) * 100;
   if (sek > 60)
    {
      printf("�訡��!");
      printf("��᫮ ᥪ㭤 �� ����� ���� ����� 60");
    } 
   else
    {
      ts = min * 60 + sek;
      printf("%i ��� %i ᥪ = %i ᥪ", min, sek, ts);
    }
   printf("\n��� �����襭�� ������ <Enter>");
   getch();
}

