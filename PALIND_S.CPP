#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
clrscr();
char s[30],os[30]={'\0'};
printf("\nEnter a string.- ");
gets(s);
int i, l=0,flag=0;
for (i=0;s[i]!='\0'  ;i++)        /*to count no of characters in input string*/
{
l++;
}
printf("\n\nThe number of characters inputed is %d \n\n\n",l);

for (i=l-1; i>=0; i--)
{
os[l-i-1]=s[i];
}

for (flag=1, i=0;i<l;i++)
{
if (os[i]!=s[i])
flag=0;
}
if (flag==1)
printf("%s is palindrome.",s)     ;
else
{
printf("not");
}
getch();
}
