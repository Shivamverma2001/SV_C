#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>


int main()
{
    char s[]="abcdef";
    int *p;
    p=&s[2];
    printf("%c",*p);

}


