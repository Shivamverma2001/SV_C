#include <stdio.h>
#include <stdlib.h>

int main()
{
   char s1[100],s2[100],s3[100];
   printf("enter the string 1 value");
   gets(s1);
   printf("\n enter the string 2 value");
   gets(s2);
 int i=0,j=0;
 while(s1[i]!='\0')
 {
     s3[j]=s1[i];
     i++;
     j++;

 }
 i=0;
 while(s2[i]!='\0')
 {
     s3[j]=s2[i];
     i++;
     j++;
 }
 s3[j]='\0';
 printf("the value of string is");
 puts(s3);
}
