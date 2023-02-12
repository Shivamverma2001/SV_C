//Write a program to show the use of operator
#include<stdio.h>
int main()
{
    int a,b,result;
    printf("enter two integer number");
    scanf("%d%d",&a,&b);
    result=a-b;
    printf("the sub of two number=%d\n",result);
    result=a/b;
    printf("the div of two number=%d\n",result);
    result=a*b;
    printf("the mult of two number=%d\n",result);
    result=a%b;
    printf("the mod of two number=%d\n",result);
    return 0;
}
