#include <stdio.h>;

int main()
{
    int *ptr,a=7;
    ptr=&a;
    *ptr=*ptr-2;
    printf("%d,%d",*ptr,a);
    return 0;
}
