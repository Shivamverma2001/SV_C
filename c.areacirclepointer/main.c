#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0,r;
    int *pr;
    float *pa;
    pa=&a;
    pr=&r;
    printf("enter the radius of the circle");
    scanf("%d",pr);
    *pa=3.14*(*pr)*(*pr);
    printf("the area of the circle is %f",*pa);
 return 0;
}
