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
    s2=s1;//copy
    //particular thing
    //s2.roll=s1.roll    copy roll number
    printf("\n your name is %s",s2.name);
     printf("\n your roll number is %d",s2.roll);
 printf("\n your name is %f",s2.marks);
}
