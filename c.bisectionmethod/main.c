#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define F(x) (x*x*x-9*x+1)
int main()
{
  int i=1;
  float a,b,c,f;
  printf("Enter the interval of the function F(X) of a and b");
  scanf("%f%f",&a,&b);
  do
  {
      c=(a+b)/2;
      f=F(c);
      printf("\n i=%d  a=%f  b=%f  c=%f  F(c)=%f  ",i,a,b,c,f);
      if(F(a)*F(c)<0)
      {
          b=c;
      }
      else
        {
        a=c;
        }
      i++;
  }while(fabs(F(c))>0.001);
  printf("\n\n\n approximate root=%.4f\n\n",c);
  return 0;
}
