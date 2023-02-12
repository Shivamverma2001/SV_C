#include <stdio.h>
#include <stdlib.h>

int main()
{
      char s1[30],s2[30];
   printf("enter the string");
   gets(s1);
    printf("enter the string");
   gets(s2);
     int n=0;
     while(s1[n]==s2[n]&&s1[n]!='\0')
        n++;
     if(s1[n]>s2[n])
        printf("s1 is greater then s2");
     else if(s1[n]<s2[n])
        printf("s2 is greater then s1");
        else
        printf("s1 equal to s2");
}
