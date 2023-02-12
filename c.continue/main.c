#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int n=10;n>0;n--)
    {
        if(n%2==1)
            continue;//it give control to updation
printf("%d\t",n);
    }
    return 0;
}
