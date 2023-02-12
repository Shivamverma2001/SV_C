#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[3]={3,6,7};//initialisation of array
    printf("%d\n",x[0]);
    printf("%d\n",x[1]);
    printf("%d\n",x[2]);
    printf("enter 4th number");
    scanf("%d",&x[3]);
    printf("%d",x[3]);
    return 0;
}
