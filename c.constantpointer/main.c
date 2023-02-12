#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=10,b=20;
    int *const p=&a;//constant pointer
    printf("%d",*p);
//p=&b; is not work because 1 time it declare the value
 // cant read that p=&b;//constant pointer
   //not working  printf("%d",*p);
}
