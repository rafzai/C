// ������ ���� � 㯮�冷祭��� ���ᨢ�
#include <stdio.h>
#include <conio.h>
#define SZ 10     // ࠧ��� ���ᨢ�
void main()
{
    int a[SZ]; // ���ᨢ 楫��
    int obr;   // ��ࠧ�� ��� ���᪠
    int ok;    // 1 - ���ᨢ 㯮�冷祭

    int verh,niz;  // �࠭��� ��� ���ᨢ�, � ���ன
                   // �믮������ ����
    int sred;      // ������ �।���� ����� � ������ ���᪠
    int found;     // 1 - ���� �ᯥ襭
    int n;         // ���稪 �ࠢ����� � ��ࠧ殬
    int i;

    // ���� ���ᨢ�
    printf("*** ������ ���� � 㯮�冷祭��� ���ᨢ� ***\n");
    printf("������ ���ᨢ (� ����� ��ப� %i ", SZ);
    printf("楫�� �ᥫ) � ������ <Enter>\n");
    printf("-> ");
    for (i = 0; i < SZ; i++)
        scanf("%i", &a[i]);

    // �஢�ਬ, 㯮�冷祭 �� ���ᨢ �� �����⠭��
    ok = 1; // ����� ���ᨢ 㯮�冷祭
    i = 0;
    do
        if (a[i] <= a[i+1])
            i++;
        else ok = 0;
    while (ok && i < SZ -1);

    if ( !ok) {
        puts("�������� ���ᨢ �� ����");
        puts("㯮�冷祭�� �� �����⠭��\n");
        goto bye;
    }

    printf("������ ��ࠧ�� ��� ���᪠ (楫�� �᫮) -> ");
    scanf("%i", &obr);

    // ������ ����
    verh = 0;
    niz = SZ - 1;
    found = 0;
    n = 0;
    do {
        sred = (niz-verh) / 2 + verh; // ����� ���ᨢ �������
        n++;
        if (a[sred] == obr)
           found = 1;
        else
           // � ����� ���, � ���孥� ��� � ������,
           // ����� ��室����� �᪮�� �����?
        if ( obr < a[sred])
            niz = sred-1;      // � ���孥�
        else verh = sred+1;   // � ������
    } while (verh <= niz && !found);
    if (found) {
        printf("���������� � ����⮬ ����� %i ", sred);
        printf("�믮����� %i �ࠢ�����" , n);
    }
    else
        printf("��ࠧ�� � ���ᨢ� �� ������\n");
bye:
    printf("\n��� �����襭�� ࠡ��� ������ <Enter>");
    getch(); 
}

