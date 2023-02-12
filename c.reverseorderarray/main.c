#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,array[50];
    printf("enter the digit number you required");
    scanf("%d",&n);
    printf("enter the digits");
    for(int i=0;i<=n-1;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("your reverse number is");
    for(int i=n-1;i>=0;i--)
    {
        printf("%d",array[i]);
    }
    }
