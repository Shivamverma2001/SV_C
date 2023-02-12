#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n, reverse=0,rem;
  int *pn,*prn,*pr;
  pn=&n;
  prn=&reverse;
  pr=&rem;
  printf("enter an integer");
  scanf("%d",pn);
  while(*pn!=0)
  {
      *pr=*pn%10;
      *prn=*prn*10+*pr;
      *pn=*pn/10;
  }
  printf("reverse number =%d",*prn);
}
