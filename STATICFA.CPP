#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int x;
long int f,fact(int i);
printf("\nENter a no");
scanf("%d",&x);
for (int i=1; i<=x;i++)
f=fact(i);
printf("%ld",f);
getch();
}
long int fact(int i)
{
static int f=1;
f*=i;
return(f);
}

