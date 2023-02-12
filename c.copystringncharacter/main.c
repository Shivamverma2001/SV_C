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
    printf("enter the number of elements you want to copy");//3
    scanf("%d",&n);
    strncpy(s1,s2,n);//it take 3 digits of s2 and replace s1 first 3 elements and store them in s1
    printf("string is %s",s1);//vervam
}
