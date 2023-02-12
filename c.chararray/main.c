#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[30];//string declared
    printf("enter your name");
    gets(name);//name=&name[0]
    puts(name);
}
