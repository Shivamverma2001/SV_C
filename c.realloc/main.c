#include <stdio.h>
#include <stdlib.h>

int main()
{
 int *p,n,j;
 printf("enter element number");
 scanf("%d",&n);
 printf("enter the number of elements");
 p=(int*)calloc(n,sizeof(int));//dynamic memory allocation
 if(p==NULL)
 {
     printf("memory insufficient");
 }
 else
 {
     printf("\n memory allocation\n");
     for(int i=0;i<n;i++)
     {
         scanf("%d",(p+i));
     }
       printf("elements are\n");
     for(int i=0;i<n;i++)
     {
         printf("%d\t",*(p+i));
     }
     printf("again enter exceed element number");
     scanf("%d",&j);
    realloc(p,j*sizeof(int));
    printf("memory is allocated successfully");
    for(int i=n;i<j;i++)
    {
        scanf("%d",(p+i));
    }
    printf("the elements are\n");
    for(int i=0;i<j;i++)
    {
        printf("\t%d",*(p+i));
    }
 }
}
