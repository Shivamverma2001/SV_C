#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[20];
    int roll;
    float marks;
}s1,s2;
int main()
{
    printf("\n enter your name");
    scanf("%s",&s1.name);
    printf("\n enter your rollnumber");
    scanf("%d",&s1.roll);
    printf("\n enter your marks");
    scanf("%f",&s1.marks);
       printf("\n enter marks of 2nd student");
    scanf("%f",&s2.marks);
    if(s1.marks>s2.marks)
        printf("1st student is intelligent");
    else
        printf("2nd student is intelligent");
}
