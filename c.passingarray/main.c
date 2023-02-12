//pass element of an array to a function
#include <stdio.h>
#include <stdlib.h>

void display(int age1,int age2)
{
    printf("%d\n",age1);//2
    printf("%d\n",age2);//6
}
int main()
{
    int array[5]={2,3,4,5,6};
    display(array[0],array[4]);
}
