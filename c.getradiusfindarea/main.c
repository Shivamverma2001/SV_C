#include <stdio.h>

int main()
{
    int r;
    printf("Please enter radius");
    scanf(" %d",& r);
   float area= r*r*3.14;
   float cir=2*3.14*r;
    printf("The area is %f", area);
    printf("The circumference is %f", cir);
    return 0;
}
