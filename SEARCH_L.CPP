#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
void main()
{
clrscr();
int a=0;
char x[8][20]={{"Nuwakot"},{"Kavre"},{"Kathmandu"},{"Lalitpur"},{"Bhaktapur"},{"Sindupalchwok"},{"Rasuwa"},{"Dhading"}};
char v ,y[20];
int i,k;
v=tolower(getch());
printf("%c",v);
for (i=0;i<8;i++)
 { if(strcmpi(x[i],y)==0)
    {a=1;
    break; }
 }
if (a)
printf("\n found in bagmati zone");
else
printf("\n Not found in bagmati zone");
getch();
}

