//factorial by using recursion
#include <stdio.h>
#include <stdlib.h>

int factorial(int a)
{
     a;
    if(a==0||a==1)
        return 1;
    else
        return(a=a*factorial(a-1));
}
int main()
{
    int a;
    printf("enter a number which you want for factorial");
    scanf("%d",&a);
    int b=factorial(a);
    printf("%d",b);
}
