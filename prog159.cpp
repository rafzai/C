// ���� �������쭮�� ����� ���ᨢ�
#include <stdio.h>
#include <conio.h>
#define HB  5    // ࠧ��� ���ᨢ�
void main()
{
    int a[HB];  // ���ᨢ
    int min;    // ����� �������쭮�� �����
    int i;      // ������ ���ᨢ�

    printf("\n���� �������쭮�� ����� ���ᨢ�\n");
    printf("������ � ����� ��ப� ");
    printf("%i 楫�� �ᥫ, � ������ <Enter>\n", HB);
    printf("-> ");
    for (i = 0; i < HB; i++)
        scanf("%i",&a[i]);

    min = 0; // �।�������, �� ���� �-� ���������
    // �ࠢ��� ��⠢訥�� �-�� ���ᨢ� � ���������
    for (i = 1; i < HB; i++)
        if (a[i] < a[min])  min  =  i;

    printf("��������� ����� ���ᨢ�: a[%i]=%i ",
            min+1, a[min]);
    
    printf("\n��� �����襭�� ࠡ��� �ணࠬ�� ������ <Enter>");
    getch();
}

