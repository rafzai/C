// Выводит разноцветный текст
#include <conio.h>
void main()
{
   clrscr();
   textcolor(RED);
   cprintf("Каждый \n\r");
   textcolor(LIGHTRED); // оранжевый заменим алым
   cprintf("охотник \n\r");
   textcolor(YELLOW);
   cprintf("желает \n\r");
   textcolor(GREEN);
   cprintf("знать \n\r");
   textcolor(LIGHTBLUE);
   cprintf("где \n\r");
   textcolor(BLUE);
   cprintf("сидят \n\r");
   textcolor(MAGENTA);
   cprintf("фазаны!\n\r");
   textcolor(LIGHTGRAY);
   cprintf("\nДля завершения нажмите <Enter>");
   getch();
}
