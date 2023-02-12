#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,s;
    printf("Enter the number of lines in which you want to draw a triangle");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int k=n-i;k>=0;k--)
         {
             printf(" ");
         }

        for(int j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }

}
