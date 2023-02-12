#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *ptr;
    //ptr=fopen("getcdemo.c","r");
    //char c=fgetc(ptr);     // it read a character and always print 1st character
    //printf("The value of my character is %c\n",c);
    // printf("The value of my character is %c\n",fgetc(ptr));
      //printf("The value of my character is %c\n",fgetc(ptr));
       //printf("The value of my character is %c\n",fgetc(ptr));
        //printf("The value of my character is %c\n",fgetc(ptr));
         //printf("The value of my character is %c\n",fgetc(ptr));
   ptr=fopen("putcdemo.c","w");
   putc('c',ptr);
   putc('t',ptr);
   fclose(ptr);

    return 0;
}
