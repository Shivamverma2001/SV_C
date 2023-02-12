//write  a program to print the area of a triangle(using call by reference method)
#include <stdio.h>
#include <stdlib.h>
float  area(float *b,float *h)
{
    return (0.5**b**h);
}
int main()
{
   float base, height;
   printf("enter the base");
   scanf("%f",&base);
   printf("enter height ");
   scanf("%f",&height);
   float t=area(&base,&height);
   printf("the area is%f",t);
}
