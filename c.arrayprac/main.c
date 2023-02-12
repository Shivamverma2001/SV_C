#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x[5];
   printf("enter 5 integer value");
   for(int j=0;j<=4;j++)
   {
       scanf("%d",&x[j]);
   }
   printf("the elements in an array are:");
   for(int j=0;j<=4;j++)
   {
       printf("%d",x[j]);
   }
    return 0;
}
