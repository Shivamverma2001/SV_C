#include <stdio.h>
#include <stdlib.h>

void y();
extern c=0;
int main()
{
    int i;
    for(i=0;i<=2;i++)
    {

        y();
    }
    return 0;
}
void y()
{

    auto int j=0;
     static int a=0;
    register b=0;
    b++;
    c++;
    a++;
    j++;
    printf("i%d\n",j);
    printf("a%d\n",a);
    printf("b%d\n",b);
    printf("c%d\n",c);
}
