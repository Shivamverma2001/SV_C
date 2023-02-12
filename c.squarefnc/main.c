//square of a number using function
#include<stdio.h>
int square(int a);//fnc declaration
int main()
{
    int result,t;
    printf("the square of numbers");//fnc calling
    printf("enter the number");
    scanf("%d",&t);
    result=square(t);//calling
    printf("result=%d", result);
}
int square(int a)//fnc defination
{
    int c;
     c=a*a;
    return c;
}
