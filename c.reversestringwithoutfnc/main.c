#include <stdio.h>
#include <stdlib.h>

int main()
{
 char s1[30],s2[30];
 int temp;
 printf("enter the string");
 gets(s1);
 int i=0,j;
j=strlen(s1)-1;
while(i<j)
{
    temp=s1[i];
    s1[i]=s1[j];
    s1[j]=temp;
    i++;
    j--;
}
printf("reverse string2 is %s",s1);
}
