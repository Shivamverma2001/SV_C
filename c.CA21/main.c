#include <stdio.h>
#include <stdlib.h>

int main()
{
int a,b,space,row;
printf("enter the number of rows");
scanf("%d",&row);
for(a=row;a>0;a--)
{
    for(space=0;space<row-a;space++)
        printf(" ");
    for(b=a;b>0;b--)
        printf("* ");
    printf("\n");
}
    return 0;
}
