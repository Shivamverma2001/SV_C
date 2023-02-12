//
#include<stdio.h>
int main()
{
    int attend,marks ;
    printf("enter attend and marks");
    scanf("%d",&attend);

    scanf("%d",&marks);
    (attend<75||marks <40)?printf("student is detained"):printf("congratulation");
    return 0;
}
