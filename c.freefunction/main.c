
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    int n=5;
    p=(int*)malloc(n*sizeof(int));
    if(p==NULL)
    {
        printf("memory insufficient");
    }
    else
        {
    printf("allocated successfully");
    free(p);
    printf("deallocated successfully");
    }
}
