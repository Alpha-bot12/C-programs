#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
clrscr();
char x[30];
int vow=0,con=0,dig=0,ws=0,sp=0;
void count (char x[],int *vow,int *con,int *dig,int *ws,int *sp);
printf("enter a string");
gets(x);
count (x,&vow,&con,&dig,&ws,&sp);
printf("vow=%d\n con=%d\n dig=%d\n ws=%d\n sp=%d\n",vow,con,dig,ws,sp);
getch();
}
void count (char x[],int *vow,int *con,int *dig,int *ws,int *sp)
{
char y;
int i=0;
  for (i=0; x[i]!='\n';i++)
  {
  y=toupper(x[i]);
  if (y=='A'|| y=='E'||y=='I'||  y=='O'||y=='U')
  ++ *vow;
else if (y>'A' && y<='Z')
++*con;
else if(y>='0' && y<='9')
++*dig;
else if(y==' ' || y=='\n')
++*ws;
else
++*sp;
   }
}
