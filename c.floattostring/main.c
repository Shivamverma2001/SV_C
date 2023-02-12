#include <stdio.h>
#include <stdlib.h>

void ftoa(float f1,char s[])
{
    //act as buffer
    sprintf(s,"%f",f1);//s is array %f is format specifier and f1 is float variabe
}

int main()
{
    char str[20];
    float f=12.340000;
    ftoa(f,str);
    printf("\n the string value is %s",str);//convert float value to string value
    return 0;
}
