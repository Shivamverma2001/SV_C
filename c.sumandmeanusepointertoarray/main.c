#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10];
    int sum=0,n;
    float mean=0.0;
   int *pa=a[0];
  int  *ps=&sum;
    float *pm=&pm;
    printf("enter the number of elements");
    scanf("%d",&n);
    printf("enter the marks one by one");
    for(int i=0;i<n;i++)
   {

   scanf("%d",(pa+i));
    *ps=*ps+*(pa+i);

   }
   *pm=*ps/n;
   printf("the element inserted in an array are\n");
   for(int i=0;i<n;i++)
   {
       printf("%d",*(pa+i));
   }

        printf("sum of marks is%d\n",*ps);
 printf("mean of marks is%f",*pm);

}
