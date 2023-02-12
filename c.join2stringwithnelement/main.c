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
    strncat(s1,s2,n);//it join complete s1 with 3 elements of s2
    printf("string is %s",s1);//shivamver
}
