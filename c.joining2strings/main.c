#include <stdio.h>
#include <string.h>

int main()
{
    char s1[30],s2[30];
    int n;
    printf("enter first string s1");//shivam
    gets(s1);
    printf("enter second string s2");//verma
    gets(s2);
    strcat(s1,s2);//it join s1 and s2 in s1
    printf("string is %s",s1);//show shivamverma
}
