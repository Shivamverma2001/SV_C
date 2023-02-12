#include <stdio.h>
#include <stdlib.h>

int main()
{
 int *p,n;
 printf("enter the number of elements");
 scanf("%d",&n);//n=5
 p=(int*)malloc(n*sizeof(int));//dynamic memory allocation
 if(p==NULL)
 {
     printf("memory insufficient");
 }
 else
 {
     printf("memory allocation");
     for(int i=0;i<n;i++)
     {
         scanf("%d",(p+i));
     }
       printf("elements are\n");
     for(int i=0;i<n;i++)
     {
         printf("%d\t",*(p+i));
     }
 }
}
