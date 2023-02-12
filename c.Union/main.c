#include <stdio.h>
#include <stdlib.h>

union student{
char name[30];// it allocates only 30 bytes storage either we write name marks or roll no
float marks;
int rollno;
};


int main()
{
    union student s1;
    printf("enter the name");
    scanf("%s",s1.name);
     //printf("Your name is %s",s1.name);
     printf("enter the marks");
    scanf("%f",&s1.marks);
    //printf("your marks is %f",s1.marks);
     printf("enter the roll number");
    scanf("%d",&s1.rollno);
   // printf("your roll number is %d",s1.rollno);
    // it show only latest value not previous such us latest value is roll number rest all are not show
    printf("Your name is %c and your marks is %f and roll number is",s1.name,s1.marks,s1.rollno);
     //solution is
     // after initialize you print them


}
