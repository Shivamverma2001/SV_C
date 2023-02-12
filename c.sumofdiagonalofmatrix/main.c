#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10][10],sum=0;
    int i,j,m,n;
    printf("enter number of rows and column:");
    scanf("%d%d",&m,&n);
    printf("enter element");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i==j)
                {
                    sum=sum+a[i][j];
                }
            }
        }
        printf("sum of diagonal element =%d",sum);
}
