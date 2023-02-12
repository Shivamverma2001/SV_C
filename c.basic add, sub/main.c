#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=4, y=5,z,result;
    result=x+y;
    printf("the sum of two values %d \n",result);
       result=x-y;
    printf("the sub of two values %d \n",result);

       result=x*y;
    printf("the mul of two values %d \n",result);

       result=x%y;
    printf("the mod of two values %d \n",result);
    z=++x;
    printf("the value of z %d,%d \n",z &x);
        z=x++;
    printf("the value of z %d, %d\n",z &x);
    return 0;
}
