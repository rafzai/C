// ���� � ���ᨢ� ��⮤�� ��ॡ�� ����⮢
#include <stdio.h>
#include <conio.h>
#define HB 5
void main()
{
    int m[HB];  // ���ᨢ 楫��
    int obr;    // ��ࠧ�� ��� ���᪠
    int found;  // �ਧ��� ᮢ������� � ��ࠧ殬
    int i;

    printf("\n���� � ���ᨢ� ��⮤�� ��ॡ��\n");
    printf("������ � ����� ��ப� %i 楫��\n", HB);
    printf("�ᥫ � ������ <Enter>\n");
    printf("->");
    for (i = 0; i < HB; i++)
        scanf("%i", &m[i]);
    printf("������ ��ࠧ�� ��� ���᪠ (楫�� �᫮)->");
    scanf("%i", &obr);

    // ���� ����� ��ॡ�஬
    found = 0;
    i = 0;    // �஢��塞 � ��ࢮ�� ����� ���ᨢ�
    do {
        if (m[i] == obr )
            found = 1;   // ᮢ������� � ��ࠧ殬
        else i++;        // ���室 � ᫥���饬� ������
    } while (!found && i < HB);
    if ( found )
         printf("���������� � ����⮬ ����� %i", i+1);
    else
         printf("���������� � ��ࠧ殬 ���");

    printf("\n��� �����襭�� ࠡ��� ������ <Enter>");
    getch();
}

