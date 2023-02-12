#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *p;
  {
      int a=7;
      p=&a;
      printf("%d\n",*p);//7
      printf("address stored in pointer %p\n",p);
      printf("address stored in variable %p\n",&a);
  }
     printf("dereferencing of pointer %d\n",*p);
      printf("address stored in pointer %p\n",p);//dangling pointer
}
