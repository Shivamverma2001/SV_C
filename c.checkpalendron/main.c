#include <stdio.h>
#include <stdlib.h>

int main()
{
   char s1[30],s2[30],temp;
   printf("enter the string");
   gets(s1);
   int i=0,j;
j=strlen(s1)-1;
strcpy(s2,s1);
while(i<j)
{
    temp=s1[i];
    s1[i]=s1[j];
    s1[j]=temp;
    i++;
    j--;
}
if(strcmp(s2,s1)==0)
{
    printf("given string is palindrom");
}
else
    printf("given string is not palindrom");
}
