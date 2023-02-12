#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include<conio.h>
float y(float x)
{
    return (1/(1+pow(x,2)));
}
float trapezoidal(float a,float b,float n)
{
    float h=(b-a)/n;
    float s=y(a)+y(b);
    for(int i=1;i<n;i++)
    {
        s+=2*y(a+i*h);
    }
    return (h/2)*s;
}
int main()
{
    float x0=0;
    float xn=1;
    int n=6;
    printf("value of integral is %6.4f\n",trapezoidal(x0,xn,n));
    return 0;
}
