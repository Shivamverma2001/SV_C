#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10][10],b[10][10],r1,r2,c1,c2,i,j,k,result[i][j];
    printf("enter rows and columns of A matrix");
    scanf("%d%d",&r1,&c1);
     printf("enter rows and columns of B matrix");
    scanf("%d%d",&r2,&c2);
    //column of A matrix should be equal to column of B matrix
    while(c1!=r2)
    {
        printf("Error! No. of columns of A matrix not equal to No. of rows of B matrix \n\n");
        printf("enter rows and columns for A matrix");
        scanf("%d%d",&r1,&c1);
        printf("enter rows and columns for B matrix");
        scanf("%d%d",&r2,&c2);
    }
    //storing element of A matrix
     printf("\n enter element of A matrix");
   for(i=0;i<r1;i++)
   {
       for(j=0;j<c1;j++)
       {
           scanf("%d",&a[i][j]);
       }
   }
     //storing element of B matrix
     printf("\n enter element of B matrix");
   for(i=0;i<r2;i++)
   {
       for(j=0;j<c2;j++)
       {
           scanf("%d",&b[i][j]);
       }
   }
   // initializing all element of result matrix to 0
for(i=0;i<r1;i++)
   {
       for(j=0;j<c1;j++)
       {
           result[i][j]=0;
       }
   }

   //multiply matrices A and B
   // storing result in result matrix
   for(i=0;i<r1;i++)
   {
       for(j=0;j<c2;j++)
       {
           for(k=0;k<c1;k++)
           {
               result[i][j]=a[i][k]*b[k][j];
           }
       }
   }
   //display the result
   printf("\n Output matrix:\n");
   for(i=0;i<r1;i++)
   {
       for(j=0;j<c2;j++)
       {
           printf("%d\t",result[i][j]);
       }
       printf("\n");
   }
}
