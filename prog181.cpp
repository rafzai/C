// �ਢ���⢨�
#include <stdio.h>
#include <conio.h>
void main()
{
    char name[15]; // ��� 
    char fam[20];  // 䠬����
    
    printf("��� ��� �����?\n");
    printf("����� ᢮� ��� � 䠬����, ��⥬ ������ <Enter>");
    printf("-> ");
    scanf("%s", &name);
    scanf("%s", &fam);
    // �㭪�� scanf �⠥� �� ���� ���������� ᨬ����
    // �� ࠧ����⥫� - �஡���
    printf("��ࠢ����, %s %s!\n", name, fam);

    printf("\n��� �����襭�� ������ <Enter>");
    getch();
}

