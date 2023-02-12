//addition of 2 number using function
#include<stdio.h>
int addition(int a,int b);//fnc declaration
int main()
{
    int result,a,b;
    printf("the addition of numbers");
    scanf("%d%d",&a,&b);
    result=addition(a,b);//calling
    printf("result=%d", result);
}
int addition(int a, int b)//fnc defination
{
    int c;
     c=a+b;
    return c;
}
