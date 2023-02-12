//write a program to copy the contents of one string to another without using strcpy() function
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s2[30],s1[30];
    printf("enter the string s1");
    gets(s1);
    for(int i=0;s1[i]!='\0';i++)
    {
        s2[i]=s1[i];
    }
    printf("the string2 is %s",s2);
}
