#include <stdio.h>
#include <string.h>

int main()
{
     char s1[30], s2[30];//declare the string
     printf("enter your string");
     gets(s2);
     strcpy(s1,s2);//copy s2 string in s1
     printf("your string s1 is: %s\n",s1);
       printf("your string s2 is: %s",s2);
}
