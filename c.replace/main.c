#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,array[50],value,position;
    printf("enter the number of digits");
    scanf("%d",&n);
    for(int i=0;i<=n-1;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("enter the value you want to insert in an array");
    scanf("%d",&value);
    printf("enter the position you want to place the value in array");
    scanf("%d",&position);
    for(int i=n-1;i>=position-1;i--)
    {
        array[i+1]=array[i];
    }
    array[position-1]=value;
    printf("resultant array is");
    for(int i=0;i<=n;i++)
        printf("%d",array[i]);
}
