#include <stdio.h>
#include <stdlib.h>

int main()
{
    //to determine the length of the string strlen()
    char s1[30];
    printf("enter your string");
    gets(s1);
    printf("the length of the string is %d\n",strlen(s1));
    // to convert the element into uppercase strupr()
     printf("the upper letter of the string is %s\n",strupr(s1));
    // to convert the element into lowercase strlwr()
     printf("the upper letter of the string is %s\n",strlwr(s1));
     //to convert the string into reversed string strrev()
     printf("the upper letter of the string is %s\n",strrev(s1));
}
