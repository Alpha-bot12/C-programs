#include <stdio.h>
#include <string.h>
#include <conio.h>
struct book
{
char title[50];
char author[50];
char subject [100];
int book_id;
};
/*function declaration to print to reduce more commands*/
void print(struct book book0 );
int main()
{
clrscr();
struct book book1;    /* Declare book1 of type book */
struct book book2;    /* Declare book2 of type book */

/* book1 specification */
strcpy (book1.title, "Sherlock Holmes");
strcpy (book1.author, "Conan Doyle");
strcpy (book1.subject, "Mystery");
book1.book_id= 12;

/* book2 specification */
strcpy (book2.title, "Secret Seven");
strcpy (book2.author, "Enid Blyton");
strcpy (book2.subject, "Mystery and Puzzle");
book2.book_id= 10;
/*to print book1 info*/
print(book1);
printf("\n");
/*to print book 2 info*/
print(book2);
getch();
return 0;
}


void print(struct book book0)
{
printf("Book title= %s\n",book0.title);
printf("Book author =%s \n",book0.author);
printf("Book subject =%s \n",book0.subject);
printf("Book id =%d \n",book0.book_id);
}
