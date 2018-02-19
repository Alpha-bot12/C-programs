#include <stdio.h>
#include <conio.h>

void main()
{
clrscr();
int n,on,rn=0,rem;
printf("Enter a number:-  ");
scanf("%d",&n);
on=n;
while(n!=0)
{
rem=n%10;
rn=rn*10+rem;
n=n/10;
}
if (on==n)
printf("%d is palindrome",on);
else
{
printf("%d is not palindrome.",on);
}
getch();
}

