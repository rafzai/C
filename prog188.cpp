// �������� ��砫��� �஡���� �� ��ப�
#include <stdio.h>
#include <conio.h>
#include "string.h"
void main()
{
     unsigned char sst[80];  // ��ப�
     unsigned char dst[80];  // ����
     int i,j;

     printf("�������� ��砫��� �஡����\n");
     printf("������ ��ப�:");

     i=0;
     while ((sst[i] = getch()) != 13)
         putch(sst[i++]);
     sst[i] = '\0';

     i = 0; j = 0;
     // ������ ���� ᨬ���, �⫨�� �� �஡���
     while( sst[i] && sst[i] == ' ')
         i++;

     // ����� i - ����� ��ࢮ�� ᨬ����, �⫨筮�� �� �஡���
     // ᪮���㥬 sst � dst
     while (sst[i])
         dst[j++] = sst[i++];
     dst[j] = '\0';

     printf("\n��ப� ��� ��砫��� �஡����:%s\n",dst);

     printf("\n��� �����襭�� ������ <Enter>");
     getch();
}

