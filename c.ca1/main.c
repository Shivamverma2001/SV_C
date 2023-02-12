#include <stdio.h>
#include <stdlib.h>

int main()
{
   float mathno;
   printf("enter your marks and name");
   scanf("%f",&mathno);
  float marks=mathno/100;
   if(marks>=0.80)
    printf("your grade is A");
   else if(marks>=0.60&&marks<0.80)
    printf("your grade is B");
   else if(marks>=0.40&&marks<0.60)
    printf("your grade is C");
   else if(marks<0.40)
    printf("you have no grade");
   return 0;
}
