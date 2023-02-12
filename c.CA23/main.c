#include <stdio.h>
#include <stdlib.h>

void y();
int main()
{
    int i;
    for(i=1;i<=2;i++)
    {

        y();
    }
    return 0;
}
void y()
{
    static int a=0;
    auto int i=0;
    a++;
    i++;
    printf("%d",a+i);
}
