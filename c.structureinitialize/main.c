#include <stdio.h>
#include <stdlib.h>

struct student
{
        char name[30];
        int roll;
        float marks;
    };


int main()
{
    struct student s1={"Pooja",1,43.5};
    struct student s2={"Shivam",2,78.9};
    printf("\nThe name of first student is%s",s1.name);
    printf("\nThe roll number is %d",s1.roll);
    printf("\nThe marks is %f",s1.marks);
    printf("\nThe name of second student is%s",s2.name);
    printf("\nThe roll number is %d",s2.roll);
    printf("\nThe marks is %f",s2.marks);
}
