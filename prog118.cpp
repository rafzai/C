// ������ ��ॢ��� ⥬������� �� �ࠤ�ᮢ ������
// � �ࠤ��� ��७����
#include "stdio.h"
#include "conio.h"
void main()
{
  float t1,t2,dt; // �������� � 蠣
  float c,f;      // �ࠤ��� ������ � ��७����
  int n;          // �᫮ ��ப � ⠡���

  printf("t1->");
  scanf("%f",&t1);

  printf("t2->");
  scanf("%f",&t2);

  printf("dt->");
  scanf("%f",&dt);

    n = (t2 - t1)/dt + 1;
  
  c = t1;
  
  printf("\n----------------\n");
  printf("\n  C      F\n");
  printf("\n----------------\n");
  for (int i=0; i<n; i++)
  {
    f = (float)9/5 * c + 32;
    printf("%5.2f  %5.2f\n", c,f);    
    c = c + dt;
  }
    printf("\n----------------\n");

  printf("\n��� �����襭�� ������ <Enter>\n");

  getch();
}

