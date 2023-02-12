#include <stdio.h>
#include <string.h>
//if s1<s2 show -1
//if s1>s2 show 1
int main()
{
   char s1[30],s2[30];
    int n;
    printf("enter first string s1");//shivam
    gets(s1);
    printf("enter second string s2");//verma
    gets(s2);
     n =strcmp(s1,s2);//it compare aski element of s1 and s2 like s with v and h with e, i with r v with m and a with a
    if(n==0)
    {
        printf("strings are equal");

    }
       if(n<0)
    {
        printf("string1 is smaller than string2");

    }
       if(n>0)
    {
        printf("string1 is larger  than string2");

    }

}
