//type of operator; to convert from one datatype to another datatype
//1) implicit operator; compiler converts without any human intervention
// explicit operator; conversion done by user
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a=7,b=2;
   int d=7,e=2;
   float c,f;
   c=a/b;//7/2=3.000000
   f=(float)a/(float)b;//7.000000/2.000000=3.500000
   printf("c=%f",c);
   printf("c=%f",f);
   return 0;

}
