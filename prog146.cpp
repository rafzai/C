// ������ ��ॢ��� ⥬������� �� �ࠤ�ᮢ ������
// � �ࠤ��� ��७����
#include "stdio.h"
#include "conio.h"
void main()
{
  float t1,t2,dt;
  float c,f;
  
  printf("\n��ॢ�� ⥬������� �� �ࠤ�ᮢ ������");
  printf("\n� �ࠤ��� ��७����\n");

  printf("t1->");
  scanf("%f",&t1);

  printf("t2->");
  scanf("%f",&t2);

  printf("dt->");
  scanf("%f",&dt);
  
  printf("\n---------------------\n");
  printf("\n  C      F\n");
  printf("\n---------------------\n");
 
  c = t1;
  do 
  {
    f = (float)9/5 * c + 32;
    printf("%5.2f  %5.2f\n", c,f);    
    c = c + dt;
  }
  while ( c <= t2);

  printf("\n---------------------\n");

  printf("\n��� �����襭�� ������ <Enter>");

  getch();
}

