#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[10][10],transpose[10][10],r,c,i,j;
   printf("enter rows and columns of matrix");
   scanf("%d%d",&r,&c);
   //sorting elements for matrix
   printf("\n enter element of matrix");
   for(i=0;i<r;i++)
   {
       for(j=0;j<c;j++)
       {
           scanf("%d",&a[i][j]);
       }
   }
   //display the matrix  [][]
     printf("\n entered matrix:\n");
     for(i=0;i<r;i++)
     {
         for(j=0;j<c;j++)
         {
             printf("%d\t",a[i][j]);
         }
         printf("\n");
     }
     //finding the transpose of a matrix
     for(i=0;i<c;i++)
     {
         for(j=0;j<r;j++)
         {
             transpose[i][j]=a[j][i];
         }
         }
         //display transpose of a matrix
         printf("\n transpose of matrix:\n");
         for(i=0;i<c;i++)
         {
             for(j=0;j<r;j++)
             {
                 printf("%d",transpose[i][j]);
                     printf("\t");

             }
             printf("\n");
         }


       return 0;
   }

