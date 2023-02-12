#include <stdio.h>
#include <stdlib.h>
//%6f means print as floating point, at least 6 character wide
//%.2f means print as floating point, 2 character after decimal point
//%6.2f means print as floating point,at least 6 character and 2 decimal point

int main()
{
    float low,high,fah;
    fah=0;
    high=300;
    while(fah<=300)
    {
        float cel=5*(fah-32)/9;
        printf("%6.2f \t%6.2f\n",fah,cel);
        fah=fah+20;
    }

}
