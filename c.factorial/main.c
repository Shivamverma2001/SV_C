#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a,b=1;
  printf("please enter a value to find factorial ");
  scanf("%d",&a);
  if(a==0)
    printf("your factorial is 1");
  else{
        while(a>0)
  {
      b=a*b;
      a--;
  }
  printf("your factorial is %d",b);
  }
    return 0;
}
