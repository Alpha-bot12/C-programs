//to search an input character in input string dynamically
#include<stdio.h>
#include<ctype.h>
int main() {
    char x[20],y;
    int i,f=0;
    printf("enter string");
    fgets(x,20,stdin);
    putchar(*(x+1));
    printf("Input search character");
    y=getchar();
    for (i=0;*(x+i)!='\0' ||*(x+i)!='\n';i++)
    {
                putchar(*(x+i));

        if (y==*(x+i))
        {f=1;
        putchar(y);

        break;
        }
    }
    if (f)
    printf("\nfound");
    else 
    printf("\nno");    
    return 0;
}