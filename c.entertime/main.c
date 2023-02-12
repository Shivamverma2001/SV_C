#include <stdio.h>
#include <stdlib.h>

int main()
{
 float t,min,sec;
 printf("please enter time in hours");
 scanf("%f",&t);
 min= t*60;
 sec= min*60;
 printf("your time in minutes is%f\n",min);
 printf("your time in sec is%f",sec);
    return 0;
}
