// ������ ���祭�� �㭪樨
#include <stdio.h>
#include <conio.h>

void main()
{
    float x,y;  // ��㬥�� � ���祭�� �㭪樨

    float x1,x2,dx; // �������� � 蠣 ��������� ��㬥�� 


    printf("x1 -> ");
    scanf("%f",&x1);
    printf("x2 -> ");
    scanf("%f",&x2);
    printf("dx -> ");
    scanf("%f",&dx);

    x = x1; 	
    printf("------------------\n");
    printf("   x    |   y\n");
    printf("------------------\n");
    do 
       {
         y = -2.4*x*x+5*x-3;
         printf("%6.2f  | %6.2f\n" ,x ,y);
         x += dx;
        }
    while ( x <= x2 );

    printf("------------------\n");

    printf("\n��� �����襭�� ������ <Enter>");
    getch();
}

