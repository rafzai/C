// ������ ���㫥��� ����⮢ ���ᨢ�
// (����� � ����⠬ �� ������)
#include <stdio.h>
#include <conio.h>

#define SIZE 5 // ࠧ��� ���ᨢ�
void main()
{
    int a[SIZE];  //���ᨢ
    int n = 0;    // ���-�� ���㫥��� �-⮢
    int i;        // ������

    printf("\n������ ���ᨢ 楫�� �ᥫ.\n");
    printf("��᫥ ����� ������� �᫠ ");
    printf("�������� <Enter>\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("a[%i] ->",i+1);
        scanf("%i", &a[i]);
        if (a[i] != 0)  n++;
    }
    printf("� ���ᨢ� %i ���㫥��� �����.\n", n);
    printf("\n��� �����襭�� ������ <Enter>");
    getch();
}

