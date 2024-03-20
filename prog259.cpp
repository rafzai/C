// �ਢ�� ��௨�᪮��
#define u 5   // ����� ����, ��।���� ����稭� �ਢ��
#define DT 25 // ��।���� ᪮���� ����稢���� �ਢ��
#define PATHTODRIVER "c:\\borlandc\\bgi\\"

#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

// �ਢ�� ��௨�᪮�� ��⮨� �� �����
// ����⮢: a,b,c � d
// ����� ����� ��ந� ᮮ⢥������� �㭪��
void a(int i);
void b(int i);
void c(int i);
void d(int i);

// ����稢��� ����� �� ⥪�饩 �窨 � ��������
// ���न���� ���� �������� � ���饭���
#define linetodxy(dx,dy) lineto(getx()+dx,gety()+dy)

void far lineto(int x2, int y2); // ����稢��� ����� �� �窠�
// ������� �⠭������ �㭪��, �⮡�
// ������ ����� ����稢���� �ਢ�� ��௨�᪮��

// ������ �ਢ��
void a(int i)
{
    if (i > 0)
    {
        a(i-1); linetodxy(u, u);
        b(i-1); linetodxy(2*u,0);
        d(i-1); linetodxy(u, -u);
        a(i-1);
    }
}

void b(int i)
{
    if (i > 0)
    {
        b(i-1);linetodxy(-u,u);
        c(i-1);linetodxy(0, 2*u);
        a(i-1);linetodxy(u,u);
        b(i-1);
    }
}

void c(int i)
{
    if (i > 0)
    {
        c(i-1);linetodxy(-u,-u);
        d(i-1);linetodxy(-2*u,0);
        b(i-1);linetodxy(-u,u);
        c(i-1);
    }
}

void d(int i)
{
    if (i > 0)
    {
        d(i-1);linetodxy(u,-u);
        a(i-1);linetodxy(0,-2*u);
        c(i-1);linetodxy(-u,-u);
        d(i-1);
    }
}

void main(void)
{
   int gdriver = DETECT; // �ࠩ���
   int gmode;            // ०��
   int errorcode;        // ��� �訡��

   initgraph(&gdriver, &gmode, PATHTODRIVER);
   errorcode = graphresult();

   if (errorcode == grOk)
   {
      int p; // ���冷� �ਢ��
      puts("�ணࠬ�� ��ந� �ਢ�� ��௨�᪮��.");
      puts("������ ���冷� �ਢ�� (1-4) � ������ <Enter>");
        printf("->");
        scanf("%i", &p);
        printf("�ਢ�� ��௨�᪮�� %i-�� ���浪�\n", p);

        moveto(100,100);

        // �ਢ�� ��௨�᪮��
        a(p); linetodxy(u,u);
        b(p); linetodxy(-u,u);
        c(p); linetodxy(-u,-u);
        d(p); linetodxy(u,-u);

        puts("��� �����襭�� ������ <Enter>");
        getch();
        closegraph();
    }

    else
    {
      printf("�訡��: %d\n", errorcode);
      puts("��� �����襭�� ������ <Enter>");
      getch();
    }
}

// ����稢��� �� �窠� �����
// �������� �⮩ �㭪樥� �⠭������, �⮡�
// ������ ����� ����稢���� �ਢ��
#include <dos.h>

void far lineto(int x2, int y2)
{
    int x1,y1;  // ���न���� ��砫� ��אַ�, x2,y2 -  ���न���� ����
    int x,y;  // ���न���� ⥪�饩 �窨
    int dx;   // ���饭�� ��㬥��
    int dy;   // ���饭�� y �� �ᮢ���� ���⨪��쭮� �����
    int color;// 梥� �����
    int a,b;  // �����樥��� �ࠢ����� ��אַ�
    int n;    // ���-�� �祪
    int i;

    x1 = getx();
    y1 = gety();
    color = getcolor();

    if ( x1 != x2 )
    {
        // �� ���⨪��쭠� �����
        a = (y2-y1)/(x2-x1);
        b = y1- a * x1;
        n = abs(x2-x1)+1;
        if (x2 > x1)
           dx = 1;
        else
           dx = -1;

      x = x1;
      for (i = 1; i<= n; i++)
      {
        y = a*x + b;
        putpixel(x,y,color);
        delay(DT);
        x += dx;
      }
    }

    else //  ���⨪��쭠� �����
    {
       n = abs(y2-y1);
       if (y2 > y1)
          dy = 1;
       else dy = -1;

       x = x1;
       y = y1;
       for (i = 1; i<=n; i++)
       {
           putpixel(x, y, color);
           delay(DT);
           y += dy;
       }
    }
    putpixel(x2, y2, color);
    moveto(x2, y2);
}

