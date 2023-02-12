#include <stdio.h>
#include <stdlib.h>
//void pointer
//* is dereferencing operator to jump from other data type address
int main()
{
   int a=7;
   char b='a';
   void *p;//declare (void pointer)
   p=&a;
   printf("the dereferencing of the pointer %d\n",*(int*)p);
   p=&b;
   printf("the dereferencing of the pointer %c",*(char*)p);
}
