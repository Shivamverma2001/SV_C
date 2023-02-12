#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s1[30],s2[30];
    int n,u;
    printf("enter first string s1");//shivam
    gets(s1);
    printf("enter second string s2");//verma
    gets(s2);
    printf("enter the number of elements you want to compare");//3
    scanf("%d",&u);
     n =strcmp(s1,s2,u);//it compare first 3 aski element of s1 and s2 like s with v and h with e, i with r
    if(n==0)
    {
        printf("strings are equal");

    }
       if(n<0)
    {
        printf("string1 is smaller than string 2");

    }
       if(n>0)
    {
        printf("string1 is larger is greater then string 2");

    }
}
