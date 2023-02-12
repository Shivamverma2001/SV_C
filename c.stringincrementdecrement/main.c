#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x='a'+1;//show b
    printf("\n%c",x);
     x='z'-1;//show y
    printf("\n%c",x);
     printf("\n%c",--x);//show x
      printf("\n%c",++x);//show y
      //x= 'a'+'b';   not work
     //printf("\n%c",x);
    //char c= 'z'-'a';    not work
      //printf("%c",c);
}
