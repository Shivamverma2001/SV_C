#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,n,fact=1;
   int *pn,*pfact;
   pn=&n;
   pfact=&fact;
   printf("\n enter number ");
   scanf("%d",pn);
   for(i=1;i<=*pn;i++)
   {
       *pfact=*pfact*i;
   }
   printf("\n factorial of number is %d",*pfact);
}
