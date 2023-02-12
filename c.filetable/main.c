#include <stdio.h>
#include <stdlib.h>

int main()
{
 FILE *ptr;
 int num;
 printf("enter the integer value of which you want the multiplication table\n");
 scanf("%d",&num);
 ptr= fopen("table.txt","w");
 for(int i=1;i<=10;i++)
 {
     fprintf(ptr,"%d X %d = %d\n",num,i,num*i);
 }
 fclose(ptr);
 printf("successfully generated table of %d to table.txt",num);
    return 0;
}
