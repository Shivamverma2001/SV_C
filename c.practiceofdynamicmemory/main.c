//take an input from the user and store them in an array.Identify the even element and display
//them(access this access using pointer)(memory allocation should be done dynamically, after usage deallocate the memory space also)
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p,renum,n;
    printf("enter element number");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    if(p==NULL)
    {
        printf("No space");
    }
    else
        {
            printf("allocated successfully\n");
            printf("enter number now\n");
            for(int i=0;i<n;i++)
            {
                scanf("%d",(p+i));
            }
            printf("Numbers you are entered \n");
            for(int i=0;i<n;i++)
            {
                printf("%d",p[i]);//*(p+i)
            }}
            printf("\n even number are \n");
            for(int i=0;i<n;i++)
            { if(p[i]%2==0)
                printf("%d\n",p[i]);
            }

    free(p);
    printf("deallocated successfully");

}


