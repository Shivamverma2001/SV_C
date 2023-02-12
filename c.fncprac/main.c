// call by value.default method
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a=10,b=20;
   printf("value of a=%d,b=%d",a,b);//a=10,b=20
   swap(a,b);//calling
   printf("in main function value of a=%d,b=%d",a,b);

}
void swap(int a,int b)//defination a,b are formal parameters
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("in swap function value of a=%d,b=%d",a,b);
}
