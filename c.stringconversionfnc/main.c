#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x[]="92.3";
    // convert string value into double value
    double d;
   d= atof(x);
    printf("string to double number %.2lf \n",d);
    //convert string value into int value
    int i;
    i=atoi(x);
    printf("string to integer number %d\n",i);
        //convert string value into long int value
    long int j;
    j=atol(x);
    printf("string to integer number %ld\n",j);
         //convert integer value into string int value
     int k=123;
    char l[100];
    itoa(k,l,2);
    printf("binary value %s\n",l);
     itoa(k,l,8);
    printf("octal value %s\n",l);
     itoa(k,l,10);
    printf("decimasl value %s\n",l);
    itoa(k,l,16);
    printf("hexadecimal  value %s\n",l);
}
