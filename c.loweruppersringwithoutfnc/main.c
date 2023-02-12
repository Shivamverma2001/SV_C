#include <stdio.h>
#include <stdlib.h>

int main()
{
   char s1[30];
   printf("enter the string");
   gets(s1);
   int i=0;
   while(s1[i]>='a'&&s1[i]<='z')
   {
       s1[i]=s1[i]-32;
       i++;
   }
   printf("enter the string");
   gets(s1);
   puts(s1);
    while(s1[i]>='A'&&s1[i]<='Z')
   {
       s1[i]=s1[i]+32;
       i++;
   }
   puts(s1);
}
