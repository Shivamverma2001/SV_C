//Program to print the grades of student
//marks greater than equal to 90 A grade
//marks greater than equal to 80 but less then 90 then print B grade
//marks greater than equal to 70 but less then 80 then print C grade
//marks less than equal to 70 then print ADgrade
#include <stdio.h>

int main()
{
int marks;
printf("enter your marks");
scanf("%d",&marks);
if(marks>=90)
{
    printf("A grade");
}
else if(marks>=80&& marks<90)
{
    printf("B grade");
}
else if(marks>=70&& marks<80)
{
    printf("C grade");
}
else if(marks<70)
{
    printf("D grade");
}
return 0;
}
