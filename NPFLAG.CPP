#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
clrscr();
int i,j;
textcolor(LIGHTBLUE);cprintf("11\n");
for (int k=0;k<=1;k++)
{
for (i=1,j=1;i<=5;i++)
{
textcolor (LIGHTRED);int k=11;
cprintf("\b\b\b\b\b%d",j);
j=j*10+1;textcolor(LIGHTBLUE);
cprintf("%d\b\b\b\b\n",k);
}
}
textcolor(LIGHTBLUE);
cprintf("\b\b\b\b11111111");
getch();
}