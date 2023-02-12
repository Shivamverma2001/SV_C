#include <stdio.h>
#include <stdlib.h>

int main()
{
  char s[100],n=0;
   printf("enter the string 1 value");
   gets(s);

    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            n++;

    }
    printf("vowels are %d",n);
}
