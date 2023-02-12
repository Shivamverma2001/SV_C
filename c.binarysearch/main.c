#include <stdio.h>
#include <stdlib.h>

int main()
{
      int array[100],search,n,first,last,flag=0,middle;
    printf("enter number of elements in an array");
    scanf("%d",&n);//n=5
    for(int i=0;i<=n-1;i++)//=0...4(input from user)
    {
        scanf("%d",&array[i]);
    }
    printf("enter the element which you want to search");
    scanf("%d",&search);
    first=0,last=n-1;
   while(first<first+last)
    {
        middle=(first+last)/2;
        if (search==array[middle])
        {
            flag=1;
            break;
        }
        else if(search<array[middle])
        {
            last=middle-1;
        }
        else
            {
                first =middle+1;
            }
    }
    if(flag==0)
        printf("element not found");
    else
        printf("%d value found at%d",search,middle+1);
}
