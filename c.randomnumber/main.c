#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
    int n;
    srand(time(0));
    n=rand()%100+1;//generate number between 1 to 100
    printf("Random number is %d",n);
}
