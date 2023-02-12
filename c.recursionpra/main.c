//fibnocci series by recursion
#include<stdio.h>
 int main()
 {
     int n;
     printf("enter the position");
     scanf("%d",&n);
     int res = fib(n);
     printf("your fibnocci is%d",res);
 }
int fib(int a)
{
    if(a==1)
        return 0;
    else if(a==2)
        return 1;
    else
        return(fib(a-1)+fib(a-2));
}
