#include <stdio.h>
#include <stdlib.h>

int main()
{
    int display[2][3];
    for(int i=0;i<=1;i++)
    {
        for(int j=0;j<=2;j++)
        {
            scanf("%d",&display[i][j]);
        }
    }
    printf("your 2d matrix is\n");
    for(int i=0;i<=1;i++)
    {
        for(int j=0;j<=2;j++)
        {
            printf("\t%d",display[i][j]);
            if(j==2)
                printf("\n");
        }
    }
}
