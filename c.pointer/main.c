#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a=7;
   int *p;//declaration
   p=&a;//initialization
   printf("the value of a=%d\n",a);
   printf("the value of pointer=%d\n",*p);
   printf("the address of a=%p\n",&a);
   printf("the address of pointer=%p",p);
}
