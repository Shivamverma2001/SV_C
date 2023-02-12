//Write a program to ask user to enter the age. If the age of the person is greater than equal to 18 then print on the screen that the candidate is eligibe to cast vote otherwise not show.
#include<stdio.h>
int main()
{
    int age;
    printf("enter age");
    scanf("%d",&age);
    (age>=18)?printf("you are eligible for vote"):printf("you are not eligible for vote");
    return 0;
}
