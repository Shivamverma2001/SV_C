//write a program to write a first 20 prime number
#include <stdio.h>
#include <stdlib.h>

int main()
{
 int n,i=3,count,c,r=1;

while(r<=20)
{
    printf("enter the first prime number\n");
    scanf("%d",&n);
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
             printf("%d",i);
             count++;         }
     }
     i++;
}

    return 0;
}
