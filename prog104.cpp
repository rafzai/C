// ���᫥��� ���� ᫥���饣� ���
#include <stdio.h>
#include <conio.h>
void main()
{
    int day;
    int month;
    int year;
    int last;   // 1, �᫨ ⥪�騩 ���� ��᫥���� ���� �����
    int r;      // �᫨ ��� ��᮪���, � ���⮪ ��
                // ������� year �� 4 ࠢ�� ���

    printf("������ � ����� ��ப� (��ࠬ�) ");
    printf("ᥣ������� ����\n");
    printf("(�᫮ ����� ���) -> ");
    scanf("%i%i%i", &day, &month, &year);
    last = 0;
    if (month == 2) {
         if ((year % 4) != 0 && day == 28) last = 1;
         if ((year % 4) == 0 && day == 29) last = 1;
    }
    else if ((month == 4 || month == 6 ||
              month == 9 || month == 11)
                  && (day == 31))
         last = 1;
      else if (day == 31)
            last = 1;

    if (last == 1) {
      printf("��᫥���� ���� �����!\n");
      day = 1;
      if (month == 12) {
         month = 1;
         year++;
         printf("� ����㯠�騬 ���� �����!\n");
      }
      else month++;
     }
     else day++;
     printf("����� %i %i %i",day,month,year);

     printf("\n��� �����襭�� ������ <Enter>");
     getch();
}

