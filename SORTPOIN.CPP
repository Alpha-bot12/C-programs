//sort the n input integers in ascending order dynamically
#include<stdio.h>
#include<malloc.h>
#include<conio.h>
void main()
{
clrscr();
int *x,n,i,temp=0,k;
// asks how many no's user wants to input
printf("\n how many no");
// gets input from user
scanf("%d",&n);
//declares the size of x according to no inputed
x=(int*)malloc(n*sizeof(int));
//asks to input those nos to be sorted
printf("\n input %d nos",n);
//get input of no from user and stored in a 1D pointer
for (i=0;i<n;i++)
scanf("%d",(x+i));
//to sort and arrange no in ascending order
for (i=0;i<n-1;i++)
{
  for (k=i+1;k<n;k++)
  {
     if (*(x+i)>*(x+k))
     {temp=*(x+i);
     *(x+i)=*(x+k);
     *(x+k)=temp;
	}
    }
}
//display the sorted no
for (i=0;i<n;i++)
printf("\n %d",*(x+i));
getch();
}