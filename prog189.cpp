// ��������� ��ப� �� �����ப�
#include "stdafx.h"
#include "string.h"
#include "stdio.h"
#include "conio.h"

void main()
{
    char full[80]; // ��室��� ��ப�
    
    char first[80]; // ���
    char mid[80];   // ����⢮
    char last[80];  // 䠬����
    
    char* p1; // 㪠��⥫� �� ᨬ��� ��室��� ��ப�
    char* p2; // 㪠��⥫� �� ᨬ��� �ନ�㥬�� ��ப�
    
    printf("������ ��� (��� ����⢮ 䠬����) ->");
    gets(full);

    p1 = full;

    // ������� ���
    p2 = first;
    *p2 = '\0';
    while ( (*p1 != ' ') && ( *p1 != NULL ) )
    {
        *p2 = *p1;
        p1++;
        p2++;
    }
    *p2 = '\0';    
    
    // ������� ����⢮ 
    p2 = mid;
    *p2 = '\0';
    if ( *p1 == ' ')
    {
        p1++;    
        while ( (*p1 != ' ') && ( *p1 != NULL ) )
        {
            *p2 = *p1;
            p1++;
            p2++;
        }
        *p2 = '\0';    
    }
    
    // ������� 䠬����
    p2 = last;
    *p2 = '\0';
    if ( *p1 == ' ')
    {
        p1++;    
        while ( (*p1 != ' ') && ( *p1 != NULL ) )
        {
            *p2 = *p1;
            p1++;
            p2++;
        }
        *p2 = '\0';    
    }

    // �஢����, ᪮�쪮 �����ப 㤠���� �������
    // �� ��ப�. �᫨ ���, � ���� �����ப�
    // �� 䠬����, � �� ����⢮

    if ( *last == '\0' )
    {
        strcpy(last,mid);
        *mid = '\0';
    }

    printf("\n���:%s",first);
    printf("\n����⢮:%s",mid);
    printf("\n�������:%s",last);

    printf("\n��� �����襭�� ������ <Enter>");
    getch();
}

