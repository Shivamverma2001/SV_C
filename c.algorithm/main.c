//write an program to ask user to give value and then find algorithm of that value
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n=20,i=3,count,c;
   if(n>=1)
   {
       printf("first %d prime numbers are:\n",n);
       printf("2\n");
   }
   for(count=2;count<=n;)
   {
       for(c=2;c<=i-1;c++)
       {
           if(i%c==0)
               break;
       }
           if(c==i)
           {
               printf("%d\n",i);
               count++;
           }
           i++;

   }

   return 0;
}
