// �८�ࠧ������ �ய���� �㪢 � �����
#include <stdio.h>
#include <conio.h>
void main()
{
    unsigned char st[80];  // ��ப� ⥪��
    int i;                 // ����� ��ࠡ��뢠����� ᨬ����

    printf("\n������ ��ப� ⥪�� � ������ <Enter>");
    printf("->");
    gets(st);
    i = 0;
    while ( st[i] )
    {
      if ((st[i] >= 'a' && st[i] <= 'z') ||
      (st[i] >= '�' && st[i] <= '�'))
        st[i] -= 32;
      else if (st[i] >= '�' && st[i] <= '�')
         st[i] -= 80;
      i++;
    }
    printf("\n%s\n", st);

    printf("\n��� �����襭�� ������ <Enter>");
    getch();
}

