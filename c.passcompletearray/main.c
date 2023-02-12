//pass complete array to a function(call by reference)
#include <stdio.h>
#include <stdlib.h>

void display(int age[])
{
   for(int i=0;i<=4;i++)
   {
       printf("\n%d",age[i]);
   }
}
int main()
{
    int array[5]={2,3,4,5,6};
    display(array);
}
