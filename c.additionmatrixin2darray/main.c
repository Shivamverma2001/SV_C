#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[3][3],B[3][3],C[3][3];
    printf("enter the 9 elements in A");
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
      printf("enter the 9 elements in B");
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
      for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
           C[i][j]=A[i][j]+B[i][j];
           printf("\t%d",C[i][j]);
        }
        printf("\n");
    }
}
