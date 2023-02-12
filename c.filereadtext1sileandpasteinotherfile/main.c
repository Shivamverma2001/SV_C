#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *ptr1,*ptr2;
    char c,d;
    ptr1=fopen("getcdemo.txt","r");
    ptr2=fopen("putcdemo.txt","w");
    c=fgetc(ptr1);
    while(c!=EOF)
    {
        fputc(c,ptr2);
        fputc(c,ptr2);
                c=fgetc(ptr1);
    }
    fclose(ptr1);
    fclose(ptr2);

}
