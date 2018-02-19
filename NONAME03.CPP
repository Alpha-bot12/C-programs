//to find product of 2 input matrixes dynamically
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
char (*x)[3],(*y)[2],(*z)[2] ;
int i,k;
printf("\n enter for x-matrix");
for (i=0;i<2;i++)
{
	for (k=0;k<3;k++)
	scanf("%d",*(x+i)+k);
}
printf("\n enter for y-matrix");
for (i=0;i<3;i++)
{
	for (k=0;k<2;k++)
	scanf("%d",*(y+i)+k);
}
for (i=0;i<2;i++)
{
	for (k=0;k<2;k++)
	{
	*(*(z+i)+k)=0;
	for (int m=0;m<3;m++)
	*(*(z+i)+k) += (*(*(x+i)+m))*(*(*(y+m)+k));
	}
}
for (i=0;i<2;i++)
{
for (k=0;k<2;k++)
printf("%d\t",*(*(x+i)+k));
printf("\n");
}
getch();
}
