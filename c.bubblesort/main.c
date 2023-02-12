#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[50],n,t,i;
    printf("enter the number of elements");
    scanf("%d",&n);
    for(int i=0;i<=n-1;i++)
    {
        scanf("%d",&array[i]);
    }
    //bubble sorting
    for(int i=0;i<=n-1;i++)//i act as number of iteration and j is act as a index
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(array[j]>array[j+1])
            {
                t=array[j];
                array[j]=array[j+1];
                array[j+1]=t;
            }
        }
    }
    printf("sorted array is :\n");

    for(int i=0;i<=n-1;i++)
    {
        printf("%d\t",array[i]);
    }

    }
