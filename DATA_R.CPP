#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
struct record
{
 int  roll;
 char fname[20];
 char lname[20];
 char cn[10];
};
struct record student;
FILE *fpt;
fpt=fopen("student.dat","r");
fscanf(fpt,"%d",&student.roll);
fscanf(fpt,"%s\n",&student.fname);
fscanf(fpt,"%s\n",&student.lname);
fscanf(fpt,"%s\n",&student.cn);
printf("\n%d",student.roll);
printf("\n%s",student.fname);
printf("\n%s",student.lname);
printf("\n%s",student.cn);
getch();
}