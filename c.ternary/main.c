//Write a program to show largest of two numbers using conditional operator
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two integer number");
    scanf("%d%d",&a,&b);
    (a>b)?printf("first number is largest"):printf("second number is largest");
    return 0;
}
