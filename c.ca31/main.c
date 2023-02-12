#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[3][3],sr=0,sc=0;
    printf("Enter the elements of the matrix");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
    printf("sum of rows are");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
    {
    sr=sr+array[i][j];
        }
        printf("\n sum of row is%d",sr);
        sr=0;
    }
        for(int j=0;j<3;j++)
    {
        for(int i=0;i<3;i++)
    {
    sc=sc+array[i][j];
        }
        printf("\n sum of column is%d",sc);
        sc=0;
    }
}
