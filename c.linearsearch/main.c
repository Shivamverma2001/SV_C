#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[50],search,n,i;
    printf("enter number of elements in an array");
    scanf("%d",&n);//n=5
    for(int i=0;i<=n-1;i++)//=0...4(input from user)
    {
        scanf("%d",&array[i]);
    }
    printf("enter the element which you want to search");
    scanf("%d",&search);//search 7
    for(int i=0;i<=n-1;i++)
        //linear search
    {
        if(array[i]==search)
        {
            printf("%d is present at %d",search,i+1);
            break;
        }
    }
    if(i==n)
        printf("element is not present in an array");
}
