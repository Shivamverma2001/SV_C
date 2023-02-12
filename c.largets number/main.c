#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("enter three number");
    scanf("%d%d%d",&a,&b,&c);
    if((a>b)&&(a>c))
        printf("the first number is largest %d",a);
    if((b>a)&&(b>c))
        printf("the second number is largest %d",b);
               if((c>a)&&(c>b))
        printf("the third number is largest %d",c);
    return 0;
}
