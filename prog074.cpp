// �८�ࠧ������ ����稭�, ��ࠦ����� � ������,
// � ���祭��, ��ࠦ����� � ��� � ������
#include <stdio.h>
#include <conio.h>
void main()
{
  int min; // ���ࢠ� � ������
  int h;   // ������⢮ �ᮢ
  int m;   // ������⢮ �����

  printf("������ �६����� ���ࢠ� (� ������) -> ");
  scanf("%i",&min);
  h = (int)min /  60;
  m = min % 60;
  printf("%i ���. - �� %i ��.%i ���.\n", min, h, m);

  printf("\n��� �����襭�� ������ <Enter>");
    getch();
}

