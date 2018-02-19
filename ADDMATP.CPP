//to find the sum of 2 input matrices dynamically
#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();
//declaring characters for x matrix, y matrix, and z matrix
char (*x)[2],(*y)[2] ,(*z)[2] ;
int i,k;
printf("\n enter x-matrix elements");
//gets input from user of x-matrix
for (i=0;i<2;i++)
 {
  for(k=0;k<2;k++)
  scanf("%d",*(x+i)+k);
  }
printf("\n enter y-matrix elements");
//gets input from user of y-matrix
for (i=0;i<2;i++)
 {
  for(k=0;k<2;k++)
  scanf("%d",*(y+i)+k);
  }
// to add 2 matrices and store in z matrix
for (i=0; i<2;i++)
{
   for (k=0;k<2;k++)
   *(*(z+i)+k)=*(*(x+i)+k)+*(*(y+i)+k);
}
//to display the sum of 2 matrices
for (i=0;i<2;i++)
{
for (k=0;k<2;k++)
printf("%d\t",*(*(z+i)+k));
printf("\n");
}
getch();
}