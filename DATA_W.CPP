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
fpt=fopen("student.dat","w");
printf("\nEnter roll no");
scanf("%d",&student.roll);
printf("\nEnter first name");
scanf("%s",&student.fname);
printf("\n Enter last name");
scanf("%s",&student.lname);
printf("\nEnter contact");
scanf("%s",&student.cn);
fprintf(fpt,"%d",student.roll);
fprintf(fpt,"%s\n",student.fname);
fprintf(fpt,"%s\n",student.lname);
fprintf(fpt,"%s\n",student.cn);
getch();
}